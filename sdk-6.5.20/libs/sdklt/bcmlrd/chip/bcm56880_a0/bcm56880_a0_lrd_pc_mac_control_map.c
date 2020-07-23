/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/pc/bcm56880_a0/bcm56880_a0_PC_MAC_CONTROL.map.ltl for
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
/* PC_MAC_CONTROL field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_pc_mac_control_map_field_data_mmd[] = {
    { /* 0 PORT_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x1,
      .def = &bcm56880_a0_lrd_ifd_u16_0x1,
      .max = &bcm56880_a0_lrd_ifd_u16_0x9f,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 1 OVERSIZE_PKT */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x5ee,
      .max = &bcm56880_a0_lrd_ifd_u32_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 2 RX_ENABLE_AUTO */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 RX_ENABLE */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 4 TX_ENABLE_AUTO */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 TX_ENABLE */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 LOCAL_FAULT_DISABLE */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 7 REMOTE_FAULT_DISABLE */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 8 INTER_FRAME_GAP_AUTO */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 9 INTER_FRAME_GAP */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0xc,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 10 PAUSE_TX */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 11 PAUSE_RX */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 12 PAUSE_ADDR */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u64_0x0,
      .def = &bcm56880_a0_lrd_ifd_u64_0x0,
      .max = &bcm56880_a0_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 13 PAUSE_PASS */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 14 CONTROL_PASS */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 15 RUNT_THRESHOLD_AUTO */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 16 RUNT_THRESHOLD */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x40,
      .max = &bcm56880_a0_lrd_ifd_u8_0x60,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 17 MAC_ECC_INTR_ENABLE */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 18 RX_ENABLE_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 19 TX_ENABLE_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 20 INTER_FRAME_GAP_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 21 RUNT_THRESHOLD_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 22 PAUSE_RX_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 23 PAUSE_TX_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 24 STALL_TX */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 25 STALL_TX_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_PC_STALL_TX_STATUS_T_DATA,
    },
    { /* 26 PURGE_DRIBBLE_NIBBLE_ERROR_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 27 PURGE_MACSEC_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 28 PURGE_SCH_CRC_ERROR */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 29 PURGE_PFC_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 30 PURGE_RUNT_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 31 RX_FIFO_FULL */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 32 PURGE_UNICAST_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 33 PURGE_VLAN_TAGGED_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 34 PURGE_BAD_OPCODE_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 35 PURGE_PAUSE_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 36 PURGE_CONTROL_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 37 PURGE_PROMISCUOUS_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 38 PURGE_BROADCAST_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 39 PURGE_MULTICAST_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 40 PURGE_GOOD_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 41 PURGE_TRUNCATED_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 42 PURGE_LENGTH_CHECK_FAIL_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 43 PURGE_CRC_ERROR_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 44 PURGE_RX_CODE_ERROR_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 45 PURGE_UNSUPPORTED_PAUSE_PFC_DA */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 46 PURGE_STACK_VLAN_FRAMES */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 47 PURGE_WRONG_SA */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 48 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x11,
      .depth = 0,
      .width = 5,
      .edata = BCMLTD_COMMON_PC_ENTRY_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_pc_mac_control_map_field_data = {
    .fields = 49,
    .field = bcm56880_a0_lrd_pc_mac_control_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_pc_mac_controlt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 159,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 159,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 1,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_pc_mac_controlt_attr_group = {
    .attributes = 4,
    .attr = bcm56880_a0_lrd_pc_mac_controlt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_bcmimm_pc_mac_control_entry[] = {
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
            /* handler: bcm56880_a0_lta_bcmimm_pc_mac_control_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_LTA_BCMIMM_PC_MAC_CONTROL_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_entry_t
bcm56880_a0_lrd_bcmltx_pc_mac_control_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_lta_bcmltx_pc_mac_control_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56880_A0_LTA_BCMLTX_PC_MAC_CONTROL_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_pc_mac_control_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_lrd_bcmimm_pc_mac_control_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_lrd_bcmltx_pc_mac_control_validate_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_pc_mac_control_map = {
    .src_id = PC_MAC_CONTROLt,
    .field_data = &bcm56880_a0_lrd_pc_mac_control_map_field_data,
    .groups = 2,
    .group  = bcm56880_a0_lrd_pc_mac_control_map_group,
    .table_attr = &bcm56880_a0_lrd_pc_mac_controlt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
