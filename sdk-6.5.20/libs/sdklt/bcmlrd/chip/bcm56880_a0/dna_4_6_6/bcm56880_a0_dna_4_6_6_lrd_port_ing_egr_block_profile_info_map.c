/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_PORT_ING_EGR_BLOCK_PROFILE_INFO.map.ltl for
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
/* PORT_ING_EGR_BLOCK_PROFILE_INFO field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_info_map_field_data_mmd[] = {
    { /* 0 PORT_ING_EGR_BLOCK_PROFILE_INFO_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_PORT_ING_EGR_BLOCK_PROFILE_INFO_ID_T_DATA,
    },
    { /* 1 MEMBERSHIP_PROFILE_PTR */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_MEMBERSHIP_PROFILE_PTR_T_DATA,
    },
    { /* 2 STATE_PROFILE_PTR */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_STATE_PROFILE_PTR_T_DATA,
    },
    { /* 3 BITMAP_MASK0_PTR */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_BITMAP_MASK0_PTR_T_DATA,
    },
    { /* 4 BITMAP_MASK1_PTR */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_BITMAP_MASK1_PTR_T_DATA,
    },
    { /* 5 BITMAP_MASK2_PTR */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_BITMAP_MASK2_PTR_T_DATA,
    },
    { /* 6 BITMAP_MASK3_PTR */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_BITMAP_MASK3_PTR_T_DATA,
    },
    { /* 7 BITMAP_MASK_SEL_0 */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_BITMAP_MASK_SEL_0_T_DATA,
    },
    { /* 8 BITMAP_MASK_SEL_1 */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_BITMAP_MASK_SEL_1_T_DATA,
    },
    { /* 9 BITMAP_MASK_SEL_2 */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_BITMAP_MASK_SEL_2_T_DATA,
    },
    { /* 10 BITMAP_MASK_SEL_3 */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_BITMAP_MASK_SEL_3_T_DATA,
    },
    { /* 11 UNICAST */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_UNICAST_T_DATA,
    },
    { /* 12 PRUNE_BMP */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_PRUNE_BMP_T_DATA,
    },
    { /* 13 L2_BMP */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_L2_BMP_T_DATA,
    },
    { /* 14 L3_BMP */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_L3_BMP_T_DATA,
    },
    { /* 15 UNICAST_DEST_PORT */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_UNICAST_DEST_PORT_T_DATA,
    },
    { /* 16 DLB_DESTINATION */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_DLB_DESTINATION_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_info_map_field_data = {
    .fields = 17,
    .field = bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 3,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_infot_attr_group = {
    .attributes = 2,
    .attr = bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_bcmimm_port_ing_egr_block_profile_info_entry[] = {
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
            /* handler: bcm56880_a0_dna_4_6_6_lta_bcmimm_port_ing_egr_block_profile_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_DNA_4_6_6_LTA_BCMIMM_PORT_ING_EGR_BLOCK_PROFILE_INFO_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_6_6_lrd_bcmimm_port_ing_egr_block_profile_info_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_info_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_PORT_ING_EGR_BLOCK_PROFILE_INFOt,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_info_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_info_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_port_ing_egr_block_profile_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
