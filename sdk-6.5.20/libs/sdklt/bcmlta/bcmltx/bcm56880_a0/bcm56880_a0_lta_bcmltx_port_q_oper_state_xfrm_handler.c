/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmltx */
/* Handler: bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmtm/bcmltx_port_q_oper_state.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_arg0[1] = {
    1,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_arg1[1] = {
    0,
};

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s2[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s3[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s4[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s5[];

static const bcmltd_field_desc_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k0[2] = {
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_TM_MC_Q_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k1[2] = {
    {
        .field_id  = CTR_EGR_TM_BST_UC_Qt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_BST_UC_Qt_TM_UC_Q_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k2[2] = {
    {
        .field_id  = CTR_TM_MC_Q_DROPt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_TM_MC_Q_DROPt_TM_MC_Q_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k3[2] = {
    {
        .field_id  = CTR_TM_THD_MC_Qt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_TM_THD_MC_Qt_TM_MC_Q_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k4[2] = {
    {
        .field_id  = CTR_TM_THD_UC_Qt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_TM_THD_UC_Qt_TM_UC_Q_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k5[2] = {
    {
        .field_id  = CTR_TM_UC_Q_DROPt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_TM_UC_Q_DROPt_TM_UC_Q_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};


static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s1 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s1
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s2 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s2
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s3 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s3
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s4 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s4
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s5 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s5
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k0 = {
    .field_num = 2,
    .field_array = bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k0
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k1 = {
    .field_num = 2,
    .field_array = bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k1
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k2 = {
    .field_num = 2,
    .field_array = bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k2
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k3 = {
    .field_num = 2,
    .field_array = bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k3
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k4 = {
    .field_num = 2,
    .field_array = bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k4
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k5 = {
    .field_num = 2,
    .field_array = bcm56880_a0_lta_bcmltx_port_q_oper_state_src_field_desc_k5
};

static const bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_dst_list_d0 = {
    .field_num = 0,
    .field_array = NULL
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s0[1] = {
    CTR_EGR_TM_BST_MC_Qt_OPERATIONAL_STATEf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s1[1] = {
    CTR_EGR_TM_BST_UC_Qt_OPERATIONAL_STATEf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s2[1] = {
    CTR_TM_MC_Q_DROPt_OPERATIONAL_STATEf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s3[1] = {
    CTR_TM_THD_MC_Qt_OPERATIONAL_STATEf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s4[1] = {
    CTR_TM_THD_UC_Qt_OPERATIONAL_STATEf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s5[1] = {
    CTR_TM_UC_Q_DROPt_OPERATIONAL_STATEf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k0[2] = {
    CTR_EGR_TM_BST_MC_Qt_PORT_IDf,
    CTR_EGR_TM_BST_MC_Qt_TM_MC_Q_IDf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k1[2] = {
    CTR_EGR_TM_BST_UC_Qt_PORT_IDf,
    CTR_EGR_TM_BST_UC_Qt_TM_UC_Q_IDf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k2[2] = {
    CTR_TM_MC_Q_DROPt_PORT_IDf,
    CTR_TM_MC_Q_DROPt_TM_MC_Q_IDf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k3[2] = {
    CTR_TM_THD_MC_Qt_PORT_IDf,
    CTR_TM_THD_MC_Qt_TM_MC_Q_IDf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k4[2] = {
    CTR_TM_THD_UC_Qt_PORT_IDf,
    CTR_TM_THD_UC_Qt_TM_UC_Q_IDf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k5[2] = {
    CTR_TM_UC_Q_DROPt_PORT_IDf,
    CTR_TM_UC_Q_DROPt_TM_UC_Q_IDf,
};


static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data = {
    .sid       = CTR_EGR_TM_BST_MC_Qt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data1 = {
    .sid       = CTR_EGR_TM_BST_UC_Qt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data2 = {
    .sid       = CTR_TM_MC_Q_DROPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data3 = {
    .sid       = CTR_TM_THD_MC_Qt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data4 = {
    .sid       = CTR_TM_THD_UC_Qt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data5 = {
    .sid       = CTR_TM_UC_Q_DROPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s0_k0_d0_x0 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 0,
    .field       = NULL,
    .field_list  = &bcm56880_a0_lta_bcmltx_port_q_oper_state_dst_list_d0,
    .kfields     = 2,
    .kfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k0,
    .kfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k0,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s0,
    .rfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s1_k1_d0_x1 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 0,
    .field       = NULL,
    .field_list  = &bcm56880_a0_lta_bcmltx_port_q_oper_state_dst_list_d0,
    .kfields     = 2,
    .kfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k1,
    .kfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k1,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s1,
    .rfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s1,
    .comp_data   = &bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data1
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s2_k2_d0_x0 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 0,
    .field       = NULL,
    .field_list  = &bcm56880_a0_lta_bcmltx_port_q_oper_state_dst_list_d0,
    .kfields     = 2,
    .kfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k2,
    .kfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k2,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s2,
    .rfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s2,
    .comp_data   = &bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data2
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s3_k3_d0_x0 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 0,
    .field       = NULL,
    .field_list  = &bcm56880_a0_lta_bcmltx_port_q_oper_state_dst_list_d0,
    .kfields     = 2,
    .kfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k3,
    .kfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k3,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s3,
    .rfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s3,
    .comp_data   = &bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data3
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s4_k4_d0_x1 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 0,
    .field       = NULL,
    .field_list  = &bcm56880_a0_lta_bcmltx_port_q_oper_state_dst_list_d0,
    .kfields     = 2,
    .kfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k4,
    .kfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k4,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s4,
    .rfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s4,
    .comp_data   = &bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data4
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s5_k5_d0_x1 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 0,
    .field       = NULL,
    .field_list  = &bcm56880_a0_lta_bcmltx_port_q_oper_state_dst_list_d0,
    .kfields     = 2,
    .kfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_k5,
    .kfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_k5,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lta_bcmltx_port_q_oper_state_transform_src_s5,
    .rfield_list = &bcm56880_a0_lta_bcmltx_port_q_oper_state_src_list_s5,
    .comp_data   = &bcm56880_a0_lta_bcmltx_port_q_oper_state_comp_data5
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_s0_k0_d0_x0 = {
    .ext_transform = bcmltx_port_q_oper_state_rev_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s0_k0_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_s1_k1_d0_x1 = {
    .ext_transform = bcmltx_port_q_oper_state_rev_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s1_k1_d0_x1
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_s2_k2_d0_x0 = {
    .ext_transform = bcmltx_port_q_oper_state_rev_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s2_k2_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_s3_k3_d0_x0 = {
    .ext_transform = bcmltx_port_q_oper_state_rev_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s3_k3_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_s4_k4_d0_x1 = {
    .ext_transform = bcmltx_port_q_oper_state_rev_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s4_k4_d0_x1
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_s5_k5_d0_x1 = {
    .ext_transform = bcmltx_port_q_oper_state_rev_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_arg_s5_k5_d0_x1
};


