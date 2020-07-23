/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 * File:        port.c
 * Purpose:     Port Management for FIREBOLT 6
 *
 *              The purpose is to set port management implementation specified
 *              to FIREBOLT 6 in this file.
 */

#include <soc/defs.h>

#if defined(BCM_FIREBOLT6_SUPPORT)
#include <soc/trident3.h>

#include <bcm_int/esw/tomahawk.h>
#include <bcm_int/esw/trident3.h>
#include <bcm_int/esw/firebolt6.h>

#include <bcm_int/esw/xgs5.h>
#include <bcm_int/esw/portctrl.h>
#include <soc/firebolt6.h>
#include <soc/firebolt6_tdm.h>
#include <soc/flexport/firebolt6/firebolt6_flexport.h>

static bcmi_xgs5_dev_info_t  *bcmi_fb6_dev_info[SOC_MAX_NUM_DEVICES];

/* HW Definitions */
static bcmi_xgs5_port_drv_t    bcmi_fb6_port_drv;

/*
 * Function:
 *      bcmi_td3_speed_ability_get
 * Purpose:
 *      Retrieve the local port abilities.
 * Parameters:
 *      unit - Unit.
 *      port - Logical port num.
 *      mask - (OUT) Mask of BCM_PORT_ABILITY_ values indicating the
 *              supported speeds of the port.
 * Returns:
 *      BCM_E_NONE
 *      BCM_E_XXX
 */
int
bcmi_fb6_speed_ability_get(int unit, bcm_port_t port, bcm_port_abil_t *mask)
{
    return soc_fb6_support_speeds(unit,
            SOC_INFO(unit).port_num_lanes[port], mask);
}




/*
 * Function:
 *      bcmi_fb6_port_dev_info_init
 * Purpose:
 *      Initialize the device info.
 * Parameters:
 *      unit - (IN) Unit number.
 * Returns:
 *      BCM_E_xxx
 * Notes:
 */
