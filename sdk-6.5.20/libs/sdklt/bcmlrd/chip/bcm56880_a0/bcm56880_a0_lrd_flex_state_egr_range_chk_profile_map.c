/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/flex_state/bcm56880_a0/bcm56880_a0_FLEX_STATE_EGR_RANGE_CHK_PROFILE.map.ltl for
 *      bcm56880_a0
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
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* FLEX_STATE_EGR_RANGE_CHK_PROFILE field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_flex_state_egr_range_chk_profile_map_field_data_mmd[] = {
    { /* 0 FLEX_STATE_EGR_RANGE_CHK_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 1 OBJ_SELECT */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 2 RANGE_CHECKER */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 3 PIPE */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 4 INSTANCE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = BCM56880_A0_LRD_FLEX_STATE_EGR_INSTANCE_T_DATA,
    },
    { /* 5 MIN */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 6 MAX */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_flex_state_egr_range_chk_profile_map_field_data = {
    .fields = 7,
    .field = bcm56880_a0_lrd_flex_state_egr_range_chk_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_flex_state_egr_range_chk_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 128,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_RESOURCE_INFO,
        .value = FLEX_STATE_EGR_RANGE_CHK_PROFILE_INFOt,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_flex_state_egr_range_chk_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_lrd_flex_state_egr_range_chk_profilet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_bcmimm_flex_state_egr_range_chk_profile_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_lta_bcmimm_flex_state_egr_range_chk_profile_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_LTA_BCMIMM_FLEX_STATE_EGR_RANGE_CHK_PROFILE_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_flex_state_egr_range_chk_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_lrd_bcmimm_flex_state_egr_range_chk_profile_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_flex_state_egr_range_chk_profile_map = {
    .src_id = FLEX_STATE_EGR_RANGE_CHK_PROFILEt,
    .field_data = &bcm56880_a0_lrd_flex_state_egr_range_chk_profile_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_flex_state_egr_range_chk_profile_map_group,
    .table_attr = &bcm56880_a0_lrd_flex_state_egr_range_chk_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
