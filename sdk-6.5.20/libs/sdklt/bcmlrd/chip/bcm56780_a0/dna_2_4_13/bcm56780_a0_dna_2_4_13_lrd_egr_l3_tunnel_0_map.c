/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_EGR_L3_TUNNEL_0.map.ltl for
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
/* EGR_L3_TUNNEL_0 field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0_map_field_data_mmd[] = {
    { /* 0 EGR_L3_TUNNEL_IDX_0 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x17ff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 1 EDIT_CTRL_ID */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 IPV6_SRC_ADDR */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_binary_0x0_128,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_binary_0x0_128,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_binary_0xffffffffffffffffffffffffffffffff_128,
      .depth = 0,
      .width = 128,
      .edata = NULL,
    },
    { /* 3 TOS_OR_EXP_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 4 TTL_OR_MPLS_CTRL */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 TTL_VALUE */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 6 IPV6_FLOW_LABEL_SEL */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 7 IP_HDR_DF_CTRL */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 8 TUNNEL_WORD_1 */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 9 STRENGTH_PRFL_IDX */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x1f,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0_map_field_data = {
    .fields = 10,
    .field = bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0t_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 6143,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0t_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0t_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_depth_expand_tile_mode_src_field_desc_s0[1] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_EGR_L3_TUNNEL_IDX_0f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 12,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_depth_expand_tile_mode_egr_l3_tunnel_0_dst_field_desc_d0[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_TABLE_SEL,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const uint32_t
bcm56780_a0_dna_2_4_13_lrd_depth_expand_tile_mode_transform_tbl_t0[2] = {
    MEMDB_EFTA20_MEM0m,
    MEMDB_EFTA20_2P_MEM0m,
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_src_field_desc_s0[4] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_IPV6_SRC_ADDRf,
        .field_idx = 0,
        .minbit    = 96,
        .maxbit    = 127,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_IPV6_SRC_ADDRf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_IPV6_SRC_ADDRf,
        .field_idx = 0,
        .minbit    = 64,
        .maxbit    = 95,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_IPV6_SRC_ADDRf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_dst_field_desc[4] = {
    {
        .field_id  = DATAf,
        .field_idx = 0,
        .minbit    = 162,
        .maxbit    = 193,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = DATAf,
        .field_idx = 0,
        .minbit    = 98,
        .maxbit    = 129,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = DATAf,
        .field_idx = 0,
        .minbit    = 130,
        .maxbit    = 161,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = DATAf,
        .field_idx = 0,
        .minbit    = 66,
        .maxbit    = 97,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_fwd_s0_d0_x0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_DEPTH_EXPAND_TILE_MODE_XFRM_HANDLER_FWD_S0_D0_X0_T0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_4_13_lrd_bcmltx_depth_expand_tile_mode_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_4_13_lrd_bcmltx_depth_expand_tile_mode_egr_l3_tunnel_0_dst_field_desc_d0,
    .tables = 2,
    .tbl = bcm56780_a0_dna_2_4_13_lrd_depth_expand_tile_mode_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_rev_s0_d0_x0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_DEPTH_EXPAND_TILE_MODE_XFRM_HANDLER_REV_S0_D0_X0_T0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_4_13_lrd_bcmltx_depth_expand_tile_mode_egr_l3_tunnel_0_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56780_a0_dna_2_4_13_lrd_bcmltx_depth_expand_tile_mode_src_field_desc_s0,
    .tables = 2,
    .tbl = bcm56780_a0_dna_2_4_13_lrd_depth_expand_tile_mode_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_WIDE_EGR_L3_TUNNEL_0T_IPV6_SRC_ADDRF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_src_field_desc_s0,
    .dst_fields = 4,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_WIDE_EGR_L3_TUNNEL_0T_IPV6_SRC_ADDRF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_dst_field_desc,
    .dst_fields = 4,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0t_memdb_efta20_mem0_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_STRENGTH_PRFL_IDXf,
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
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 34,
            .maxbit    = 65,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_TUNNEL_WORD_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 31,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 10,
            .maxbit    = 13,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_EDIT_CTRL_IDf,
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
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 18,
            .maxbit    = 25,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_TOS_OR_EXP_REMARK_BASE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 14,
            .maxbit    = 16,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_IP_HDR_DF_CTRLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 17,
            .maxbit    = 17,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_IPV6_FLOW_LABEL_SELf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 26,
            .maxbit    = 33,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_TTL_VALUEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 9,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t_TTL_OR_MPLS_CTRLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 262,
            .maxbit    = 262,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 9 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_fwd_s0_d0_x0_t0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_fwd_s0_d0_x0_t0_desc,
            },
        },
    },
    { /* 10 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_rev_s0_d0_x0_t0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_rev_s0_d0_x0_t0_desc,
            },
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_wide_egr_l3_tunnel_0t_ipv6_src_addrf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_dna_2_4_13_lrd_bcmltx_egr_l3_tunnel_0_table_entry_limit_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_ENTRY_LIMIT_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_egr_l3_tunnel_0_index_tile_mode_table_entry_limit_handler */
            .handler_id = BCMLTD_TABLE_ENTRY_LIMIT_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_EGR_L3_TUNNEL_0_INDEX_TILE_MODE_TABLE_ENTRY_LIMIT_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_EFTA20_MEM0m,
        },
        .entries = 13,
        .entry = bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0t_memdb_efta20_mem0_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_TABLE_ENTRY_LIMIT,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_dna_2_4_13_lrd_bcmltx_egr_l3_tunnel_0_table_entry_limit_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0_map = {
    .src_id = BCM56780_A0_DNA_2_4_13_EGR_L3_TUNNEL_0t,
    .field_data = &bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0_map_group,
    .table_attr = &bcm56780_a0_dna_2_4_13_lrd_egr_l3_tunnel_0t_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
