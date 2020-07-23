/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56990_b0/bcm56990_b0_CTR_EGR_TM_PORT_SERVICE_POOL.map.ltl for
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
/* CTR_EGR_TM_PORT_SERVICE_POOL field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_ctr_egr_tm_port_service_pool_map_field_data_mmd[] = {
    { /* 0 PORT_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x10f,
      .depth = 0,
      .width = 9,
      .edata = NULL,
    },
    { /* 1 TM_EGR_SERVICE_POOL_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 2 BUFFER_POOL */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 MC_SHARED_USAGE_CELLS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u64_0x0,
      .def = &bcm56990_b0_lrd_ifd_u64_0x0,
      .max = &bcm56990_b0_lrd_ifd_u64_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 4 UC_SHARED_USAGE_CELLS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u64_0x0,
      .def = &bcm56990_b0_lrd_ifd_u64_0x0,
      .max = &bcm56990_b0_lrd_ifd_u64_0x7ffff,
      .depth = 0,
      .width = 19,
      .edata = NULL,
    },
    { /* 5 UC_TOTAL_USAGE_CELLS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u64_0x0,
      .def = &bcm56990_b0_lrd_ifd_u64_0x0,
      .max = &bcm56990_b0_lrd_ifd_u64_0x7ffff,
      .depth = 0,
      .width = 19,
      .edata = NULL,
    },
    { /* 6 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_CTR_PORT_ENTRY_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_ctr_egr_tm_port_service_pool_map_field_data = {
    .fields = 7,
    .field = bcm56990_b0_lrd_ctr_egr_tm_port_service_pool_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_ctr_egr_tm_port_service_poolt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 1,
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
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PREPOPULATE,
        .value = true,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 2175,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 6 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 2175,
    },
    { /* 7 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_ctr_egr_tm_port_service_poolt_attr_group = {
    .attributes = 8,
    .attr = bcm56990_b0_lrd_ctr_egr_tm_port_service_poolt_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_track_index_src_field_desc_s7[3] = {
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_TM_EGR_SERVICE_POOL_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_BUFFER_POOLf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_track_index_ctr_egr_tm_port_service_pool_dst_field_desc_d0[1] = {
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
bcm56990_b0_lrd_bcmltx_port_oper_state_src_field_desc_s3[1] = {
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_OPERATIONAL_STATEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_port_pt_suppress_src_field_desc_s3[1] = {
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_service_pool_dst_field_desc_d0[1] = {
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
bcm56990_b0_lrd_bcmltx_chip_port_sp_idx_src_field_desc_s1[3] = {
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_TM_EGR_SERVICE_POOL_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_BUFFER_POOLf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_port_service_pool_dst_field_desc_d0[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 10,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_INSTANCE,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_chip_port_idx_src_field_desc_s3[2] = {
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_BUFFER_POOLf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_chip_port_idx_ctr_egr_tm_port_service_pool_dst_field_desc_d0[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 8,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_INSTANCE,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_pt_field_sel_src_field_desc_s1[1] = {
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_UC_SHARED_USAGE_CELLSf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_pt_field_sel_ctr_egr_tm_port_service_pool_dst_field_desc_d1[4] = {
    {
        .field_id  = SP0_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 17,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SP1_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 39,
        .maxbit    = 56,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SP2_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 78,
        .maxbit    = 95,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SP3_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 117,
        .maxbit    = 134,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_pt_field_sel_src_field_desc_s2[1] = {
    {
        .field_id  = CTR_EGR_TM_PORT_SERVICE_POOLt_UC_TOTAL_USAGE_CELLSf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_pt_field_sel_ctr_egr_tm_port_service_pool_dst_field_desc_d2[4] = {
    {
        .field_id  = SP0_TOTAL_COUNTf,
        .field_idx = 0,
        .minbit    = 20,
        .maxbit    = 37,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SP1_TOTAL_COUNTf,
        .field_idx = 0,
        .minbit    = 59,
        .maxbit    = 76,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SP2_TOTAL_COUNTf,
        .field_idx = 0,
        .minbit    = 98,
        .maxbit    = 115,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SP3_TOTAL_COUNTf,
        .field_idx = 0,
        .minbit    = 137,
        .maxbit    = 154,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_track_index_xfrm_handler_fwd_s7_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_FWD_S7_D0_ID,
    .src_fields = 3,
    .src = bcm56990_b0_lrd_bcmltx_track_index_src_field_desc_s7,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_track_index_ctr_egr_tm_port_service_pool_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_track_index_xfrm_handler_rev_s7_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_REV_S7_D0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_track_index_ctr_egr_tm_port_service_pool_dst_field_desc_d0,
    .dst_fields = 3,
    .dst = bcm56990_b0_lrd_bcmltx_track_index_src_field_desc_s7,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s3_k3_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_PORT_OPER_STATE_XFRM_HANDLER_REV_S3_K3_D0_ID,
    .src_fields = 0,
    .src = NULL,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_port_oper_state_src_field_desc_s3,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s3_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_PORT_PT_SUPPRESS_XFRM_HANDLER_FWD_S3_D0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_port_pt_suppress_src_field_desc_s3,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_service_pool_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_chip_port_sp_idx_xfrm_handler_fwd_s1_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_CHIP_PORT_SP_IDX_XFRM_HANDLER_FWD_S1_D0_X0_ID,
    .src_fields = 3,
    .src = bcm56990_b0_lrd_bcmltx_chip_port_sp_idx_src_field_desc_s1,
    .dst_fields = 2,
    .dst = bcm56990_b0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_port_service_pool_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_chip_port_idx_xfrm_handler_fwd_s3_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_CHIP_PORT_IDX_XFRM_HANDLER_FWD_S3_D0_ID,
    .src_fields = 2,
    .src = bcm56990_b0_lrd_bcmltx_chip_port_idx_src_field_desc_s3,
    .dst_fields = 2,
    .dst = bcm56990_b0_lrd_bcmltx_chip_port_idx_ctr_egr_tm_port_service_pool_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s1_k1_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_PT_FIELD_SEL_XFRM_HANDLER_REV_S1_K1_D1_ID,
    .src_fields = 4,
    .src = bcm56990_b0_lrd_bcmltx_pt_field_sel_ctr_egr_tm_port_service_pool_dst_field_desc_d1,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_pt_field_sel_src_field_desc_s1,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s2_k1_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_PT_FIELD_SEL_XFRM_HANDLER_REV_S2_K1_D2_ID,
    .src_fields = 4,
    .src = bcm56990_b0_lrd_bcmltx_pt_field_sel_ctr_egr_tm_port_service_pool_dst_field_desc_d2,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_pt_field_sel_src_field_desc_s2,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_ctr_egr_tm_port_service_poolt_mmu_thdo_counter_portsp_mc_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SHARED_COUNTf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 13,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_PORT_SERVICE_POOLt_MC_SHARED_USAGE_CELLSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 13,
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
                /* handler: bcm56990_b0_lta_bcmltx_track_index_xfrm_handler_fwd_s7_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_track_index_xfrm_handler_fwd_s7_d0_desc,
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
                /* handler: bcm56990_b0_lta_bcmltx_track_index_xfrm_handler_rev_s7_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_track_index_xfrm_handler_rev_s7_d0_desc,
            },
        },
    },
    { /* 3 */
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
                /* handler: bcm56990_b0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s3_k3_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s3_k3_d0_desc,
            },
        },
    },
    { /* 4 */
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
                /* handler: bcm56990_b0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s3_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s3_d0_desc,
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
                /* handler: bcm56990_b0_lta_bcmltx_chip_port_sp_idx_xfrm_handler_fwd_s1_d0_x0 */
                .desc = &bcm56990_b0_lta_bcmltx_chip_port_sp_idx_xfrm_handler_fwd_s1_d0_x0_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t bcm56990_b0_lrd_ctr_egr_tm_port_service_poolt_mmu_thdo_counter_port_uc_map_entry[] = {
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
                /* handler: bcm56990_b0_lta_bcmltx_chip_port_idx_xfrm_handler_fwd_s3_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_chip_port_idx_xfrm_handler_fwd_s3_d0_desc,
            },
        },
    },
    { /* 1 */
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
                /* handler: bcm56990_b0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s1_k1_d1 */
                .desc = &bcm56990_b0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s1_k1_d1_desc,
            },
        },
    },
    { /* 2 */
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
                /* handler: bcm56990_b0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s2_k1_d2 */
                .desc = &bcm56990_b0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s2_k1_d2_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_ctr_egr_tm_port_service_pool_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDO_COUNTER_PORTSP_MCm,
        },
        .entries = 6,
        .entry = bcm56990_b0_lrd_ctr_egr_tm_port_service_poolt_mmu_thdo_counter_portsp_mc_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDO_COUNTER_PORT_UCm,
        },
        .entries = 3,
        .entry = bcm56990_b0_lrd_ctr_egr_tm_port_service_poolt_mmu_thdo_counter_port_uc_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_ctr_egr_tm_port_service_pool_map = {
    .src_id = CTR_EGR_TM_PORT_SERVICE_POOLt,
    .field_data = &bcm56990_b0_lrd_ctr_egr_tm_port_service_pool_map_field_data,
    .groups = 2,
    .group  = bcm56990_b0_lrd_ctr_egr_tm_port_service_pool_map_group,
    .table_attr = &bcm56990_b0_lrd_ctr_egr_tm_port_service_poolt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
