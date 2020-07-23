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
/* Handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_field_demux.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_lrd_xfrm_field_desc.h>


extern const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_src_field_desc_s0[];

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_dst_field_desc[6] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 196,
        .field_idx = 0,
        .minbit    = 302,
        .maxbit    = 305,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.KEY1f.ENTRY0[93:90]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 198,
        .field_idx = 0,
        .minbit    = 306,
        .maxbit    = 311,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.KEY1f.ENTRY0[99:94]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 118,
        .field_idx = 0,
        .minbit    = 236,
        .maxbit    = 259,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.KEY1f.ENTRY0[47:24]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 122,
        .field_idx = 0,
        .minbit    = 260,
        .maxbit    = 261,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.KEY1f.ENTRY0[49:48]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 124,
        .field_idx = 0,
        .minbit    = 266,
        .maxbit    = 287,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.KEY1f.ENTRY0[75:54]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 132,
        .field_idx = 0,
        .minbit    = 220,
        .maxbit    = 235,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.KEY1f.ENTRY0[23:8]",
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_src_list_s0 = {
    .field_num = 6,
    .field_array = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_dst_list_d0 = {
    .field_num = 6,
    .field_array = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_dst_field_desc
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_transform_src_s0[1] = {
    BCM56780_A0_DNA_2_4_13_L3_IPV6_UC_ROUTEt_IPV6u_UPPERf,
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_transform_dst_d0[6] = {
    BCMLTD_INTERNAL_FIELD_BASE + 196,
    BCMLTD_INTERNAL_FIELD_BASE + 198,
    BCMLTD_INTERNAL_FIELD_BASE + 118,
    BCMLTD_INTERNAL_FIELD_BASE + 122,
    BCMLTD_INTERNAL_FIELD_BASE + 124,
    BCMLTD_INTERNAL_FIELD_BASE + 132,
};

static const bcmltd_generic_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_comp_data = {
    .sid       = BCM56780_A0_DNA_2_4_13_L3_IPV6_UC_ROUTEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_transform_src_s0,
    .field_list  = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_src_list_s0,
    .rfields     = 6,
    .rfield      = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_transform_dst_d0,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_dst_list_d0,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 6,
    .field       = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_transform_dst_d0,
    .field_list  = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_transform_src_s0,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_src_list_s0,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_comp_data
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_field_demux_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_field_mux_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_uc_routet_ipv6u_upperf_0_xfrm_handler_rev_arg_s0_d0
};