STATIC int
bcmi_fb6_port_dev_info_init(int unit)
{
    bcmi_xgs5_dev_info_t *dev_info;
    soc_info_t *si = &SOC_INFO(unit);
    int alloc_size;
    int pipe = 0, phy_port, blk, bindex;
    int i;

    /* Free bcmi_td3_dev_info[unit] if already allocated */
    if (bcmi_fb6_dev_info[unit]) {
        sal_free(bcmi_fb6_dev_info[unit]);
        bcmi_fb6_dev_info[unit] = NULL;
    }

    /* Allocate memory for main SW data structure */
    alloc_size = sizeof(bcmi_xgs5_dev_info_t) +
                 (sizeof(bcmi_xgs5_phy_port_t) * FIREBOLT6_PHY_PORTS_PER_DEV);
    dev_info = sal_alloc(alloc_size, "bcmi_fb6_dev_info");
    if (dev_info == NULL) {
        return BCM_E_MEMORY;
    }
    sal_memset(dev_info, 0, alloc_size);
    dev_info->phy_port_info = (bcmi_xgs5_phy_port_t *)&dev_info[1];
    bcmi_fb6_dev_info[unit] = dev_info;

    /* Clear data structure */

    /* Device information init */
    dev_info = bcmi_fb6_dev_info[unit];
    dev_info->phy_ports_max = FIREBOLT6_PHY_PORTS_PER_DEV;
    dev_info->mmu_lossless = 0;
    dev_info->asf_prof_default = _SOC_ASF_MEM_PROFILE_EXTREME;
    dev_info->pipe_bound = 1;
    /* First logical port in pipe   */
    dev_info->pipe_log_port_base[pipe] = 0;

    /* First physical port in pipe  */
    dev_info->pipe_phy_port_base[pipe] = 0;

    dev_info->ports_pipe_max[pipe] = FIREBOLT6_PHY_PORTS_PER_PIPE;

    /* 10G is the min speed in TDM calendar program.
     * 1G should be passed as 10G to TDM calculation.
     */
    dev_info->tdm_speed_min = SPEED_10G;
    dev_info->cntmaxsize_xl = 16000,
    dev_info->cntmaxsize_cl = 16000,

    dev_info->restriction_mask = BCMI_XGS5_FLEXPORT_RESTRICTION_SPEED_CLASS |
                                 BCMI_XGS5_FLEXPORT_RESTRICTION_PM_MIX_ETH_HIGIG |
                                 BCMI_XGS5_FLEXPORT_RESTRICTION_PM_SINGLE_PLL;

    dev_info->encap_mask = BCM_PA_ENCAP_IEEE | BCM_PA_ENCAP_HIGIG2;

    /*
     * Restriction 13:No port configurations with more than 5 port speed
     *                classes are supported.
     */
    dev_info->speed_class.speed_class_num = _FB6_TDM_SPEED_CLASS_MAX;
    dev_info->speed_class.no_mix_speed_mask = 0;

    dev_info->port_ratio_mask = BCMI_XGS5_PORT_RATIO_SINGLE |
                                    BCMI_XGS5_PORT_RATIO_DUAL_1_1 |
                                    BCMI_XGS5_PORT_RATIO_DUAL_2_1 |
                                    BCMI_XGS5_PORT_RATIO_DUAL_1_2 |
                                    BCMI_XGS5_PORT_RATIO_TRI_023_2_1_1 |
                                    BCMI_XGS5_PORT_RATIO_TRI_023_4_1_1 |
                                    BCMI_XGS5_PORT_RATIO_TRI_012_1_1_2 |
                                    BCMI_XGS5_PORT_RATIO_TRI_012_1_1_4 |
                                    BCMI_XGS5_PORT_RATIO_QUAD;

    dev_info->pipe_lr_bw = 2048000;

    /* Set valid speeds for 1/2/4 Lanes */
    BCM_IF_ERROR_RETURN
        (soc_fb6_support_speeds(unit, 1, &dev_info->speed_valid[1]));
    BCM_IF_ERROR_RETURN
        (soc_fb6_support_speeds(unit, 2, &dev_info->speed_valid[2]));
    BCM_IF_ERROR_RETURN
        (soc_fb6_support_speeds(unit, 4, &dev_info->speed_valid[4]));

    /*
     * Set physical port info:
     *  - Port lane capability
     *  - Port is enabled for flexport
     *  - pipe
     */
    for (phy_port = 0; phy_port < FIREBOLT6_PHY_PORTS_PER_DEV; phy_port++) {
        /* Set information to invalid */
        dev_info->phy_port_info[phy_port].pipe = -1;
    }

    /* Flexport is not supported for CPU/LB/MNG ports, so skip CPU/LB/MNG */
    for (phy_port = 1; phy_port < FIREBOLT6_PHY_PORTS_PER_DEV; phy_port++) {
        /* Check for end of port list */
        if (SOC_PORT_BLOCK(unit, phy_port) < 0 &&
            SOC_PORT_BINDEX(unit, phy_port) < 0) {
            break;
        }
        /* Set pipe information */
        dev_info->phy_port_info[phy_port].pipe = 0;

        for (i = 0; i < SOC_DRIVER(unit)->port_num_blktype; i++) {
            blk = SOC_PORT_IDX_BLOCK(unit, phy_port, i);
            bindex = SOC_PORT_IDX_BINDEX(unit, phy_port, i);

            if ((blk < 0) || (bindex < 0)) {
                continue;
            }

            if (SOC_BLOCK_TYPE(unit, blk) == SOC_BLK_CLPORT) {
                /* Set port lane capabilites */
                dev_info->phy_port_info[phy_port].lanes_valid =
                                                BCMI_XGS5_PORT_LANES_1;
                if (bindex == 0) {
                    dev_info->phy_port_info[phy_port].lanes_valid |=
                        BCMI_XGS5_PORT_LANES_2 | BCMI_XGS5_PORT_LANES_4;
                } else if (bindex == 2) {
                    dev_info->phy_port_info[phy_port].lanes_valid |=
                                                BCMI_XGS5_PORT_LANES_2;
                }

                if (SHR_BITGET(si->flexible_pm_bitmap,blk)) {
                    dev_info->phy_port_info[phy_port].flex = 1;
                }
            }
        } /* for port_num_blktype */
        dev_info->phy_port_info[phy_port].max_lane_speed = 27000;
    }

    /* Init condition */
    _bcmi_td3_init_condition_set(unit, dev_info);

    return BCM_E_NONE;
}

