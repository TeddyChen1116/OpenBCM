/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_DT_EFP_ACTION_TEMPLATE.map.ltl for
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
/* DT_EFP_ACTION_TEMPLATE field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_template_map_field_data_mmd[] = {
    { /* 0 EFP_ACTION_TEMPLATE_INDEX */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x1,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x1,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x2000,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 1 EGR_METER_TRIGGERS_METER_ACTION_SET */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 2 EGR_METER_TRIGGERS_COLOR_TABLE_INDEX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 3 EGR_METER_TRIGGERS_COLOR_PDD_SBR_INDEX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 4 EGR_METADATA_SF_LTS_IDX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 EGR_CMD_BUS_EFP_DROP_TRACE_POLICY */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 6 EGR_OBJ_BUS_VC_SWAP_EXP_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 7 EGR_OBJ_BUS_FWD_HDR_TTL */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 8 EGR_CMD_BUS_EFP_HG3_CTRL */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 9 EGR_OBJ_BUS_VID_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 10 EGR_OBJ_BUS_L3OIF_TOS_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 11 EGR_CMD_BUS_FLEX_CTR_PRESEL */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 12 EGR_OBJ_BUS_DVP_DOT1P_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 13 EGR_OBJ_BUS_VID_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 14 EGR_OBJ_BUS_EFP_OPAQUE_OBJ1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 15 EGR_OBJ_BUS_ERSPAN3_GBP_SID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 16 EGR_FIELD_BUS_FWD_TOS */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 17 EGR_OBJ_BUS_TPID_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 18 EGR_OBJ_BUS_EFP_OPAQUE_OBJ2 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 19 EGR_OBJ_BUS_COPIED_QOS_FIELDS */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 20 EGR_FIELD_BUS_TNL_VID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 21 EGR_OBJ_BUS_L2OIF_EVXLT_DOT1P_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 22 EGR_CMD_BUS_ING_QOS_REMARK_CTRL */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 23 EGR_CMD_BUS_TAG_ACTION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 24 EGR_CMD_BUS_UL_OTAG_ACTION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 25 EGR_CMD_BUS_FSL2_PROC_CTRL_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 26 EGR_OBJ_BUS_L3TUNNEL_TOS_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_template_map_field_data = {
    .fields = 27,
    .field = bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_template_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_templatet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 8192,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_templatet_attr_group = {
    .attributes = 2,
    .attr = bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_templatet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_bcmimm_dt_efp_action_template_entry[] = {
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
            /* handler: bcm56880_a0_dna_4_6_6_lta_bcmimm_dt_efp_action_template_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_DNA_4_6_6_LTA_BCMIMM_DT_EFP_ACTION_TEMPLATE_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_template_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_6_6_lrd_bcmimm_dt_efp_action_template_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_template_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_DT_EFP_ACTION_TEMPLATEt,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_template_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_template_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_dt_efp_action_templatet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
