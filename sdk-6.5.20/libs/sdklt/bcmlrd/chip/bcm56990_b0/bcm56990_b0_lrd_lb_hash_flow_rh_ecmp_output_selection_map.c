/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/lb_hash/bcm56990_b0/bcm56990_b0_LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTION.map.ltl for
 *      bcm56990_b0
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
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_b0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_b0_lrd_enumpool.h"
/* LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTION field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selection_map_field_data_mmd[] = {
    { /* 0 LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTION_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 1 CONCAT */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 SUBSET_SELECT */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x7,
      .depth = 0,
      .width = 3,
      .edata = BCM56990_B0_LRD_LB_HASH_SUBSET_SELECT_T_DATA,
    },
    { /* 3 OFFSET */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 4 OVERLAY_CONCAT */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 OVERLAY_SUBSET_SELECT */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x7,
      .depth = 0,
      .width = 3,
      .edata = BCM56990_B0_LRD_LB_HASH_SUBSET_SELECT_T_DATA,
    },
    { /* 6 OVERLAY_OFFSET */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selection_map_field_data = {
    .fields = 7,
    .field = bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selection_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selectiont_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 255,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selectiont_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selectiont_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selectiont_rtag7_flow_based_hash_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTIONt_LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTION_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CONCATENATE_HASH_FIELDS_RH_ECMPf,
            .field_idx = 0,
            .minbit    = 10,
            .maxbit    = 10,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTIONt_CONCATf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SUB_SEL_RH_ECMPf,
            .field_idx = 0,
            .minbit    = 135,
            .maxbit    = 137,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTIONt_SUBSET_SELECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = OFFSET_RH_ECMPf,
            .field_idx = 0,
            .minbit    = 75,
            .maxbit    = 80,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTIONt_OFFSETf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CONCATENATE_HASH_FIELDS_RH_HIER_ECMPf,
            .field_idx = 0,
            .minbit    = 11,
            .maxbit    = 11,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTIONt_OVERLAY_CONCATf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SUB_SEL_RH_HIER_ECMPf,
            .field_idx = 0,
            .minbit    = 138,
            .maxbit    = 140,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTIONt_OVERLAY_SUBSET_SELECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = OFFSET_RH_HIER_ECMPf,
            .field_idx = 0,
            .minbit    = 81,
            .maxbit    = 86,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTIONt_OVERLAY_OFFSETf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selection_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = RTAG7_FLOW_BASED_HASHm,
        },
        .entries = 7,
        .entry = bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selectiont_rtag7_flow_based_hash_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selection_map = {
    .src_id = LB_HASH_FLOW_RH_ECMP_OUTPUT_SELECTIONt,
    .field_data = &bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selection_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selection_map_group,
    .table_attr = &bcm56990_b0_lrd_lb_hash_flow_rh_ecmp_output_selectiont_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
