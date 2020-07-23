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
/* Handler: bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmdlb/bcmltx_dlb_group_stats_id.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>

static const uint32_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg0[1] = {
    0,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg1[1] = {
    1,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg2[1] = {
    2,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg3[1] = {
    3,
};

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_field_desc_d1[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_field_desc_d2[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_field_desc_d3[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d1[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d2[];

extern const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d3[];

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s1 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_src_field_desc_s1
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_list_d1 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_field_desc_d1
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_list_d2 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_field_desc_d2
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_list_d3 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_field_desc_d3
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_list_d1 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d1
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_list_d2 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d2
};

static const bcmltd_field_list_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_list_d3 = {
    .field_num = 1,
    .field_array = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d3
};

static const uint32_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s0[1] = {
    DLB_ECMP_STATSt_DLB_IDf,
};

static const uint32_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s1[1] = {
    DLB_TRUNK_STATSt_DLB_IDf,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_transform_dst_d0[1] = {
    BCMLRD_FIELD_INSTANCE,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_transform_dst_d1[1] = {
    BCMLRD_FIELD_INSTANCE,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_transform_dst_d2[1] = {
    BCMLRD_FIELD_INSTANCE,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_transform_dst_d3[1] = {
    BCMLRD_FIELD_INSTANCE,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_transform_dst_d0[1] = {
    BCMLRD_FIELD_INSTANCE,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_transform_dst_d1[1] = {
    BCMLRD_FIELD_INSTANCE,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_transform_dst_d2[1] = {
    BCMLRD_FIELD_INSTANCE,
};

static const uint32_t
bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_transform_dst_d3[1] = {
    BCMLRD_FIELD_INSTANCE,
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data = {
    .sid       = DLB_ECMP_STATSt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data1 = {
    .sid       = DLB_TRUNK_STATSt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s0_d0_x0 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s0_d1_x1 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_transform_dst_d1,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_list_d1,
    .comp_data   = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s0_d2_x2 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg2,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_transform_dst_d2,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_list_d2,
    .comp_data   = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s0_d3_x3 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg3,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s0,
    .field_list  = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_transform_dst_d3,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_ecmp_stats_dst_list_d3,
    .comp_data   = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s1_d0_x0 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s1,
    .field_list  = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s1,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_transform_dst_d0,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_list_d0,
    .comp_data   = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data1
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s1_d1_x1 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s1,
    .field_list  = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s1,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_transform_dst_d1,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_list_d1,
    .comp_data   = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data1
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s1_d2_x2 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg2,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s1,
    .field_list  = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s1,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_transform_dst_d2,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_list_d2,
    .comp_data   = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data1
};

static const bcmltd_transform_arg_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s1_d3_x3 = {
    .values      = 1,
    .value       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_arg3,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_lta_bcmltx_dlb_group_stats_id_transform_src_s1,
    .field_list  = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_src_list_s1,
    .rfields     = 1,
    .rfield      = bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_transform_dst_d3,
    .rfield_list = &bcm56880_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_list_d3,
    .comp_data   = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_comp_data1
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s0_d0_x0 = {
    .transform     = bcmltx_dlb_group_stats_id_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s0_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s0_d1_x1 = {
    .transform     = bcmltx_dlb_group_stats_id_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s0_d1_x1
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s0_d2_x2 = {
    .transform     = bcmltx_dlb_group_stats_id_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s0_d2_x2
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s0_d3_x3 = {
    .transform     = bcmltx_dlb_group_stats_id_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s0_d3_x3
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d0_x0 = {
    .transform     = bcmltx_dlb_group_stats_id_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s1_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d1_x1 = {
    .transform     = bcmltx_dlb_group_stats_id_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s1_d1_x1
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d2_x2 = {
    .transform     = bcmltx_dlb_group_stats_id_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s1_d2_x2
};

const bcmltd_xfrm_handler_t
bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d3_x3 = {
    .transform     = bcmltx_dlb_group_stats_id_transform,
    .arg           = &bcm56880_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_arg_s1_d3_x3
};


