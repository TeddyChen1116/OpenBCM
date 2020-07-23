/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/lb_hash/bcm56780_a0/bcm56780_a0_LB_HASH_ENTROPY_HASH_SELECTION_CONTROL_PROFILE.map.ltl for
 *      bcm56780_a0 variant ina_2_4_13
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
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56780_a0_lrd_enumpool.h"
#include "bcm56780_a0_ina_2_4_13_lrd_enumpool.h"
/* LB_HASH_ENTROPY_HASH_SELECTION_CONTROL_PROFILE field init */
static const bcmlrd_field_data_t bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profile_map_field_data_mmd[] = {
    { /* 0 PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56780_A0_INA_2_4_13_LRD_LB_HASH_ENTROPY_PROFILE_ID_T_DATA,
    },
    { /* 1 HASH_INSTANCE */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 HASH_FLOW_ID_SRC */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0xc,
      .depth = 0,
      .width = 4,
      .edata = BCM56780_A0_LRD_LB_HASH_ENTROPY_HASH_FLOW_ID_SRC_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profile_map_field_data = {
    .fields = 3,
    .field = bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profilet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profilet_ipost_lag_config_profile_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_ENTROPY_HASH_SELECTION_CONTROL_PROFILEt_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = ENTROPY_LABEL_SHUFFLE_TBL_SELf,
            .field_idx = 0,
            .minbit    = 25,
            .maxbit    = 25,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_ENTROPY_HASH_SELECTION_CONTROL_PROFILEt_HASH_INSTANCEf,
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
            .field_id  = ENTROPY_LABEL_SHUFFLE_INDEX_SELf,
            .field_idx = 0,
            .minbit    = 26,
            .maxbit    = 29,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_ENTROPY_HASH_SELECTION_CONTROL_PROFILEt_HASH_FLOW_ID_SRCf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_LAG_CONFIG_PROFILEm,
        },
        .entries = 3,
        .entry = bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profilet_ipost_lag_config_profile_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profile_map = {
    .src_id = LB_HASH_ENTROPY_HASH_SELECTION_CONTROL_PROFILEt,
    .field_data = &bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profile_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profile_map_group,
    .table_attr = &bcm56780_a0_ina_2_4_13_lrd_lb_hash_entropy_hash_selection_control_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
