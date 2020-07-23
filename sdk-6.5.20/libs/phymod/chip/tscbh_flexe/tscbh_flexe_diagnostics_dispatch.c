/*
 *         
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#include <phymod/phymod.h>
#include <phymod/phymod_system.h>
#include <phymod/phymod_diagnostics.h>
#include <phymod/phymod_diagnostics_dispatch.h>

#ifdef PHYMOD_TSCBH_FLEXE_SUPPORT

#include <phymod/chip/tscbh_flexe_diagnostics.h>

#include <phymod/chip/blackhawk_diagnostics.h>
#include <phymod/chip/tscbh_diagnostics.h>

__phymod_diagnostics__dispatch__t__ phymod_diagnostics_tscbh_flexe_diagnostics_driver = {

    NULL, /* phymod_phy_rx_slicer_position_set */
    NULL, /* phymod_phy_rx_slicer_position_get */
    NULL, /* phymod_phy_rx_slicer_position_max_get */
    blackhawk_phy_prbs_config_set,
    blackhawk_phy_prbs_config_get,
    blackhawk_phy_prbs_enable_set,
    blackhawk_phy_prbs_enable_get,
    blackhawk_phy_prbs_status_get,
    blackhawk_phy_pattern_config_set,
    blackhawk_phy_pattern_config_get,
    blackhawk_phy_pattern_enable_set,
    blackhawk_phy_pattern_enable_get,
    NULL, /* phymod_core_diagnostics_get */
    tscbh_phy_diagnostics_get,
    blackhawk_phy_pmd_info_dump,
    NULL, /* phymod_phy_pcs_info_dump */
    blackhawk_phy_eyescan_run,
    NULL, /* phymod_phy_link_mon_enable_set */
    NULL, /* phymod_phy_link_mon_enable_get */
    NULL, /* phymod_phy_link_mon_status_get */
    NULL, /* phymod_phy_fec_correctable_counter_get */
    NULL, /* phymod_phy_fec_uncorrectable_counter_get */
    NULL, /* phymod_phy_stat_get */
    tscbh_phy_fec_cl91_correctable_counter_get,
    tscbh_phy_fec_cl91_uncorrectable_counter_get,
    blackhawk_phy_PAM4_tx_pattern_enable_set,
    blackhawk_phy_PAM4_tx_pattern_enable_get,
    blackhawk_phy_ber_proj,
    blackhawk_phy_fast_ber_proj_get,
    tscbh_phy_rsfec_symbol_error_counter_get,
    NULL, /* phymod_phy_linkcat */
    NULL, /* phymod_phy_pmd_lane_diag_debug_level_set */
    NULL, /* phymod_phy_pmd_lane_diag_debug_level_get */
    NULL, /* phymod_phy_pmd_usr_misc_ctrl_set */
    NULL, /* phymod_phy_pmd_usr_misc_ctrl_get */
    tscbh_phy_fec_error_inject_set,
    tscbh_phy_fec_error_inject_get,
};

#endif /* PHYMOD_TSCBH_FLEXE_SUPPORT */
