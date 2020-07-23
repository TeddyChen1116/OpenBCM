/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_L3_IPV6_COMP_SRC.map.ltl for
 *      bcm56880_a0 variant dna_4_6_6
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56880_a0_lrd_enumpool.h"
#include "bcm56880_a0_dna_4_6_6_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* L3_IPV6_COMP_SRC field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_src_map_field_data_mmd[] = {
    { /* 0 IPV6_LOWER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 1 IPV6_LOWER_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 2 IPV6_UPPER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 3 IPV6_UPPER_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 4 L4_PORT */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 5 L4_PORT_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 6 CLASS_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_src_map_field_data = {
    .fields = 7,
    .field = bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_src_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_srct_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 2621440,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TCAM_ORDERING,
        .value = LPM,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_srct_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_srct_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_dst_field_desc[2] = {
    {
        .field_id  = MASK0f,
        .field_idx = 0,
        .minbit    = 105,
        .maxbit    = 136,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK0f,
        .field_idx = 0,
        .minbit    = 155,
        .maxbit    = 186,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_dst_field_desc[2] = {
    {
        .field_id  = KEY0f,
        .field_idx = 0,
        .minbit    = 5,
        .maxbit    = 36,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY0f,
        .field_idx = 0,
        .minbit    = 55,
        .maxbit    = 86,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_dst_field_desc[2] = {
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 315,
        .maxbit    = 346,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 365,
        .maxbit    = 396,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_dst_field_desc[2] = {
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 215,
        .maxbit    = 246,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 265,
        .maxbit    = 296,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_L4_PORT_MASKf,
        .field_idx = 0,
        .minbit    = 14,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_L4_PORT_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_dst_field_desc[2] = {
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 397,
        .maxbit    = 398,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASK1f,
        .field_idx = 0,
        .minbit    = 348,
        .maxbit    = 361,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_portf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_L4_PORTf,
        .field_idx = 0,
        .minbit    = 14,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_L4_PORTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_portf_0_dst_field_desc[2] = {
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 297,
        .maxbit    = 298,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEY1f,
        .field_idx = 0,
        .minbit    = 248,
        .maxbit    = 261,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_IPV6U_LOWER_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_IPV6U_LOWER_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_IPV6U_LOWERF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_IPV6U_LOWERF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_IPV6U_UPPER_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_IPV6U_UPPER_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_IPV6U_UPPERF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_IPV6U_UPPERF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_L4_PORT_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_L4_PORT_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_portf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_L4_PORTF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_portf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_portf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_portf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_COMP_SRCT_L4_PORTF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_portf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l3_ipv6_comp_srct_l4_portf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_srct_memdb_tcam_ifta80_mem0_0_mem0_1_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 420,
            .maxbit    = 435,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALID0f,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALID1f,
            .field_idx = 0,
            .minbit    = 210,
            .maxbit    = 211,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY0f,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 4,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK0f,
            .field_idx = 0,
            .minbit    = 104,
            .maxbit    = 104,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY0f,
            .field_idx = 0,
            .minbit    = 54,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK0f,
            .field_idx = 0,
            .minbit    = 154,
            .maxbit    = 154,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY1f,
            .field_idx = 0,
            .minbit    = 214,
            .maxbit    = 214,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK1f,
            .field_idx = 0,
            .minbit    = 314,
            .maxbit    = 314,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY1f,
            .field_idx = 0,
            .minbit    = 264,
            .maxbit    = 264,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK1f,
            .field_idx = 0,
            .minbit    = 364,
            .maxbit    = 364,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY0f,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK0f,
            .field_idx = 0,
            .minbit    = 102,
            .maxbit    = 103,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY0f,
            .field_idx = 0,
            .minbit    = 52,
            .maxbit    = 53,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK0f,
            .field_idx = 0,
            .minbit    = 152,
            .maxbit    = 153,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY1f,
            .field_idx = 0,
            .minbit    = 212,
            .maxbit    = 213,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK1f,
            .field_idx = 0,
            .minbit    = 312,
            .maxbit    = 313,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY1f,
            .field_idx = 0,
            .minbit    = 262,
            .maxbit    = 263,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 18 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK1f,
            .field_idx = 0,
            .minbit    = 362,
            .maxbit    = 363,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 513,
            .maxbit    = 514,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 2,
            }
        },
    },
    { /* 20 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 21 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lower_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 22 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 23 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_lowerf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 24 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 25 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 26 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 27 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 28 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 29 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_port_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 30 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_portf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_portf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 31 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_portf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l3_ipv6_comp_srct_l4_portf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_src_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_TCAM_IFTA80_MEM0_0_MEM0_1m,
        },
        .entries = 32,
        .entry = bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_srct_memdb_tcam_ifta80_mem0_0_mem0_1_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_src_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_L3_IPV6_COMP_SRCt,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_src_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_src_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_l3_ipv6_comp_srct_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
