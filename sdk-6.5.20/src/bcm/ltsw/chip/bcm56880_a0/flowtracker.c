/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/mbcm/flowtracker.h>
#include <bcm_int/ltsw/xfs/flowtracker.h>

#include <shr/shr_bitop.h>
#include <shr/shr_debug.h>
#include <bcm/flexctr.h>
#include <bcm_int/ltsw/flexctr.h>
#include <bcm_int/ltsw_dispatch.h>
#include <bcm_int/ltsw/flowtracker_int.h>
#include <bcmltd/chip/bcmltd_str.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_FLOWTRACKER

/******************************************************************************
 * Private functions
 */

static int
bcm56880_a0_ltsw_flowtracker_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_flowtracker_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_flowtracker_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_elephant_hash_config_set(
    int unit,
    bcm_flowtracker_elephant_hash_table_t hash_table,
    int instance_num,
    int bank_num,
    bcm_flowtracker_elephant_hash_type_t hash_type,
    int right_rotate_bits)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_flowtracker_elephant_hash_config_set(unit, hash_table, instance_num, bank_num, hash_type, right_rotate_bits));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_elephant_hash_config_get(
    int unit,
    bcm_flowtracker_elephant_hash_table_t hash_table,
    int instance_num,
    int bank_num,
    bcm_flowtracker_elephant_hash_type_t *hash_type,
    int *right_rotate_bits)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_flowtracker_elephant_hash_config_get(unit, hash_table, instance_num, bank_num, hash_type, right_rotate_bits));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_elephant_control_set(
    int unit,
    bcm_flowtracker_elephant_control_t type,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_flowtracker_elephant_control_set(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_elephant_control_get(
    int unit,
    bcm_flowtracker_elephant_control_t type,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_flowtracker_elephant_control_get(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_elephant_stats_set(
    int unit,
    bcm_flowtracker_elephant_stats_t *stats)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_flowtracker_elephant_stats_set(unit, stats));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_elephant_stats_get(
    int unit,
    bcm_flowtracker_elephant_stats_t *stats)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_flowtracker_elephant_stats_get(unit, stats));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_default_grp_supported(
    int unit,
    bool *supported)
{
    *supported = false;
    return SHR_E_NONE;
}

static int
bcm56880_a0_ltsw_flowtracker_group_tracking_params_validate(
    int unit,
    bcm_flowtracker_group_t id,
    int num_tracking_params,
    bcm_flowtracker_tracking_param_info_t *list_of_tracking_params)
{
    int i;
    bool in_port_qual_present = false;
    bool outer_ip_param = false;
    bool inner_ip_param = false;
    SHR_FUNC_ENTER(unit);

    for (i = 0; i < num_tracking_params; i++) {
        switch (list_of_tracking_params[i].param) {
            case bcmFlowtrackerTrackingParamTypeIngPort:
                in_port_qual_present = true;
                break;

            case bcmFlowtrackerTrackingParamTypeSrcIPv4:
            case bcmFlowtrackerTrackingParamTypeDstIPv4:
            case bcmFlowtrackerTrackingParamTypeL4SrcPort:
            case bcmFlowtrackerTrackingParamTypeL4DstPort:
            case bcmFlowtrackerTrackingParamTypeIPProtocol:
                outer_ip_param = true;
                break;

            case bcmFlowtrackerTrackingParamTypeInnerSrcIPv4:
            case bcmFlowtrackerTrackingParamTypeInnerDstIPv4:
            case bcmFlowtrackerTrackingParamTypeInnerL4SrcPort:
            case bcmFlowtrackerTrackingParamTypeInnerL4DstPort:
            case bcmFlowtrackerTrackingParamTypeInnerIPProtocol:
                inner_ip_param = true;
                break;

            default:
                break;
        }
    }
    if (!in_port_qual_present) {
        LOG_ERROR(BSL_LOG_MODULE,
                (BSL_META_U(unit,
                            "FT(unit %d) Error: Tracking param type\
                 in port is mandatory.\n"),
                 unit));
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    if (outer_ip_param && inner_ip_param) {
        LOG_ERROR(BSL_LOG_MODULE,
                (BSL_META_U(unit,
                            "FT(unit %d) Error: Cannot mix inner and outer IP \
                 params.\n"),
                 unit));
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_group_export_triggers_validate(
    int unit,
    bcm_flowtracker_group_t id,
    bcm_flowtracker_export_trigger_info_t *export_trigger_info)
{
    SHR_FUNC_ENTER(unit);

    /* Unexpected export triggers */
    if (BCM_FLOWTRACKER_TRIGGER_GET(*export_trigger_info,
                            bcmFlowtrackerExportTriggerDrop)) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }
    if (BCM_FLOWTRACKER_TRIGGER_GET(*export_trigger_info,
                            bcmFlowtrackerExportTriggerCongestion)) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }
    if (BCM_FLOWTRACKER_TRIGGER_GET(*export_trigger_info,
                            bcmFlowtrackerExportTriggerCount)) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_group_actions_validate(
    int unit,
    bcm_flowtracker_group_t id,
    uint32 flags,
    uint8_t hw_learn_en,
    int num_actions,
    bcm_flowtracker_group_action_info_t *action_list)
{
    int i;
    bool actn_valid = false;
    SHR_FUNC_ENTER(unit);

    if (hw_learn_en == FT_HW_LEARN_ENABLE_WO_EAPP) {
        for (i = 0; i < num_actions; i++) {
            actn_valid = false;
            switch (action_list[i].action) {
                case bcmFlowtrackerGroupActionOpaqueObject:
                case bcmFlowtrackerGroupActionFlexCtrAssign:
                case bcmFlowtrackerGroupActionIfaInsert:
                case bcmFlowtrackerGroupActionIfaDelete:
                case bcmFlowtrackerGroupActionVxlanGbpEnable:
                case bcmFlowtrackerGroupActionINTResidenceTimeEnable:
                case bcmFlowtrackerGroupActionCopyToCpu:
                case bcmFlowtrackerGroupActionDrop:
                case bcmFlowtrackerGroupActionDropCancel:
                case bcmFlowtrackerGroupActionRedirectPort:
                case bcmFlowtrackerGroupActionRedirectIpmc:
                case bcmFlowtrackerGroupActionRedirectMcast:
                case bcmFlowtrackerGroupActionL3Switch:
                case bcmFlowtrackerGroupActionRedirectCancel:
                case bcmFlowtrackerGroupActionDestinationType:
                case bcmFlowtrackerGroupActionFlexStateAssign:
                    actn_valid = true;
                    break;
                default:
                    break;
            }
            if (actn_valid == false) {
                SHR_ERR_EXIT(SHR_E_PARAM);
            }
        }
    } else {
        if (num_actions > 1) {
            SHR_ERR_EXIT(SHR_E_PARAM);
        }

        if (action_list[0].action != bcmFlowtrackerGroupActionOpaqueObject) {
            SHR_ERR_EXIT(SHR_E_PARAM);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_flex_ctr_pkt_byte_reserve(
    int unit,
    int max_flows,
    uint8_t hw_learn_en,
    uint32_t *flex_ctr_stat_id,
    uint32_t *flex_ctr_lt_id)
{
    bcm_flexctr_action_t action = {0};
    bcm_flexctr_index_operation_t *index_op = NULL;
    bcm_flexctr_value_operation_t *value_a_op = NULL;
    bcm_flexctr_value_operation_t *value_b_op = NULL;
    uint32_t stat_counter_id;
    int group_id = 0, options = BCMI_LTSW_FLEXCTR_OPTIONS_INTERNAL;
    bcmi_ltsw_flexctr_counter_info_t ctr_info = {0};

    SHR_FUNC_ENTER(unit);

    action.source = bcmiFlexctrSourceEM_FT;
    action.mode = bcmFlexctrCounterModeNormal;
    action.hint = group_id;
    action.index_num = max_flows;
    action.drop_count_mode = bcmFlexctrDropCountModeAll;

    /*
     * Counter index is derived from
     * UFT_HIT_INDEX (SW learning) or
     * NON_UFT_HIT_INDEX (HW learning)
     */
    index_op = &action.index_operation;
    index_op->object[0] = bcmFlexctrObjectIngEmFtHitIndex0;
    if (hw_learn_en) {
        index_op->mask_size[0] = 13; /* Bits 1 to 13 */
        index_op->shift[0] = 1; /* Shift by 1 since we are starting from 1 */
    } else {
        index_op->mask_size[0] = 15; /* Bits 1 to 15 */
        index_op->shift[0] = 1; /* Shift by 1 since we are starting from 1 */
    }
    index_op->object[1] = bcmFlexctrObjectIngEmFtHitIndex1;
    if (hw_learn_en) {
        index_op->mask_size[1] = 5; /* Bits 16 to 20 */
        /* Shift only by 12 since 16 to 18 is to be ignored. */
        index_op->shift[1] = 10;
    } else {
        index_op->mask_size[1] = 6; /* Bits 16 to 21 */
        /* Shift only by 12 since 16 to 18 is to be ignored. */
        index_op->shift[1] = 12;
    }

    /* Increase counter per packet. */
    value_a_op = &action.operation_a;
    value_a_op->select = bcmFlexctrValueSelectCounterValue;
    value_a_op->object[0] = bcmFlexctrObjectConstOne;
    value_a_op->mask_size[0] = 1;
    value_a_op->shift[0] = 0;
    value_a_op->object[1] = bcmFlexctrObjectConstZero;
    value_a_op->mask_size[1] = 1;
    value_a_op->shift[1] = 0;
    value_a_op->type = bcmFlexctrValueOperationTypeInc;

    /* Increase counter per packet bytes. */
    value_b_op = &action.operation_b;
    value_b_op->select = bcmFlexctrValueSelectPacketLength;
    value_b_op->type = bcmFlexctrValueOperationTypeInc;
    SHR_IF_ERR_VERBOSE_EXIT
        (bcm_ltsw_flexctr_action_create(unit, options, &action, &stat_counter_id));

    *flex_ctr_stat_id = stat_counter_id;

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_flexctr_counter_id_info_get(unit, stat_counter_id, &ctr_info));

    *flex_ctr_lt_id = ctr_info.action_profile_id;

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_flex_ctr_hit_bit_reserve(
    int unit,
    int hitbit_type,
    int max_flows,
    uint8_t hw_learn_en,
    uint32_t *flex_ctr_stat_id,
    uint32_t *flex_ctr_lt_id)
{
    bcm_flexctr_action_t action = {0};
    bcm_flexctr_index_operation_t *index_op = NULL;
    bcm_flexctr_value_operation_t *value_a_op = NULL;
    uint32_t stat_counter_id;
    int group_id = 0, options = BCMI_LTSW_FLEXCTR_OPTIONS_INTERNAL;
    bcmi_ltsw_flexctr_counter_info_t ctr_info = {0};

    SHR_FUNC_ENTER(unit);

    if (hitbit_type == FT_HITBIT_TYPE_1x) {
        /* Silently return since we do not support it */
        SHR_EXIT();
    }

    action.source = bcmiFlexctrSourceEM_FT;
    action.mode = bcmFlexctrCounterModeWide;
    action.hint = group_id;
    action.drop_count_mode = bcmFlexctrDropCountModeAll;


    /* Counter index is derived from NON_UFT_HIT_INDEX. */
    index_op = &action.index_operation;
    index_op->object[0] = bcmFlexctrObjectIngEmFtHitIndex0;
    if (hitbit_type == FT_HITBIT_TYPE_2x) {
        index_op->mask_size[0] = 7; /* Bits 7 to 13 */
    } else if (hitbit_type == FT_HITBIT_TYPE_4x) {
        index_op->mask_size[0] = 6; /* Bits 8 to 13 */
    }
    if (hitbit_type == FT_HITBIT_TYPE_2x) {
        index_op->shift[0] = 7; /* Since we are starting from bit 7 */
    } else if (hitbit_type == FT_HITBIT_TYPE_4x) {
        index_op->shift[0] = 8; /* Since we are starting from bit 8 */
    }
    index_op->object[1] = bcmFlexctrObjectIngEmFtHitIndex1;
    index_op->mask_size[1] = 5; /* Masking bits 16 to 20 */
    /*
     * The number of bits used from hit index 0 is 7 for 2x case and 6 for 4x
     * case. And since we need to mask off the reserved 3 bits (16 to 18) in hit
     * index 1, we have to left shift the hit index 1 bits by  4 bits (7 - 3) in
     * 2x case and by 3 bits (6 - 3) in 4x case.
     */
    index_op->shift[1] = index_op->mask_size[0] - 3;
    if (hitbit_type == FT_HITBIT_TYPE_2x) {
        /* Per hit bit entry, 64 bits are used to represent 64 flows */
        action.index_num = (max_flows/64);
    } else if (hitbit_type == FT_HITBIT_TYPE_4x) {
        /*
         * Per hit bit entry, 64 bits are used to represent 64 flows.
         * But we will have half the number of flows supported if it
         * is 4x wide EM entries.
         */
        action.index_num = (max_flows/2)/64;
    }

    /* Set the appropriate bit. */
    value_a_op = &action.operation_a;
    value_a_op->select = bcmFlexctrValueSelectCounterValue;
    value_a_op->object[0] = bcmFlexctrObjectIngEmFtHitIndex0;
    if (hitbit_type == FT_HITBIT_TYPE_2x) {
        value_a_op->mask_size[0] = 6; /* Bits 1 to 6 */
        value_a_op->shift[0] = 1; /* Since we are starting from bit 1 */
    } else if (hitbit_type == FT_HITBIT_TYPE_4x) {
        value_a_op->mask_size[0] = 6; /* Bits 2 to 7 */
        value_a_op->shift[0] = 2; /* Since we are starting from bit 2 */
    }
    value_a_op->object[1] = bcmFlexctrObjectConstZero;
    value_a_op->mask_size[1] = 1;
    value_a_op->shift[1] = 0;
    value_a_op->type = bcmFlexctrValueOperationTypeSetBit;

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm_ltsw_flexctr_action_create(unit, options, &action, &stat_counter_id));

    *flex_ctr_stat_id = stat_counter_id;

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_flexctr_counter_id_info_get(unit, stat_counter_id, &ctr_info));

    *flex_ctr_lt_id = ctr_info.action_profile_id;

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_hw_learn_max_flows_per_pipe_get(
    int unit,
    uint8_t uft_mode,
    uint32_t *max_flows_per_pipe)
{
    *max_flows_per_pipe = 32 * 1024;
    return SHR_E_NONE;
}

static int
bcm56880_a0_ltsw_flowtracker_hw_learn_global_enable_reg_field_name_get(
    int unit,
    char **reg_str,
    char **field_str)
{
    *reg_str = R_FT_CONFIGs;
    *field_str = FT_ENABLEs;
    return SHR_E_NONE;
}

static int
bcm56880_a0_ltsw_flowtracker_flex_ctr_action_group(
    int unit,
    uint32_t main_ctr_stat_id,
    uint32_t hitbit_ctr_stat_id,
    uint32_t *group_action_stat_id,
    uint32_t *group_action_hw_idx)
{
    bcm_flexctr_group_action_t group_action = {0};
    bcmi_ltsw_flexctr_counter_info_t ctr_info = {0};
    int i = 0, options = 0;
    SHR_FUNC_ENTER(unit);

    if (main_ctr_stat_id == 0 || hitbit_ctr_stat_id == 0) {
        /* Nothing to group. Simply return */
        SHR_EXIT();
    }


    bcm_flexctr_group_action_t_init(&group_action);
    group_action.source = bcmiFlexctrSourceEM_FT;
    group_action.stat_counter_id[i++] = hitbit_ctr_stat_id;
    /*
     * Main ctr should be added as second member since flex ctr code expects
     * the first member to be unique across different group actions.
     */
    group_action.stat_counter_id[i++] = main_ctr_stat_id;
    group_action.action_num = i;

    SHR_IF_ERR_VERBOSE_EXIT(bcm_ltsw_flexctr_group_action_create(unit, options,
                                &group_action, group_action_stat_id));
    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_flexctr_counter_id_info_get(unit, *group_action_stat_id,
                                                &ctr_info));
    *group_action_hw_idx = ctr_info.action_index;

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_flowtracker_sw_learn_max_flows_per_pipe_get(
    int unit,
    uint32_t *max_flows_per_pipe)
{
    /*
     * 4 tiles of IFTA90 gives 256K flows(double wide entries) per pipe.
     * But, total number of counters per pipe = 160K. So we cannot go
     * beyond that. And to align the number of double wide entries
     * to a tile boundary, we are setting it as 128K.
     */
    *max_flows_per_pipe = (128 * 1024);
    return SHR_E_NONE;
}

static int
bcm56880_a0_ltsw_flowtracker_hw_learn_is_supported_uft_mode(
    int unit,
    uint8_t uft_mode,
    bool *supported)
{
    if (uft_mode == 8 || uft_mode == 9 || uft_mode == 11) {
        *supported = false;
    } else {
        *supported = true;
    }
    return SHR_E_NONE;
}

static int
bcm56880_a0_ltsw_flowtracker_sw_learn_is_supported_uft_mode(
    int unit,
    uint8_t uft_mode,
    bool *supported)
{
    if (uft_mode == 7 || uft_mode == 10) {
        *supported = true;
    } else {
        *supported = false;
    }
    return SHR_E_NONE;
}

/*!
 * \brief Flowtracker driver function variable for bcm56880_a0 device.
 */
static mbcm_ltsw_flowtracker_drv_t bcm56880_a0_ltsw_flowtracker_drv = {
    .flowtracker_detach = bcm56880_a0_ltsw_flowtracker_detach,
    .flowtracker_init = bcm56880_a0_ltsw_flowtracker_init,
    .flowtracker_elephant_hash_config_set = bcm56880_a0_ltsw_flowtracker_elephant_hash_config_set,
    .flowtracker_elephant_hash_config_get = bcm56880_a0_ltsw_flowtracker_elephant_hash_config_get,
    .flowtracker_elephant_control_set = bcm56880_a0_ltsw_flowtracker_elephant_control_set,
    .flowtracker_elephant_control_get = bcm56880_a0_ltsw_flowtracker_elephant_control_get,
    .flowtracker_elephant_stats_set = bcm56880_a0_ltsw_flowtracker_elephant_stats_set,
    .flowtracker_elephant_stats_get = bcm56880_a0_ltsw_flowtracker_elephant_stats_get,
    .flowtracker_default_grp_supported = bcm56880_a0_ltsw_flowtracker_default_grp_supported,
    .flowtracker_group_tracking_params_validate = bcm56880_a0_ltsw_flowtracker_group_tracking_params_validate,
    .flowtracker_group_export_triggers_validate = bcm56880_a0_ltsw_flowtracker_group_export_triggers_validate,
    .flowtracker_group_actions_validate = bcm56880_a0_ltsw_flowtracker_group_actions_validate,
    .flowtracker_flex_ctr_pkt_byte_reserve = bcm56880_a0_ltsw_flowtracker_flex_ctr_pkt_byte_reserve,
    .flowtracker_flex_ctr_hit_bit_reserve = bcm56880_a0_ltsw_flowtracker_flex_ctr_hit_bit_reserve,
    .flowtracker_hw_learn_max_flows_per_pipe_get = bcm56880_a0_ltsw_flowtracker_hw_learn_max_flows_per_pipe_get,
    .flowtracker_hw_learn_global_enable_reg_field_name_get = bcm56880_a0_ltsw_flowtracker_hw_learn_global_enable_reg_field_name_get,
    .flowtracker_flex_ctr_action_group = bcm56880_a0_ltsw_flowtracker_flex_ctr_action_group,
    .flowtracker_sw_learn_max_flows_per_pipe_get = bcm56880_a0_ltsw_flowtracker_sw_learn_max_flows_per_pipe_get,
    .flowtracker_hw_learn_is_supported_uft_mode = bcm56880_a0_ltsw_flowtracker_hw_learn_is_supported_uft_mode,
    .flowtracker_sw_learn_is_supported_uft_mode = bcm56880_a0_ltsw_flowtracker_sw_learn_is_supported_uft_mode
};

/******************************************************************************
 * Public functions
 */

int
bcm56880_a0_ltsw_flowtracker_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_flowtracker_drv_set(unit, &bcm56880_a0_ltsw_flowtracker_drv));

exit:
    SHR_FUNC_EXIT();
}

