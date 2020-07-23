/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tnl/bcm56990_a0/bcm56990_a0_TNL_IPV6_DECAP_EM.map.ltl for
 *      bcm56990_a0
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
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* TNL_IPV6_DECAP_EM field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_tnl_ipv6_decap_em_map_field_data_mmd[] = {
    { /* 0 SRC_IPV6_UPPER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 1 SRC_IPV6_LOWER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 2 DST_IPV6_UPPER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 3 DST_IPV6_LOWER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 4 IP_PROTOCOL */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 5 IPV6_GRE_PAYLOAD */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 IPV4_GRE_PAYLOAD */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 7 IPV6_PAYLOAD */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 8 IPV4_PAYLOAD */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 9 TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCM56990_A0_LRD_TNL_IPV4_DECAP_TYPE_T_DATA,
    },
    { /* 10 MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56990_A0_LRD_TNL_IPV4_CONFIG_MODE_T_DATA,
    },
    { /* 11 TNL_HDR_DSCP_FOR_PHB */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 12 USE_TNL_HDR_HOP_LIMIT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 13 KEEP_PAYLOAD_DSCP */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 14 L3_IIF_ID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 15 CLASS_ID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 16 BFD */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 17 TNL_DECAP_PORT_PROFILE_ID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_tnl_ipv6_decap_em_map_field_data = {
    .fields = 18,
    .field = bcm56990_a0_lrd_tnl_ipv6_decap_em_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_tnl_ipv6_decap_emt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 4096,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_tnl_ipv6_decap_emt_attr_group = {
    .attributes = 2,
    .attr = bcm56990_a0_lrd_tnl_ipv6_decap_emt_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_src_field_desc_s0[2] = {
    {
        .field_id  = TNL_IPV6_DECAP_EMt_DST_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 25,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TNL_IPV6_DECAP_EMt_DST_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 26,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_dst_field_desc[2] = {
    {
        .field_id  = IPV6v_DIP_LWR_90f,
        .field_idx = 0,
        .minbit    = 163,
        .maxbit    = 188,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = IPV6v_DIP_UPR_38f,
        .field_idx = 0,
        .minbit    = 233,
        .maxbit    = 270,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_src_field_desc_s0[2] = {
    {
        .field_id  = TNL_IPV6_DECAP_EMt_SRC_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 25,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TNL_IPV6_DECAP_EMt_SRC_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 26,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_dst_field_desc[2] = {
    {
        .field_id  = IPV6v_SIP_LWR_90f,
        .field_idx = 0,
        .minbit    = 70,
        .maxbit    = 95,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = IPV6v_SIP_UPR_38f,
        .field_idx = 0,
        .minbit    = 195,
        .maxbit    = 232,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_TNL_IPV6_DECAP_EMT_DST_IPV6U_UPPERF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_TNL_IPV6_DECAP_EMT_DST_IPV6U_UPPERF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_TNL_IPV6_DECAP_EMT_SRC_IPV6U_UPPERF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_TNL_IPV6_DECAP_EMT_SRC_IPV6U_UPPERF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56990_a0_lrd_tnl_ipv6_decap_emt_l3_tunnel_quad_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 3,
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
    { /* 1 */
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
                .value = 1,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALID_1f,
            .field_idx = 0,
            .minbit    = 96,
            .maxbit    = 98,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 2,
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALID_2f,
            .field_idx = 0,
            .minbit    = 192,
            .maxbit    = 194,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 2,
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALID_3f,
            .field_idx = 0,
            .minbit    = 288,
            .maxbit    = 290,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 7,
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = IPV6v_SIP_LWR_90f,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 69,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_SRC_IPV6u_LOWERf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = IPV6v_DIP_LWR_90f,
            .field_idx = 0,
            .minbit    = 99,
            .maxbit    = 162,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_DST_IPV6u_LOWERf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = IPV6v_PROTOCOLf,
            .field_idx = 0,
            .minbit    = 271,
            .maxbit    = 278,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_IP_PROTOCOLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_GRE_PAYLOAD_IPV6f,
            .field_idx = 0,
            .minbit    = 341,
            .maxbit    = 341,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_IPV6_GRE_PAYLOADf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_GRE_PAYLOAD_IPV4f,
            .field_idx = 0,
            .minbit    = 342,
            .maxbit    = 342,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_IPV4_GRE_PAYLOADf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_PAYLOAD_IPV6f,
            .field_idx = 0,
            .minbit    = 343,
            .maxbit    = 343,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_IPV6_PAYLOADf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_PAYLOAD_IPV4f,
            .field_idx = 0,
            .minbit    = 344,
            .maxbit    = 344,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_IPV4_PAYLOADf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_SUB_TUNNEL_TYPEf,
            .field_idx = 0,
            .minbit    = 343,
            .maxbit    = 345,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_TUNNEL_TYPEf,
            .field_idx = 0,
            .minbit    = 346,
            .maxbit    = 346,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_MODEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_USE_OUTER_HDR_DSCPf,
            .field_idx = 0,
            .minbit    = 349,
            .maxbit    = 349,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_TNL_HDR_DSCP_FOR_PHBf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_USE_OUTER_HDR_TTLf,
            .field_idx = 0,
            .minbit    = 350,
            .maxbit    = 350,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_USE_TNL_HDR_HOP_LIMITf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_DONOT_CHANGE_INNER_HDR_DSCPf,
            .field_idx = 0,
            .minbit    = 351,
            .maxbit    = 351,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_KEEP_PAYLOAD_DSCPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_L3_IIFf,
            .field_idx = 0,
            .minbit    = 352,
            .maxbit    = 364,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_L3_IIF_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 18 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_TUNNEL_CLASS_IDf,
            .field_idx = 0,
            .minbit    = 365,
            .maxbit    = 376,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_BFD_ENABLEf,
            .field_idx = 0,
            .minbit    = 379,
            .maxbit    = 379,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_BFDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 20 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6v_ALLOWED_PORT_BITMAP_PROFILE_PTRf,
            .field_idx = 0,
            .minbit    = 380,
            .maxbit    = 383,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_IPV6_DECAP_EMt_TNL_DECAP_PORT_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 21 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 22 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_dst_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 23 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 24 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_tnl_ipv6_decap_emt_src_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
const bcmlrd_field_selector_t bcm56990_a0_lrd_tnl_ipv6_decap_em_map_select[] = {
    { /* Node:0, Type:ROOT, MODE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = TNL_IPV6_DECAP_EMt_MODEf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:FIELD, IPV6_PAYLOAD */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = TNL_IPV6_DECAP_EMt_IPV6_PAYLOADf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 0,
        .group = 0,
        .selector_id = TNL_IPV6_DECAP_EMt_MODEf,
        .selector_value = 0 /* CONFIG */
    },
    { /* Node:2, Type:FIELD, IPV4_PAYLOAD */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = TNL_IPV6_DECAP_EMt_IPV4_PAYLOADf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 0,
        .group = 0,
        .selector_id = TNL_IPV6_DECAP_EMt_MODEf,
        .selector_value = 0 /* CONFIG */
    },
    { /* Node:3, Type:FIELD, TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = TNL_IPV6_DECAP_EMt_TYPEf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 0,
        .group = 0,
        .selector_id = TNL_IPV6_DECAP_EMt_MODEf,
        .selector_value = 1 /* AUTO */
    },
};

const bcmlrd_field_selector_data_t bcm56990_a0_lrd_tnl_ipv6_decap_em_map_select_data = {
    .num_field_selector = 4,
    .field_selector = bcm56990_a0_lrd_tnl_ipv6_decap_em_map_select,
};

static const bcmlrd_map_group_t bcm56990_a0_lrd_tnl_ipv6_decap_em_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = L3_TUNNEL_QUADm,
        },
        .entries = 25,
        .entry = bcm56990_a0_lrd_tnl_ipv6_decap_emt_l3_tunnel_quad_map_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_tnl_ipv6_decap_em_map = {
    .src_id = TNL_IPV6_DECAP_EMt,
    .field_data = &bcm56990_a0_lrd_tnl_ipv6_decap_em_map_field_data,
    .groups = 1,
    .group  = bcm56990_a0_lrd_tnl_ipv6_decap_em_map_group,
    .table_attr = &bcm56990_a0_lrd_tnl_ipv6_decap_emt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56990_a0_lrd_tnl_ipv6_decap_em_map_select_data,
};
