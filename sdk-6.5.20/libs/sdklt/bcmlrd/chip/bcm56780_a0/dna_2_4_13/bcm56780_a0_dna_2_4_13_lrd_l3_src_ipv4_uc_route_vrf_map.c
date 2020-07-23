/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRF.map.ltl for
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
/* L3_SRC_IPV4_UC_ROUTE_VRF field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrf_map_field_data_mmd[] = {
    { /* 0 VRF_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 1 VRF_ID_MASK */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 2 IPV4 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 3 IPV4_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 4 DESTINATION */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 5 DESTINATION_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56780_A0_DNA_2_4_13_LRD_DESTINATION_TYPE_DATA,
    },
    { /* 6 MISC_CTRL_0 */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 MISC_CTRL_1 */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 8 DATA_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56780_A0_DNA_2_4_13_LRD_L3_IPV4_ALPM_VIEW_TYPE_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrf_map_field_data = {
    .fields = 9,
    .field = bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrf_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrft_attr_entry[] = {
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

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrft_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrft_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_src_field_desc_s0[4] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_IPV4_MASKf,
        .field_idx = 0,
        .minbit    = 24,
        .maxbit    = 29,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_IPV4_MASKf,
        .field_idx = 0,
        .minbit    = 30,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_IPV4_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_IPV4_MASKf,
        .field_idx = 0,
        .minbit    = 2,
        .maxbit    = 23,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_dst_field_desc[4] = {
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 128,
        .maxbit    = 133,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 134,
        .maxbit    = 135,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 150,
        .maxbit    = 151,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 156,
        .maxbit    = 177,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_src_field_desc_s0[4] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_IPV4f,
        .field_idx = 0,
        .minbit    = 24,
        .maxbit    = 29,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_IPV4f,
        .field_idx = 0,
        .minbit    = 30,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_IPV4f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_IPV4f,
        .field_idx = 0,
        .minbit    = 2,
        .maxbit    = 23,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_dst_field_desc[4] = {
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 28,
        .maxbit    = 33,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 34,
        .maxbit    = 35,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 50,
        .maxbit    = 51,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 56,
        .maxbit    = 77,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_src_field_desc_s0[3] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_VRF_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_VRF_IDf,
        .field_idx = 0,
        .minbit    = 4,
        .maxbit    = 9,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_VRF_IDf,
        .field_idx = 0,
        .minbit    = 10,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_dst_field_desc[3] = {
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 36,
        .maxbit    = 39,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 40,
        .maxbit    = 45,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 46,
        .maxbit    = 49,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV4_UC_ROUTE_VRFT_IPV4_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_src_field_desc_s0,
    .dst_fields = 4,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV4_UC_ROUTE_VRFT_IPV4_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_dst_field_desc,
    .dst_fields = 4,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV4_UC_ROUTE_VRFT_IPV4F_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_src_field_desc_s0,
    .dst_fields = 4,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV4_UC_ROUTE_VRFT_IPV4F_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_dst_field_desc,
    .dst_fields = 4,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV4_UC_ROUTE_VRFT_VRF_IDF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_src_field_desc_s0,
    .dst_fields = 3,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV4_UC_ROUTE_VRFT_VRF_IDF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_dst_field_desc,
    .dst_fields = 3,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrft_memdb_tcam_ifta80_mem0_1_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 365,
            .maxbit    = 369,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_DATA_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 235,
            .maxbit    = 238,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_DESTINATION_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 239,
            .maxbit    = 242,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_MISC_CTRL_1f,
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
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 231,
            .maxbit    = 234,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_MISC_CTRL_0f,
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
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 243,
            .maxbit    = 258,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt_DESTINATIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
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
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 2,
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 104,
            .maxbit    = 105,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 2,
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
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
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 136,
            .maxbit    = 139,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0xF,
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 140,
            .maxbit    = 145,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0x3F,
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 146,
            .maxbit    = 149,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0xF,
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 359,
            .maxbit    = 360,
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 15 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 16 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 17 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_ipv4f_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 18 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 19 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_l3_src_ipv4_uc_route_vrft_vrf_idf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrf_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_TCAM_IFTA80_MEM0_1m,
        },
        .entries = 20,
        .entry = bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrft_memdb_tcam_ifta80_mem0_1_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrf_map = {
    .src_id = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt,
    .field_data = &bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrf_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrf_map_group,
    .table_attr = &bcm56780_a0_dna_2_4_13_lrd_l3_src_ipv4_uc_route_vrft_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
