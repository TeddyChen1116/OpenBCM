/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_L2_IPV4_MULTICAST_TABLE.map.ltl for
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
/* L2_IPV4_MULTICAST_TABLE field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_table_map_field_data_mmd[] = {
    { /* 0 IPV4_DST_ADDR */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 1 VFI */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 2 STRENGTH_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 3 DESTINATION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 4 DESTINATION_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_DESTINATION_TYPE_DATA,
    },
    { /* 5 CLASS_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 6 MISC_CTRL_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 MISC_CTRL_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_table_map_field_data = {
    .fields = 8,
    .field = bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_table_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_tablet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 32768,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_tablet_attr_group = {
    .attributes = 2,
    .attr = bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_tablet_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt_IPV4_DST_ADDRf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt_IPV4_DST_ADDRf,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_dst_field_desc[2] = {
    {
        .field_id  = TABLE_FIELDSf,
        .field_idx = 0,
        .minbit    = 51,
        .maxbit    = 66,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDSf,
        .field_idx = 0,
        .minbit    = 11,
        .maxbit    = 26,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L2_IPV4_MULTICAST_TABLET_IPV4_DST_ADDRF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_L2_IPV4_MULTICAST_TABLET_IPV4_DST_ADDRF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_tablet_ifta80_e2t_03_b0_single_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 111,
            .maxbit    = 114,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt_STRENGTH_PROFILE_INDEXf,
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
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 75,
            .maxbit    = 78,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt_DESTINATION_TYPEf,
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
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 67,
            .maxbit    = 70,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt_MISC_CTRL_1f,
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
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 71,
            .maxbit    = 74,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt_MISC_CTRL_0f,
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
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 95,
            .maxbit    = 110,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt_CLASS_IDf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 79,
            .maxbit    = 94,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt_DESTINATIONf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 35,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt_VFIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALIDf,
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
    { /* 8 */
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
                .value = 13,
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
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_l2_ipv4_multicast_tablet_ipv4_dst_addrf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_table_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IFTA80_E2T_03_B0_SINGLEm,
        },
        .entries = 11,
        .entry = bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_tablet_ifta80_e2t_03_b0_single_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_table_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_L2_IPV4_MULTICAST_TABLEt,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_table_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_table_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_l2_ipv4_multicast_tablet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
