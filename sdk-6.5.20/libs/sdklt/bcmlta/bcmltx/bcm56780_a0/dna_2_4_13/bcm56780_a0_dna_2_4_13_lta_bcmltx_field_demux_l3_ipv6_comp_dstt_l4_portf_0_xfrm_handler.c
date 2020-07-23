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
/* Handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_field_demux.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_lrd_xfrm_field_desc.h>


extern const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_comp_dstt_l4_portf_0_src_field_desc_s0[];

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_dst_field_desc[3] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 126,
        .field_idx = 0,
        .minbit    = 288,
        .maxbit    = 293,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.KEY1f.ENTRY0[81:76]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 128,
        .field_idx = 0,
        .minbit    = 294,
        .maxbit    = 299,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.KEY1f.ENTRY0[87:82]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 130,
        .field_idx = 0,
        .minbit    = 300,
        .maxbit    = 303,
        .entry_idx = 0,
        .sym       = "MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m.KEY1f.ENTRY0[91:88]",
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_src_list_s0 = {
    .field_num = 3,
    .field_array = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_comp_dstt_l4_portf_0_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_dst_list_d0 = {
    .field_num = 3,
    .field_array = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_dst_field_desc
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_transform_src_s0[1] = {
    BCM56780_A0_DNA_2_4_13_L3_IPV6_COMP_DSTt_L4_PORTf,
};

static const uint32_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_transform_dst_d0[3] = {
    BCMLTD_INTERNAL_FIELD_BASE + 126,
    BCMLTD_INTERNAL_FIELD_BASE + 128,
    BCMLTD_INTERNAL_FIELD_BASE + 130,
};

static const bcmltd_generic_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_comp_data = {
    .sid       = BCM56780_A0_DNA_2_4_13_L3_IPV6_COMP_DSTt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_transform_src_s0,
    .field_list  = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_src_list_s0,
    .rfields     = 3,
    .rfield      = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_transform_dst_d0,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_dst_list_d0,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 3,
    .field       = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_transform_dst_d0,
    .field_list  = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_transform_src_s0,
    .rfield_list = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_src_list_s0,
    .comp_data   = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_comp_data
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_field_demux_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_field_mux_transform,
    .arg           = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_comp_dstt_l4_portf_0_xfrm_handler_rev_arg_s0_d0
};