/*
 * Function:
 *      bcmi_fb6_port_soc_resource_init
 * Purpose:
 *      Initialize SOC Port Structure.
 *      This includes:
 *          Copy Port information from BCM port resource array.
 *          Set correct pipe, MMU port, IDB port for new logical port.
 * Parameters:
 *      unit         - (IN)  Unit number.
 *      nport        - (IN)  Number of elements in array resource.
 *      resource     - (IN)  BCM Port resource configuration array.
 *      soc_resource - (OUT) SOC Port resource array.
 * Returns:
 *      BCM_E_xxx
 * Notes:
 */
STATIC int
bcmi_fb6_port_soc_resource_init(int unit, int nport,
                                bcm_port_resource_t *resource,
                                soc_port_resource_t *soc_resource)
{
    int i;
    int logic_port, idb_port;
    soc_info_t *si = &SOC_INFO(unit);
    int phy_port = 0; 
    int oversub = 0;

    /*
     * SOC Port Structure initialization
     */

    /* Clear data structure */
    sal_memset(soc_resource, 0, sizeof(soc_port_resource_t) * nport);

    /* Copy initial information */
    for (i = 0; i < nport; i++) {
        logic_port = resource[i].port;
        if (resource[i].physical_port == -1) {
            phy_port = si->port_l2p_mapping[logic_port];
        } else {
            phy_port = resource[i].physical_port;
        }
        idb_port = si->port_p2m_mapping[phy_port];
        oversub = soc_fb6_port_oversub_get(unit, phy_port, logic_port);

        soc_resource[i].flags = resource[i].flags;
        soc_resource[i].logical_port = logic_port;
        soc_resource[i].physical_port = resource[i].physical_port;
        soc_resource[i].speed = resource[i].speed;
        soc_resource[i].num_lanes = resource[i].lanes;
        soc_resource[i].encap = resource[i].encap;
        soc_resource[i].idb_port = idb_port;
        soc_resource[i].mmu_port = idb_port;
        soc_resource[i].oversub = oversub;

        /* Populate coe related information. */
        soc_resource[i].num_subports = resource[i].num_subports;

        if (resource[i].flags & BCM_PORT_RESOURCE_CASCADED) {

            soc_resource[i].coe_port = 1;
            soc_resource[i].num_subports = resource[i].num_subports;
            soc_resource[i].port_lc_map  = resource[i].line_card;

        } else {
            soc_resource[i].port_lc_map = -1;
            soc_resource[i].num_subports = -1;
            soc_resource[i].coe_port = 0;
        }

        if (resource[i].speed >= 40000) {
            soc_resource[i].hsp = 1;
	    }
    }

    return BCM_E_NONE;
}

/* Function:
 *      bcmi_fb6_port_resource_validate
 * Purpose:
 *      Validate that the given FlexPort operations is valid.
 * Parameters:
 *      unit                 - (IN)  Unit number.
 *      port_schedule_state  - (OUT) Port resource state.
 * Returns:
 *      BCM_E_xxx
 * Notes:
 */
STATIC int
bcmi_fb6_port_resource_validate(int unit, soc_port_schedule_state_t
                                *port_schedule_state)
{
    int i;

    if (SAL_BOOT_SIMULATION) {
        return BCM_E_NONE;
    }

    for(i=0; i<port_schedule_state->nport; i++) {
        /* Validate ports that are brought up. */
        if (port_schedule_state->resource[i].physical_port != -1) {
            BCM_IF_ERROR_RETURN(
                _soc_fb6_port_speed_validate(unit,
                    port_schedule_state->resource[i].logical_port,
                    port_schedule_state->resource[i].physical_port,
                    port_schedule_state->resource[i].num_lanes,
                    port_schedule_state->resource[i].encap,
                    port_schedule_state->resource[i].speed));
        }
    }

    return BCM_E_NONE;
}

/*
 * Function:
 *      bcmi_fb6_pre_flexport_tdm
 * Purpose:
 *      Pass TDM information pre FlexPort to DV FlexPort API
 * Parameters:
 *      unit                 - (IN)  Unit number.
 *      port_schedule_state  - (OUT) Port resource state.
 * Returns:
 *      BCM_E_xxx
 * Notes:
 */
