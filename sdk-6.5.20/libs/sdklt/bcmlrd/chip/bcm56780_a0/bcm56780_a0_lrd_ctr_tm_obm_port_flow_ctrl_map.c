/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56780_a0/bcm56780_a0_CTR_TM_OBM_PORT_FLOW_CTRL.map.ltl for
 *      bcm56780_a0
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
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56780_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* CTR_TM_OBM_PORT_FLOW_CTRL field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrl_map_field_data_mmd[] = {
    { /* 0 PORT_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u16_0x1,
      .def = &bcm56780_a0_lrd_ifd_u16_0x1,
      .max = &bcm56780_a0_lrd_ifd_u16_0x4f,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 1 FLOW_CTRL_EVENTS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 2 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_TM_PORT_ENTRY_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrl_map_field_data = {
    .fields = 3,
    .field = bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrl_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrlt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 3,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MIN_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 79,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 79,
    },
    { /* 6 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrlt_attr_group = {
    .attributes = 7,
    .attr = bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrlt_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_track_index_src_field_desc_s19[1] = {
    {
        .field_id  = CTR_TM_OBM_PORT_FLOW_CTRLt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_track_index_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s10[1] = {
    {
        .field_id  = CTR_TM_OBM_PORT_FLOW_CTRLt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_PT_SUPPRESS,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_oper_state_src_field_desc_s10[1] = {
    {
        .field_id  = CTR_TM_OBM_PORT_FLOW_CTRLt_OPERATIONAL_STATEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_obm_port_idx_src_field_desc_s1[1] = {
    {
        .field_id  = CTR_TM_OBM_PORT_FLOW_CTRLt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0[3] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 2,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_INSTANCE,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
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
bcm56780_a0_lrd_obm_port_idx_transform_tbl_t8[5] = {
    IDB_OBM0_FLOW_CONTROL_EVENT_COUNTr,
    IDB_OBM1_FLOW_CONTROL_EVENT_COUNTr,
    IDB_OBM2_FLOW_CONTROL_EVENT_COUNTr,
    IDB_OBM3_FLOW_CONTROL_EVENT_COUNTr,
    IDB_OBM4_FLOW_CONTROL_EVENT_COUNTr,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s19_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_FWD_S19_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_track_index_src_field_desc_s19,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_track_index_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_rev_s19_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_REV_S19_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_track_index_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_track_index_src_field_desc_s19,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s10_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PORT_PT_SUPPRESS_XFRM_HANDLER_FWD_S10_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s10,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s10_k10_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PORT_OPER_STATE_XFRM_HANDLER_REV_S10_K10_D0_ID,
    .src_fields = 0,
    .src = NULL,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_port_oper_state_src_field_desc_s10,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s1_d0_x1_t8_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_OBM_PORT_IDX_XFRM_HANDLER_FWD_S1_D0_X1_T8_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_obm_port_idx_src_field_desc_s1,
    .dst_fields = 3,
    .dst = bcm56780_a0_lrd_bcmltx_obm_port_idx_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0,
    .tables = 5,
    .tbl = bcm56780_a0_lrd_obm_port_idx_transform_tbl_t8,
};


static const bcmlrd_map_entry_t bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrlt_idb_obm0_flow_control_event_count_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = COUNTERf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 63,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_TM_OBM_PORT_FLOW_CTRLt_FLOW_CTRL_EVENTSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
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
                /* handler: bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s19_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s19_d0_desc,
            },
        },
    },
    { /* 2 */
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
                /* handler: bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_rev_s19_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_rev_s19_d0_desc,
            },
        },
    },
    { /* 3 */
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
                /* handler: bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s10_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s10_d0_desc,
            },
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_ALWAYS_REV_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s10_k10_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s10_k10_d0_desc,
            },
        },
    },
    { /* 5 */
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
                /* handler: bcm56780_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s1_d0_x1_t8 */
                .desc = &bcm56780_a0_lta_bcmltx_obm_port_idx_xfrm_handler_fwd_s1_d0_x1_t8_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_lrd_bcmltx_ctr_tm_obm_port_flow_ctrl_validate_entry[] = {
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
            /* handler: bcm56780_a0_lta_bcmltx_ctr_tm_obm_port_flow_ctrl_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56780_A0_LTA_BCMLTX_CTR_TM_OBM_PORT_FLOW_CTRL_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrl_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IDB_OBM0_FLOW_CONTROL_EVENT_COUNTr,
        },
        .entries = 6,
        .entry = bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrlt_idb_obm0_flow_control_event_count_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_lrd_bcmltx_ctr_tm_obm_port_flow_ctrl_validate_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrl_map = {
    .src_id = CTR_TM_OBM_PORT_FLOW_CTRLt,
    .field_data = &bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrl_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrl_map_group,
    .table_attr = &bcm56780_a0_lrd_ctr_tm_obm_port_flow_ctrlt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
