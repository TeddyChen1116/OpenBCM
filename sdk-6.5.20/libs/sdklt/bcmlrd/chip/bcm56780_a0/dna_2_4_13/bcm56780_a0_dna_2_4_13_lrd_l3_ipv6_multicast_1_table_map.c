/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_L3_IPV6_MULTICAST_1_TABLE.map.ltl for
 *      bcm56780_a0 variant dna_2_4_13
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
#include <bcmlrd/chip/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56780_a0_lrd_enumpool.h"
#include "bcm56780_a0_dna_2_4_13_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* L3_IPV6_MULTICAST_1_TABLE field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_table_map_field_data_mmd[] = {
    { /* 0 IP_HDR_DIP */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_binary_0x0_128,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_binary_0x0_128,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_binary_0xffffffffffffffffffffffffffffffff_128,
      .depth = 0,
      .width = 128,
      .edata = NULL,
    },
    { /* 1 VRF */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 2 L3_IIF */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 3 FLEX_CTR_ACTION */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 4 STRENGTH_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 DESTINATION */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 6 DESTINATION_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56780_A0_DNA_2_4_13_LRD_DESTINATION_TYPE_DATA,
    },
    { /* 7 CLASS_ID */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 8 MTU_PROFILE_PTR */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 9 RPA_ID */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 10 EXPECTED_L3_IIF */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 11 MISC_CTRL_0 */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 12 MISC_CTRL_1 */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_table_map_field_data = {
    .fields = 13,
    .field = bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_table_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_tablet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 16384,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_tablet_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_tablet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_src_field_desc_s0[3] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_IP_HDR_DIPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_IP_HDR_DIPf,
        .field_idx = 0,
        .minbit    = 64,
        .maxbit    = 108,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_IP_HDR_DIPf,
        .field_idx = 0,
        .minbit    = 109,
        .maxbit    = 127,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_dst_field_desc[3] = {
    {
        .field_id  = TABLE_FIELDS_1f,
        .field_idx = 0,
        .minbit    = 174,
        .maxbit    = 237,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDS_0f,
        .field_idx = 0,
        .minbit    = 75,
        .maxbit    = 119,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDS_1f,
        .field_idx = 0,
        .minbit    = 123,
        .maxbit    = 141,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_L3_IIFf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_L3_IIFf,
        .field_idx = 0,
        .minbit    = 4,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_dst_field_desc[2] = {
    {
        .field_id  = TABLE_FIELDS_0f,
        .field_idx = 0,
        .minbit    = 7,
        .maxbit    = 10,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDS_0f,
        .field_idx = 0,
        .minbit    = 13,
        .maxbit    = 22,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_VRFf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_VRFf,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_dst_field_desc[2] = {
    {
        .field_id  = TABLE_FIELDS_0f,
        .field_idx = 0,
        .minbit    = 27,
        .maxbit    = 38,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDS_0f,
        .field_idx = 0,
        .minbit    = 11,
        .maxbit    = 12,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_WIDE_L3_IPV6_MULTICAST_1_TABLET_IP_HDR_DIPF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_src_field_desc_s0,
    .dst_fields = 3,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_WIDE_L3_IPV6_MULTICAST_1_TABLET_IP_HDR_DIPF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_dst_field_desc,
    .dst_fields = 3,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_1_TABLET_L3_IIFF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_1_TABLET_L3_IIFF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_1_TABLET_VRFF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_1_TABLET_VRFF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_tablet_ifta80_e2t_03_b0_quad_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 476,
            .maxbit    = 479,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_STRENGTH_PROFILE_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 470,
            .maxbit    = 475,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_FLEX_CTR_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 400,
            .maxbit    = 403,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_MISC_CTRL_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 396,
            .maxbit    = 399,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_DESTINATION_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 392,
            .maxbit    = 395,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_MISC_CTRL_0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 436,
            .maxbit    = 451,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_DESTINATIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 452,
            .maxbit    = 465,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_EXPECTED_L3_IIFf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 13,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 420,
            .maxbit    = 435,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 404,
            .maxbit    = 413,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_MTU_PROFILE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 9,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_3f,
            .field_idx = 0,
            .minbit    = 388,
            .maxbit    = 391,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt_RPA_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALID_0f,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 5,
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALID_1f,
            .field_idx = 0,
            .minbit    = 120,
            .maxbit    = 122,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 6,
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALID_2f,
            .field_idx = 0,
            .minbit    = 240,
            .maxbit    = 242,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 7,
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALID_3f,
            .field_idx = 0,
            .minbit    = 360,
            .maxbit    = 362,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 7,
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 6,
            }
        },
    },
    { /* 15 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 16 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_l3_ipv6_multicast_1_tablet_ip_hdr_dipf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 17 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 18 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_l3_iiff_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 19 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 20 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_ipv6_multicast_1_tablet_vrff_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_table_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IFTA80_E2T_03_B0_QUADm,
        },
        .entries = 21,
        .entry = bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_tablet_ifta80_e2t_03_b0_quad_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_table_map = {
    .src_id = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt,
    .field_data = &bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_table_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_table_map_group,
    .table_attr = &bcm56780_a0_dna_2_4_13_lrd_l3_ipv6_multicast_1_tablet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
