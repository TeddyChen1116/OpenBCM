/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_FLEX_STATE_EGR_OBJ_INFO.map.ltl for
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
/* FLEX_STATE_EGR_OBJ_INFO field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_info_map_field_data_mmd[] = {
    { /* 0 OBJ */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x4,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x4,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0xd1,
      .depth = 0,
      .width = 8,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_FLEX_STATE_EGR_OBJ_BUS_T_DATA,
    },
    { /* 1 MIN_BIT */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 2 MAX_BIT */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_info_map_field_data = {
    .fields = 3,
    .field = bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 64,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = 1,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_infot_attr_group = {
    .attributes = 2,
    .attr = bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_bcmimm_flex_state_egr_obj_info_entry[] = {
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
            /* handler: bcm56880_a0_dna_4_6_6_lta_bcmimm_flex_state_egr_obj_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_DNA_4_6_6_LTA_BCMIMM_FLEX_STATE_EGR_OBJ_INFO_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_6_6_lrd_bcmimm_flex_state_egr_obj_info_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_info_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_FLEX_STATE_EGR_OBJ_INFOt,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_info_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_info_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_flex_state_egr_obj_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