STATIC int
bcmi_fb6_pre_flexport_tdm(int unit,
                            soc_port_schedule_state_t *port_schedule_state)
{
    port_schedule_state->is_flexport = 1;
    BCM_IF_ERROR_RETURN
        (soc_fb6_port_schedule_tdm_init(unit, port_schedule_state));
    return BCM_E_NONE;
}

/*
 * Function:
 *      bcmi_fb6_post_flexport_tdm
 * Purpose:
 *      Update TDM information in SOC with post FlexPort TDM state return from
 *      DV FlexPort API.
 * Parameters:
 *      unit                 - (IN)  Unit number.
 *      port_schedule_state  - (IN) Port resource state.
 * Returns:
 *      BCM_E_xxx
 * Notes:
 */
STATIC int
bcmi_fb6_post_flexport_tdm(int unit,
                            soc_port_schedule_state_t *port_schedule_state)
{
    int mmu_port, port;
    soc_reg_t reg;
    uint64 rval;

    BCM_IF_ERROR_RETURN
        (soc_fb6_soc_tdm_update(unit, port_schedule_state));

    /* Map unused logical port numbers to unused mmu port number after flex
     * This is needed to clear the internal mapping of logical port to mmu port
     */
    reg = MMU_PORT_TO_DEVICE_PORT_MAPPINGr;
    COMPILER_64_ZERO(rval);
    for (mmu_port = 0; mmu_port < FIREBOLT6_MMU_PORTS_PER_DEV; mmu_port++) {
        SOC_IF_ERROR_RETURN(soc_reg_rawport_get(unit, reg, mmu_port, 0, &rval));
        if (soc_reg64_field32_get(unit, reg, rval, DEVICE_PORTf) == 0xff) {
            /* Unused mmu port */
            for (port = 1; port < FIREBOLT6_DEV_PORTS_PER_DEV; port++) {
                if (SOC_INFO(unit).port_l2p_mapping[port] == -1) {
                    /* Unused logical port */
                    soc_reg64_field32_set(unit, reg, &rval, DEVICE_PORTf, port);
                    SOC_IF_ERROR_RETURN(soc_reg_rawport_set(unit, reg, mmu_port, 0, rval));
                }
            }
            /* Reset unused MMU Port to 0xFF */
            soc_reg64_field32_set(unit, reg, &rval, DEVICE_PORTf, 0xff);
            SOC_IF_ERROR_RETURN(soc_reg_rawport_set(unit, reg, mmu_port, 0, rval));
            break;
        }
    }

    return BCM_E_NONE;
}

/*
 * Function:
 *      bcmi_fb6_port_enable
 * Purpose:
 *      Enable port.
 * Parameters:
 *      unit                 - (IN)  Unit number.
 *      port_schedule_state  - (IN) Port resource state.
 * Returns:
 *      BCM_E_xxx
 * Notes:
 *      This function should only be called with PORTMOD enabled
 */
STATIC int
bcmi_fb6_port_enable(int unit, soc_port_schedule_state_t *port_schedule_state)
{

    BCM_IF_ERROR_RETURN(
        soc_firebolt6_flex_top_port_up(unit, port_schedule_state));
    return BCM_E_NONE;
}

/*
 * Function:
 *      bcmi_fb6_port_disable
 * Purpose:
 *      Disable port.
 * Parameters:
 *      unit                 - (IN)  Unit number.
 *      port_schedule_state  - (IN) Port resource state.
 * Returns:
 *      BCM_E_xxx
 * Notes:
 *      This function should only be called with PORTMOD enabled
 */
STATIC int
bcmi_fb6_port_disable(int unit, soc_port_schedule_state_t *port_schedule_state)
{

    BCM_IF_ERROR_RETURN(
        soc_firebolt6_flex_top_port_down(unit, port_schedule_state));
    return BCM_E_NONE;
}

int
bcmi_fb6_port_mmu_attach(int unit, int port)
{

    if (IS_CPU_PORT(unit, port) || IS_LB_PORT(unit, port) ||
        IS_MANAGEMENT_PORT(unit, port)) {
        return BCM_E_PARAM;
    }

    BCM_IF_ERROR_RETURN
        (_soc_fb6_mmu_port_l0_mapping_set(unit, port));

    BCM_IF_ERROR_RETURN
        (soc_fb6_num_cosq_port_init(unit, port));

    BCM_IF_ERROR_RETURN
        (soc_fb6_mmu_config_port_init(unit, port));

    return BCM_E_NONE;
}

