/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tm/bcm56990_b0/bcm56990_b0_TM_OBM_PC_PM_MAX_USAGE_MODE.map.ltl for
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
#include <bcmltd/bcmltd_handler.h>
/* TM_OBM_PC_PM_MAX_USAGE_MODE field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_mode_map_field_data_mmd[] = {
    { /* 0 PC_PM_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x1,
      .def = &bcm56990_b0_lrd_ifd_u8_0x1,
      .max = &bcm56990_b0_lrd_ifd_u8_0x41,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 1 MAX_USAGE_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_TM_OBM_MAX_USG_MODE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_mode_map_field_data = {
    .fields = 2,
    .field = bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_mode_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_modet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 15,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MIN_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_modet_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_modet_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_pc_pm_idx_src_field_desc_s0[1] = {
    {
        .field_id  = TM_OBM_PC_PM_MAX_USAGE_MODEt_PC_PM_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_pc_pm_idx_tm_obm_pc_pm_max_usage_mode_dst_field_desc_d0[3] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_INSTANCE,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_TABLE_SEL,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const uint32_t
bcm56990_b0_lrd_pc_pm_idx_transform_tbl_t0[5] = {
    IDB_OBM0_MAX_USAGE_SELECTr,
    IDB_OBM1_MAX_USAGE_SELECTr,
    IDB_OBM2_MAX_USAGE_SELECTr,
    IDB_OBM3_MAX_USAGE_SELECTr,
    MGMT_OBM_MAX_USAGE_SELECTr,
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_one_to_one_field_map_src_field_desc_s0[1] = {
    {
        .field_id  = TM_OBM_PC_PM_MAX_USAGE_MODEt_MAX_USAGE_MODEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_dst_field_desc_d0[1] = {
    {
        .field_id  = PRIORITY_SELECTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_pc_pm_idx_xfrm_handler_fwd_s0_d0_x0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_PC_PM_IDX_XFRM_HANDLER_FWD_S0_D0_X0_T0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_pc_pm_idx_src_field_desc_s0,
    .dst_fields = 3,
    .dst = bcm56990_b0_lrd_bcmltx_pc_pm_idx_tm_obm_pc_pm_max_usage_mode_dst_field_desc_d0,
    .tables = 5,
    .tbl = bcm56990_b0_lrd_pc_pm_idx_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_pc_pm_idx_xfrm_handler_rev_s0_d0_x0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_PC_PM_IDX_XFRM_HANDLER_REV_S0_D0_X0_T0_ID,
    .src_fields = 3,
    .src = bcm56990_b0_lrd_bcmltx_pc_pm_idx_tm_obm_pc_pm_max_usage_mode_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_pc_pm_idx_src_field_desc_s0,
    .tables = 5,
    .tbl = bcm56990_b0_lrd_pc_pm_idx_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_one_to_one_field_map_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ONE_TO_ONE_FIELD_MAP_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_one_to_one_field_map_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_one_to_one_field_map_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ONE_TO_ONE_FIELD_MAP_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_one_to_one_field_map_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_modet_idb_obm0_max_usage_select_map_entry[] = {
    { /* 0 */
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
                /* handler: bcm56990_b0_lta_bcmltx_pc_pm_idx_xfrm_handler_fwd_s0_d0_x0_t0 */
                .desc = &bcm56990_b0_lta_bcmltx_pc_pm_idx_xfrm_handler_fwd_s0_d0_x0_t0_desc,
            },
        },
    },
    { /* 1 */
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
                /* handler: bcm56990_b0_lta_bcmltx_pc_pm_idx_xfrm_handler_rev_s0_d0_x0_t0 */
                .desc = &bcm56990_b0_lta_bcmltx_pc_pm_idx_xfrm_handler_rev_s0_d0_x0_t0_desc,
            },
        },
    },
    { /* 2 */
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
                /* handler: bcm56990_b0_lta_bcmltx_one_to_one_field_map_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_one_to_one_field_map_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 3 */
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
                /* handler: bcm56990_b0_lta_bcmltx_one_to_one_field_map_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_one_to_one_field_map_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_mode_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IDB_OBM0_MAX_USAGE_SELECTr,
        },
        .entries = 4,
        .entry = bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_modet_idb_obm0_max_usage_select_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_mode_map = {
    .src_id = TM_OBM_PC_PM_MAX_USAGE_MODEt,
    .field_data = &bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_mode_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_mode_map_group,
    .table_attr = &bcm56990_b0_lrd_tm_obm_pc_pm_max_usage_modet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
