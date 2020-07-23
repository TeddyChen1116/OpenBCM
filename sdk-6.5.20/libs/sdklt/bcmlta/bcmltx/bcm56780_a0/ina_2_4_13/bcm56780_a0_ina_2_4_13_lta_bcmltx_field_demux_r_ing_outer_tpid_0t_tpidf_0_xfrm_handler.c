/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmltx */
/* Handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_field_demux.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_xfrm_field_desc.h>


extern const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_r_ing_outer_tpid_0t_tpidf_0_src_field_desc_s0[];

static const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_dst_field_desc[18] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 332,
        .field_idx = 0,
        .minbit    = 184,
        .maxbit    = 191,
        .entry_idx = 0,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY0[191:184]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 333,
        .field_idx = 0,
        .minbit    = 176,
        .maxbit    = 183,
        .entry_idx = 0,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY0[183:176]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 334,
        .field_idx = 0,
        .minbit    = 184,
        .maxbit    = 191,
        .entry_idx = 1,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY1[191:184]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 335,
        .field_idx = 0,
        .minbit    = 176,
        .maxbit    = 183,
        .entry_idx = 1,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY1[183:176]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 336,
        .field_idx = 0,
        .minbit    = 136,
        .maxbit    = 143,
        .entry_idx = 2,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY2[143:136]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 337,
        .field_idx = 0,
        .minbit    = 128,
        .maxbit    = 135,
        .entry_idx = 2,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY2[135:128]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 338,
        .field_idx = 0,
        .minbit    = 136,
        .maxbit    = 143,
        .entry_idx = 3,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY3[143:136]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 339,
        .field_idx = 0,
        .minbit    = 128,
        .maxbit    = 135,
        .entry_idx = 3,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY3[135:128]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 340,
        .field_idx = 0,
        .minbit    = 136,
        .maxbit    = 143,
        .entry_idx = 4,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY4[143:136]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 341,
        .field_idx = 0,
        .minbit    = 128,
        .maxbit    = 135,
        .entry_idx = 4,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY4[135:128]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 342,
        .field_idx = 0,
        .minbit    = 184,
        .maxbit    = 191,
        .entry_idx = 5,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY5[191:184]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 343,
        .field_idx = 0,
        .minbit    = 176,
        .maxbit    = 183,
        .entry_idx = 5,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY5[183:176]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 344,
        .field_idx = 0,
        .minbit    = 120,
        .maxbit    = 127,
        .entry_idx = 6,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY6[127:120]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 345,
        .field_idx = 0,
        .minbit    = 112,
        .maxbit    = 119,
        .entry_idx = 6,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY6[119:112]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 346,
        .field_idx = 0,
        .minbit    = 120,
        .maxbit    = 127,
        .entry_idx = 7,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY7[127:120]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 347,
        .field_idx = 0,
        .minbit    = 112,
        .maxbit    = 119,
        .entry_idx = 7,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY7[119:112]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 348,
        .field_idx = 0,
        .minbit    = 120,
        .maxbit    = 127,
        .entry_idx = 8,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY8[127:120]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 349,
        .field_idx = 0,
        .minbit    = 112,
        .maxbit    = 119,
        .entry_idx = 8,
        .sym       = "IPARSER1_HME_STAGE0_TCAMm.KEYf.ENTRY8[119:112]",
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_src_list_s0 = {
    .field_num = 18,
    .field_array = bcm56780_a0_ina_2_4_13_lrd_field_demux_r_ing_outer_tpid_0t_tpidf_0_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_dst_list_d0 = {
    .field_num = 18,
    .field_array = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_dst_field_desc
};

static const uint32_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_transform_src_s0[1] = {
    BCM56780_A0_INA_2_4_13_R_ING_OUTER_TPID_0t_TPIDf,
};

static const uint32_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_transform_dst_d0[18] = {
    BCMLTD_INTERNAL_FIELD_BASE + 332,
    BCMLTD_INTERNAL_FIELD_BASE + 333,
    BCMLTD_INTERNAL_FIELD_BASE + 334,
    BCMLTD_INTERNAL_FIELD_BASE + 335,
    BCMLTD_INTERNAL_FIELD_BASE + 336,
    BCMLTD_INTERNAL_FIELD_BASE + 337,
    BCMLTD_INTERNAL_FIELD_BASE + 338,
    BCMLTD_INTERNAL_FIELD_BASE + 339,
    BCMLTD_INTERNAL_FIELD_BASE + 340,
    BCMLTD_INTERNAL_FIELD_BASE + 341,
    BCMLTD_INTERNAL_FIELD_BASE + 342,
    BCMLTD_INTERNAL_FIELD_BASE + 343,
    BCMLTD_INTERNAL_FIELD_BASE + 344,
    BCMLTD_INTERNAL_FIELD_BASE + 345,
    BCMLTD_INTERNAL_FIELD_BASE + 346,
    BCMLTD_INTERNAL_FIELD_BASE + 347,
    BCMLTD_INTERNAL_FIELD_BASE + 348,
    BCMLTD_INTERNAL_FIELD_BASE + 349,
};

static const bcmltd_generic_arg_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_comp_data = {
    .sid       = BCM56780_A0_INA_2_4_13_R_ING_OUTER_TPID_0t,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_transform_src_s0,
    .field_list  = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_src_list_s0,
    .rfields     = 18,
    .rfield      = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_transform_dst_d0,
    .rfield_list = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_dst_list_d0,
    .comp_data   = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 18,
    .field       = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_transform_dst_d0,
    .field_list  = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_transform_src_s0,
    .rfield_list = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_src_list_s0,
    .comp_data   = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_comp_data
};

const bcmltd_xfrm_handler_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_field_demux_transform,
    .arg           = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_field_mux_transform,
    .arg           = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_r_ing_outer_tpid_0t_tpidf_0_xfrm_handler_rev_arg_s0_d0
};