/*
 * Function:
 *      bcmi_fb6_port_detach_asf
 * Purpose:
 *      Update ASF when port deleted during Flexport operations.
 * Parameters:
 *      unit                 - (IN)  Unit number.
 *      port                 - (IN)  Logical port number.
 * Returns:
 *      BCM_E_xxx
 * Notes:
 */
STATIC int
bcmi_fb6_port_detach_asf(int unit, bcm_port_t port)
{

    return BCM_E_NONE;
}

int soc_fb6_reconfigure_ports (
  int unit,
  soc_port_schedule_state_t *port_schedule_state)
{

    BCM_IF_ERROR_RETURN(
        soc_firebolt6_reconfigure_ports(unit, port_schedule_state));
    return BCM_E_NONE;
}

/*
 * Function Vectors
 */

static bcm_esw_port_drv_t bcm_fb6_port_drv = {
    /* fn_drv_init                */ bcmi_fb6_port_fn_drv_init,
    /* resource_set               */ bcmi_xgs5_port_resource_set,
    /* resource_get               */ bcmi_xgs5_port_resource_get,
    /* resource_multi_set         */ bcmi_xgs5_port_resource_multi_set,
    /* resource_speed_set         */ bcmi_xgs5_port_speed_set,
    /* resource_traverse          */ bcmi_xgs5_port_resource_traverse,
    /* port_redirect_set          */ NULL,
    /* port_redirect_get          */ NULL,
    /* port_enable_set            */ bcmi_xgs5_port_enable_set
};

/* Device programming routines */
static bcmi_xgs5_port_func_t bcmi_fb6_port_calls = {
    /* reconfigure_ports        */ soc_fb6_reconfigure_ports,
    /* soc_resource_init        */ bcmi_fb6_port_soc_resource_init,
    /* port_resource_validate   */ bcmi_fb6_port_resource_validate,
    /* pre_flexport_tdm         */ bcmi_fb6_pre_flexport_tdm,
    /* post_flexport_tdm        */ bcmi_fb6_post_flexport_tdm,
    /* port_macro_update        */ NULL,
    /* port_enable              */ bcmi_fb6_port_enable,
    /* port_disable             */ bcmi_fb6_port_disable,
    /* no_tdm_speed_update      */ NULL,
    /* speed_ability_get        */ bcmi_fb6_speed_ability_get,
    /* speed_mix_validate       */ NULL,
    /* cos_map_update           */ bcmi_fb6_port_cosmap_update,
};

static
int (*fb6_port_attach_exec[PORT_ATTACH_EXEC__MAX])(int unit, bcm_port_t port) = {
    /* MMU config init */
    &bcmi_fb6_port_mmu_attach,

    /* PORT module (bcm_esw_port_init) */
    &bcmi_xgs5_port_attach_dscp,
    &bcmi_xgs5_port_attach_software,
    &bcmi_xgs5_port_attach_egr_vlan_action,
    &bcmi_xgs5_port_cfg_init,
    &bcmi_xgs5_port_attach_port_probe,
    &bcmi_xgs5_port_attach_frame_length_check,
    &bcmi_xgs5_port_attach_rcpu_mtu,
    &bcmi_xgs5_port_attach_outer_tpid,
    &bcmi_xgs5_port_egr_block_profile_init,
    &bcmi_xgs5_port_attach_vlan_protocol,
    &bcmi_xgs5_port_attach_eee,
    &bcmi_xgs5_port_attach_higig,
    &bcmi_xgs5_port_attach_port_info_cfg,
    &bcmi_xgs5_port_attach_egr_link_delay,

    /* Other modules related to port */
    &bcmi_xgs5_port_attach_stg,
    &bcmi_xgs5_port_attach_vlan,
    &bcmi_xgs5_port_attach_trunk,
    &bcm_fb6_cosq_port_attach,
    &bcmi_xgs5_port_attach_linkscan,
    &bcmi_xgs5_port_attach_stat,
    &bcmi_td3_port_attach_stack,
    &bcmi_xgs5_port_attach_rate,
    &bcmi_xgs5_port_attach_field,
    &bcmi_xgs5_port_attach_mirror,
    &bcmi_xgs5_port_attach_l3,
    &bcmi_xgs5_port_attach_ipmc,
#if defined(INCLUDE_L3)
    &bcm_th_ipmc_repl_port_attach,
#else
    NULL,
#endif
    &bcmi_xgs5_port_attach_mpls,
    &bcmi_xgs5_port_attach_mim,
};

