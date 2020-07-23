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
/* Handler: bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmmon/bcmltx_mon_etrap_filt_hash_sel.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>

static const uint32_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg0[1] = {
    4,
};

static const uint32_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg1[1] = {
    2,
};

extern const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s2[];

extern const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s3[];

extern const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d1[];

extern const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_field_desc_d2[];

extern const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_field_desc_d3[];

static const
bcmltd_field_list_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s1 = {
    .field_num = 1,
    .field_array = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s1
};

static const
bcmltd_field_list_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s2 = {
    .field_num = 1,
    .field_array = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s2
};

static const
bcmltd_field_list_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s3 = {
    .field_num = 1,
    .field_array = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_src_field_desc_s3
};

static const bcmltd_field_list_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_list_d0 = {
    .field_num = 4,
    .field_array = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_list_d1 = {
    .field_num = 4,
    .field_array = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_field_desc_d1
};

static const bcmltd_field_list_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_list_d2 = {
    .field_num = 2,
    .field_array = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_field_desc_d2
};

static const bcmltd_field_list_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_list_d3 = {
    .field_num = 2,
    .field_array = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_field_desc_d3
};

static const uint32_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s0[1] = {
    MON_ETRAP_CANDIDATE_FILTERt_FILTER_HASH_SELECTf,
};

static const uint32_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s1[1] = {
    MON_ETRAP_CANDIDATE_FILTERt_FILTER_HASH_ROTATE_BITSf,
};

static const uint32_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s2[1] = {
    MON_ETRAP_FLOWt_FLOW_HASH_SELECTf,
};

static const uint32_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s3[1] = {
    MON_ETRAP_FLOWt_FLOW_HASH_ROTATE_BITSf,
};

static const uint32_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_transform_dst_d0[4] = {
    FILTER_0_HASH_SELf,
    FILTER_1_HASH_SELf,
    FILTER_2_HASH_SELf,
    FILTER_3_HASH_SELf,
};

static const uint32_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_transform_dst_d1[4] = {
    FILTER_0_HASH_ROTRf,
    FILTER_1_HASH_ROTRf,
    FILTER_2_HASH_ROTRf,
    FILTER_3_HASH_ROTRf,
};

static const uint32_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_transform_dst_d2[2] = {
    LEFT_BANK_HASH_SELf,
    RIGHT_BANK_HASH_SELf,
};

static const uint32_t
bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_transform_dst_d3[2] = {
    LEFT_BANK_HASH_ROTRf,
    RIGHT_BANK_HASH_ROTRf,
};

static const bcmltd_generic_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data = {
    .sid       = MON_ETRAP_CANDIDATE_FILTERt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data1 = {
    .sid       = MON_ETRAP_FLOWt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_arg_s0_d0_x0 = {
    .values      = 1,
    .value       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s0,
    .field_list  = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s0,
    .rfields     = 4,
    .rfield      = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_transform_dst_d0,
    .rfield_list = &bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_list_d0,
    .comp_data   = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data
};

static const bcmltd_transform_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_arg_s0_d0_x0 = {
    .values      = 1,
    .value       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 4,
    .field       = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_transform_dst_d0,
    .field_list  = &bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s0,
    .rfield_list = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s0,
    .comp_data   = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data
};

static const bcmltd_transform_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_arg_s1_d1_x0 = {
    .values      = 1,
    .value       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s1,
    .field_list  = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s1,
    .rfields     = 4,
    .rfield      = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_transform_dst_d1,
    .rfield_list = &bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_list_d1,
    .comp_data   = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data
};

static const bcmltd_transform_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_arg_s1_d1_x0 = {
    .values      = 1,
    .value       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 4,
    .field       = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_transform_dst_d1,
    .field_list  = &bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_candidate_filter_dst_list_d1,
    .rfields     = 1,
    .rfield      = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s1,
    .rfield_list = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s1,
    .comp_data   = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data
};

static const bcmltd_transform_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_arg_s2_d2_x1 = {
    .values      = 1,
    .value       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s2,
    .field_list  = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s2,
    .rfields     = 2,
    .rfield      = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_transform_dst_d2,
    .rfield_list = &bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_list_d2,
    .comp_data   = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data1
};

static const bcmltd_transform_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_arg_s2_d2_x1 = {
    .values      = 1,
    .value       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_transform_dst_d2,
    .field_list  = &bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_list_d2,
    .rfields     = 1,
    .rfield      = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s2,
    .rfield_list = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s2,
    .comp_data   = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data1
};

static const bcmltd_transform_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_arg_s3_d3_x1 = {
    .values      = 1,
    .value       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s3,
    .field_list  = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s3,
    .rfields     = 2,
    .rfield      = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_transform_dst_d3,
    .rfield_list = &bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_list_d3,
    .comp_data   = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data1
};

static const bcmltd_transform_arg_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_arg_s3_d3_x1 = {
    .values      = 1,
    .value       = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_arg1,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_transform_dst_d3,
    .field_list  = &bcm56990_a0_lrd_bcmltx_mon_etrap_filt_hash_sel_mon_etrap_flow_dst_list_d3,
    .rfields     = 1,
    .rfield      = bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_transform_src_s3,
    .rfield_list = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_src_list_s3,
    .comp_data   = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_comp_data1
};

const bcmltd_xfrm_handler_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s0_d0_x0 = {
    .transform     = bcmltx_mon_etrap_filt_hash_sel_transform,
    .arg           = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_arg_s0_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s1_d1_x0 = {
    .transform     = bcmltx_mon_etrap_filt_hash_sel_transform,
    .arg           = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_arg_s1_d1_x0
};

const bcmltd_xfrm_handler_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s2_d2_x1 = {
    .transform     = bcmltx_mon_etrap_filt_hash_sel_transform,
    .arg           = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_arg_s2_d2_x1
};

const bcmltd_xfrm_handler_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_s3_d3_x1 = {
    .transform     = bcmltx_mon_etrap_filt_hash_sel_transform,
    .arg           = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_fwd_arg_s3_d3_x1
};

const bcmltd_xfrm_handler_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s0_d0_x0 = {
    .transform     = bcmltx_mon_etrap_filt_hash_sel_rev_transform,
    .arg           = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_arg_s0_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s1_d1_x0 = {
    .transform     = bcmltx_mon_etrap_filt_hash_sel_rev_transform,
    .arg           = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_arg_s1_d1_x0
};

const bcmltd_xfrm_handler_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s2_d2_x1 = {
    .transform     = bcmltx_mon_etrap_filt_hash_sel_rev_transform,
    .arg           = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_arg_s2_d2_x1
};

const bcmltd_xfrm_handler_t
bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_s3_d3_x1 = {
    .transform     = bcmltx_mon_etrap_filt_hash_sel_rev_transform,
    .arg           = &bcm56990_a0_lta_bcmltx_mon_etrap_filt_hash_sel_xfrm_handler_rev_arg_s3_d3_x1
};


