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
/* Handler: bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmport/bcmltx_port_policy_pass_on_outer_tpid_match.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_xfrm_field_desc.h>

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s2[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s3[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s4[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_field_desc_d1[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_field_desc_d2[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_field_desc_d2[];

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s1 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s1
};

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s2 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s2
};

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s3 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s3
};

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s4 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_src_field_desc_s4
};

static const bcmltd_field_list_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_list_d1 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_field_desc_d1
};

static const bcmltd_field_list_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_list_d2 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_field_desc_d2
};

static const bcmltd_field_list_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_list_d2 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_field_desc_d2
};

static const uint32_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s0[1] = {
    PORT_POLICYt_PASS_ON_OUTER_TPID_MATCHf,
};

static const uint32_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s1[1] = {
    PORT_POLICYt_PASS_ON_EGR_OUTER_TPID_MATCHf,
};

static const uint32_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s2[1] = {
    PORT_POLICYt_PASS_ON_PAYLOAD_OUTER_TPID_MATCHf,
};

static const uint32_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s3[1] = {
    PORT_SYSTEM_POLICY_PROFILEt_PASS_ON_OUTER_TPID_MATCHf,
};

static const uint32_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s4[1] = {
    PORT_SYSTEM_POLICY_PROFILEt_TNL_L2_PAYLOAD_OUTER_TPID_MATCHf,
};

static const uint32_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_transform_dst_d0[1] = {
    OUTER_TPID_ENABLEf,
};

static const uint32_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_transform_dst_d1[1] = {
    OUTER_TPID_ENABLEf,
};

static const uint32_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_transform_dst_d2[1] = {
    INNER_L2_OUTER_TPID_ENABLEf,
};

static const uint32_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_transform_dst_d0[1] = {
    OUTER_TPID_ENABLEf,
};

static const uint32_t
bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_transform_dst_d2[1] = {
    INNER_L2_OUTER_TPID_ENABLEf,
};

static const bcmltd_generic_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data = {
    .sid       = PORT_POLICYt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data1 = {
    .sid       = PORT_SYSTEM_POLICY_PROFILEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s0,
    .field_list  = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_transform_dst_d0,
    .rfield_list = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_list_d0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_transform_dst_d0,
    .field_list  = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s0,
    .rfield_list = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s1_d1 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s1,
    .field_list  = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s1,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_transform_dst_d1,
    .rfield_list = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_list_d1,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s1_d1 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_transform_dst_d1,
    .field_list  = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_list_d1,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s1,
    .rfield_list = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s1,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s2_d2 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s2,
    .field_list  = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s2,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_transform_dst_d2,
    .rfield_list = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_list_d2,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s2_d2 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_transform_dst_d2,
    .field_list  = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_policy_dst_list_d2,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s2,
    .rfield_list = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s2,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s3_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s3,
    .field_list  = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s3,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_transform_dst_d0,
    .rfield_list = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_list_d0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data1
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s3_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_transform_dst_d0,
    .field_list  = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s3,
    .rfield_list = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s3,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data1
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s4_d2 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s4,
    .field_list  = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s4,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_transform_dst_d2,
    .rfield_list = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_list_d2,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data1
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s4_d2 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_transform_dst_d2,
    .field_list  = &bcm56996_a0_lrd_bcmltx_port_policy_pass_on_outer_tpid_match_port_system_policy_profile_dst_list_d2,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_transform_src_s4,
    .rfield_list = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_src_list_s4,
    .comp_data   = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_comp_data1
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_s1_d1 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s1_d1
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_s2_d2 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s2_d2
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_s3_d0 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s3_d0
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_s4_d2 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_fwd_arg_s4_d2
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_rev_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_s1_d1 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_rev_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s1_d1
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_s2_d2 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_rev_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s2_d2
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_s3_d0 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_rev_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s3_d0
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_s4_d2 = {
    .transform     = bcmltx_port_policy_pass_on_outer_tpid_match_rev_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_port_policy_pass_on_outer_tpid_match_xfrm_handler_rev_arg_s4_d2
};