static
int (*fb6_port_detach_exec[PORT_DETACH_EXEC__MAX])(int unit, bcm_port_t port) = {
    /* Other modules related to port */
#if defined(INCLUDE_L3)
    &bcm_th_ipmc_repl_port_detach,
#else
    NULL,
#endif
    &bcmi_xgs5_port_detach_ipmc,
    &bcmi_xgs5_port_detach_mpls,
    &bcmi_xgs5_port_detach_mim,
    &bcmi_xgs5_port_detach_l3,
    &bcmi_xgs5_port_detach_mirror,
    &bcmi_xgs5_port_detach_field,
    &bcmi_xgs5_port_detach_rate,
    &bcmi_td3_port_detach_stack,
    &bcm_fb6_cosq_port_detach,
    &bcmi_xgs5_port_detach_trunk,
    &bcmi_xgs5_port_detach_vlan,
    &bcmi_xgs5_port_detach_stg,

    /* PORT module (_bcm_esw_port_deinit) */
    &bcmi_fb6_port_detach_asf,
    &bcmi_xgs5_port_detach_egr_link_delay,
    &bcmi_xgs5_port_detach_higig,
    &bcmi_xgs5_port_detach_eee,
    &bcmi_xgs5_port_detach_vlan_protocol,
    &bcmi_xgs5_port_egr_block_profile_init,
    &bcmi_xgs5_port_detach_phy,
    &bcmi_xgs5_port_detach_dscp,
    &bcmi_xgs5_port_cfg_init,
    &bcmi_xgs5_port_detach_egr_vlan_action,
    &bcmi_xgs5_port_detach_software,
};

int
bcmi_fb6_port_fn_drv_init(int unit)
{
/*
    int phase_pos, present;
*/
    BCM_IF_ERROR_RETURN
        (bcmi_fb6_port_dev_info_init(unit));

    /* BCMI Driver init */
    bcmi_fb6_port_drv.port_calls = &bcmi_fb6_port_calls;
    bcmi_fb6_port_drv.dev_info[unit] = bcmi_fb6_dev_info[unit];


    sal_memcpy(bcmi_fb6_port_drv.port_calls->port_attach_exec,
               fb6_port_attach_exec,
               sizeof(bcmi_fb6_port_drv.port_calls->port_attach_exec));

    sal_memcpy(bcmi_fb6_port_drv.port_calls->port_detach_exec,
               fb6_port_detach_exec,
               sizeof(bcmi_fb6_port_drv.port_calls->port_detach_exec));

    /* Initialize Common XGS5 Port module */
    BCM_IF_ERROR_RETURN
        (bcmi_xgs5_port_fn_drv_init(unit,
                                    &bcm_fb6_port_drv,
                                    &bcmi_fb6_port_drv,
                                    NULL));
#if 0

    BCM_IF_ERROR_RETURN(soc_check_flex_phase(unit, fb6_flexport_phases,
                                             soc_firebolt6_flex_top_port_down,
                                             &present));
    /* Detach port enable/disable in DV Flexport */
    if (present) {
        BCM_IF_ERROR_RETURN
            (soc_detach_flex_phase(unit, fb6_flexport_phases,
                                   soc_firebolt6_flex_top_port_down,
                                   &phase_pos));
    }
    BCM_IF_ERROR_RETURN(soc_check_flex_phase(unit, mv2_flexport_phases,
                                             soc_firebolt6_flex_top_port_up,
                                             &present));
    if (present) {
        BCM_IF_ERROR_RETURN
            (soc_detach_flex_phase(unit, mv2_flexport_phases,
                                   soc_firebolt6_flex_top_port_up,
                                   &phase_pos));
    }
#endif
    return BCM_E_NONE;
}

#else /* BCM_FIREBOLT6_SUPPORT */
int _fb6_port_not_empty;

#endif  /* BCM_FIREBOLT6_SUPPORT */
