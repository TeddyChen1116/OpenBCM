/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/dna_2_4_13/bcm56780_a0_dna_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLE.map.ltl for
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
/* EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLE field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_table_map_field_data_mmd[] = {
    { /* 0 VFI */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 1 GROUP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 2 PRESERVE_OTAG */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 PRESERVE_ITAG */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 4 VLAN_0 */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 5 VLAN_1 */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 6 TAG_ACTION */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 DOT1P_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 8 STRENGTH_PRFL_IDX */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 9 VXLT_CTRL */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 10 SVTAG_OFFSET */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 11 SVTAG_PKT_TYPE */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 12 SVTAG_SC_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 13 PKT_LENGTH_ADJUST_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 14 FLEX_CTR_ACTION */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 15 FLEX_CTR_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_4_13_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_table_map_field_data = {
    .fields = 16,
    .field = bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_table_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_tablet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 16384,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_tablet_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_tablet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_DOT1P_REMARK_BASE_PTRf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 6,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_DOT1P_REMARK_BASE_PTRf,
        .field_idx = 0,
        .minbit    = 7,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_4_13_lrd_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_dst_field_desc[2] = {
    {
        .field_id  = TABLE_FIELDS_0f,
        .field_idx = 0,
        .minbit    = 113,
        .maxbit    = 119,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDS_1f,
        .field_idx = 0,
        .minbit    = 123,
        .maxbit    = 123,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLET_DOT1P_REMARK_BASE_PTRF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLET_DOT1P_REMARK_BASE_PTRF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_4_13_lrd_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_4_13_lrd_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_tablet_efta30_e2t_00_b0_double_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 236,
            .maxbit    = 239,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_STRENGTH_PRFL_IDXf,
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
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 178,
            .maxbit    = 179,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_SVTAG_PKT_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 148,
            .maxbit    = 155,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_SVTAG_OFFSETf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 184,
            .maxbit    = 199,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_VLAN_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 200,
            .maxbit    = 215,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_VLAN_0f,
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
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 224,
            .maxbit    = 227,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_TAG_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 228,
            .maxbit    = 235,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_PKT_LENGTH_ADJUST_PROFILE_INDEXf,
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
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 216,
            .maxbit    = 219,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_VXLT_CTRLf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 132,
            .maxbit    = 143,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_FLEX_CTR_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDS_1f,
            .field_idx = 0,
            .minbit    = 168,
            .maxbit    = 177,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_SVTAG_SC_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 9,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TABLE_FIELDS_0f,
            .field_idx = 0,
            .minbit    = 75,
            .maxbit    = 90,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_VFIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TABLE_FIELDS_0f,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_PRESERVE_OTAGf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TABLE_FIELDS_0f,
            .field_idx = 0,
            .minbit    = 8,
            .maxbit    = 8,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_PRESERVE_ITAGf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = TABLE_FIELDS_0f,
            .field_idx = 0,
            .minbit    = 91,
            .maxbit    = 106,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt_GROUP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
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
                .value = 3,
            }
        },
    },
    { /* 15 */
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
                .value = 7,
            }
        },
    },
    { /* 16 */
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
                .value = 2,
            }
        },
    },
    { /* 17 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 18 */
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
                /* handler: bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_4_13_lta_bcmltx_field_demux_egr_vlan_translation_svtag_assign_tablet_dot1p_remark_base_ptrf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_table_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EFTA30_E2T_00_B0_DOUBLEm,
        },
        .entries = 19,
        .entry = bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_tablet_efta30_e2t_00_b0_double_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_table_map = {
    .src_id = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt,
    .field_data = &bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_table_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_table_map_group,
    .table_attr = &bcm56780_a0_dna_2_4_13_lrd_egr_vlan_translation_svtag_assign_tablet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
