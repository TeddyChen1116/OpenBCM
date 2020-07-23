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
/* Handler: bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmtm/bcmltx_port_q_pt_suppress.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>

static const uint32_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_arg0[1] = {
    1,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_arg1[1] = {
    0,
};

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s2[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s3[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s4[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s5[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_mc_q_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_uc_q_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_mc_q_drop_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_mc_q_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_uc_q_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_uc_q_drop_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s0 = {
    .field_num = 2,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s1 = {
    .field_num = 2,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s1
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s2 = {
    .field_num = 2,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s2
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s3 = {
    .field_num = 2,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s3
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s4 = {
    .field_num = 2,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s4
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s5 = {
    .field_num = 2,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s5
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_mc_q_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_mc_q_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_uc_q_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_uc_q_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_mc_q_drop_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_mc_q_drop_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_mc_q_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_mc_q_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_uc_q_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_uc_q_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_uc_q_drop_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_uc_q_drop_dst_field_desc_d0
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s0[2] = {
    CTR_EGR_TM_BST_MC_Qt_PORT_IDf,
    CTR_EGR_TM_BST_MC_Qt_TM_MC_Q_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s1[2] = {
    CTR_EGR_TM_BST_UC_Qt_PORT_IDf,
    CTR_EGR_TM_BST_UC_Qt_TM_UC_Q_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s2[2] = {
    CTR_TM_MC_Q_DROPt_PORT_IDf,
    CTR_TM_MC_Q_DROPt_TM_MC_Q_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s3[2] = {
    CTR_TM_THD_MC_Qt_PORT_IDf,
    CTR_TM_THD_MC_Qt_TM_MC_Q_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s4[2] = {
    CTR_TM_THD_UC_Qt_PORT_IDf,
    CTR_TM_THD_UC_Qt_TM_UC_Q_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s5[2] = {
    CTR_TM_UC_Q_DROPt_PORT_IDf,
    CTR_TM_UC_Q_DROPt_TM_UC_Q_IDf,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_mc_q_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_uc_q_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_mc_q_drop_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_mc_q_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_uc_q_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_uc_q_drop_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data = {
    .sid       = CTR_EGR_TM_BST_MC_Qt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data1 = {
    .sid       = CTR_EGR_TM_BST_UC_Qt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data2 = {
    .sid       = CTR_TM_MC_Q_DROPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data3 = {
    .sid       = CTR_TM_THD_MC_Qt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data4 = {
    .sid       = CTR_TM_THD_UC_Qt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data5 = {
    .sid       = CTR_TM_UC_Q_DROPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s0_d0_x0 = {
    .values      = 1,
    .value       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s0,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_mc_q_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_mc_q_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s1_d0_x1 = {
    .values      = 1,
    .value       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s1,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s1,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_uc_q_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_uc_q_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data1
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s2_d0_x0 = {
    .values      = 1,
    .value       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s2,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s2,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_mc_q_drop_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_mc_q_drop_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data2
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s3_d0_x0 = {
    .values      = 1,
    .value       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s3,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s3,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_mc_q_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_mc_q_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data3
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s4_d0_x1 = {
    .values      = 1,
    .value       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s4,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s4,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_uc_q_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_thd_uc_q_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data4
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s5_d0_x1 = {
    .values      = 1,
    .value       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56780_a0_lta_bcmltx_port_q_pt_suppress_transform_src_s5,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_src_list_s5,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_uc_q_drop_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_q_pt_suppress_ctr_tm_uc_q_drop_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_comp_data5
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_s0_d0_x0 = {
    .transform     = bcmltx_port_q_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s0_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_s1_d0_x1 = {
    .transform     = bcmltx_port_q_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s1_d0_x1
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_s2_d0_x0 = {
    .transform     = bcmltx_port_q_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s2_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_s3_d0_x0 = {
    .transform     = bcmltx_port_q_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s3_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_s4_d0_x1 = {
    .transform     = bcmltx_port_q_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s4_d0_x1
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_s5_d0_x1 = {
    .transform     = bcmltx_port_q_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_arg_s5_d0_x1
};


