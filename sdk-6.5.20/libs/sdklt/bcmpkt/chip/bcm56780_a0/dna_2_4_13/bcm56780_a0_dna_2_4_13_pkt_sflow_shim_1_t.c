/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml
 * for device bcm56780_a0 and variant dna_2_4_13.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 */

#include <sal/sal_types.h>
#include <shr/shr_error.h>
#include <bsl/bsl.h>
#include <bcmpkt/flexhdr/bcmpkt_sflow_shim_1_t.h>
#include <bcmpkt/flexhdr/bcmpkt_sflow_shim_1_t_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))

static uint32_t bcmpkt_sflow_shim_1_t_reserved_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 16, 7);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_SFLOW_SHIM_1_T_RESERVED with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_sflow_shim_1_t_reserved_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_SFLOW_SHIM_1_T_RESERVED with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 16, 7, val);
}

static uint32_t bcmpkt_sflow_shim_1_t_sys_opcode_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 23, 3);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_SFLOW_SHIM_1_T_SYS_OPCODE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_sflow_shim_1_t_sys_opcode_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_SFLOW_SHIM_1_T_SYS_OPCODE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 23, 3, val);
}

static uint32_t bcmpkt_sflow_shim_1_t_flag_src_sample_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 31, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_SFLOW_SHIM_1_T_FLAG_SRC_SAMPLE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_sflow_shim_1_t_flag_src_sample_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_SFLOW_SHIM_1_T_FLAG_SRC_SAMPLE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 31, 1, val);
}

static uint32_t bcmpkt_sflow_shim_1_t_flag_discarded_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 27, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_SFLOW_SHIM_1_T_FLAG_DISCARDED with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_sflow_shim_1_t_flag_discarded_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_SFLOW_SHIM_1_T_FLAG_DISCARDED with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 27, 1, val);
}

static uint32_t bcmpkt_sflow_shim_1_t_flag_flex_sample_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 29, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_SFLOW_SHIM_1_T_FLAG_FLEX_SAMPLE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_sflow_shim_1_t_flag_flex_sample_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_SFLOW_SHIM_1_T_FLAG_FLEX_SAMPLE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 29, 1, val);
}

static uint32_t bcmpkt_sflow_shim_1_t_flag_truncated_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 26, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_SFLOW_SHIM_1_T_FLAG_TRUNCATED with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_sflow_shim_1_t_flag_truncated_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_SFLOW_SHIM_1_T_FLAG_TRUNCATED with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 26, 1, val);
}

static uint32_t bcmpkt_sflow_shim_1_t_flag_dest_sample_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 30, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_SFLOW_SHIM_1_T_FLAG_DEST_SAMPLE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_sflow_shim_1_t_flag_dest_sample_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_SFLOW_SHIM_1_T_FLAG_DEST_SAMPLE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 30, 1, val);
}

static uint32_t bcmpkt_sflow_shim_1_t_flag_mcast_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 28, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_SFLOW_SHIM_1_T_FLAG_MCAST with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_sflow_shim_1_t_flag_mcast_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_SFLOW_SHIM_1_T_FLAG_MCAST with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 28, 1, val);
}

static uint32_t bcmpkt_sflow_shim_1_t_i_support_get(uint32_t *data, uint32_t **addr) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_SFLOW_SHIM_1_T_I_SUPPORT on device BCM56780_A0_DNA_2_4_13\n")));
    return true;
}

const bcmpkt_sflow_shim_1_t_fget_t bcm56780_a0_dna_2_4_13_sflow_shim_1_t_fget = {
    {
        bcmpkt_sflow_shim_1_t_reserved_get,
        bcmpkt_sflow_shim_1_t_sys_opcode_get,
        bcmpkt_sflow_shim_1_t_flag_src_sample_get,
        bcmpkt_sflow_shim_1_t_flag_discarded_get,
        bcmpkt_sflow_shim_1_t_flag_flex_sample_get,
        bcmpkt_sflow_shim_1_t_flag_truncated_get,
        bcmpkt_sflow_shim_1_t_flag_dest_sample_get,
        bcmpkt_sflow_shim_1_t_flag_mcast_get,
    }
};

const bcmpkt_sflow_shim_1_t_fset_t bcm56780_a0_dna_2_4_13_sflow_shim_1_t_fset = {
    {
        bcmpkt_sflow_shim_1_t_reserved_set,
        bcmpkt_sflow_shim_1_t_sys_opcode_set,
        bcmpkt_sflow_shim_1_t_flag_src_sample_set,
        bcmpkt_sflow_shim_1_t_flag_discarded_set,
        bcmpkt_sflow_shim_1_t_flag_flex_sample_set,
        bcmpkt_sflow_shim_1_t_flag_truncated_set,
        bcmpkt_sflow_shim_1_t_flag_dest_sample_set,
        bcmpkt_sflow_shim_1_t_flag_mcast_set,
    }
};


const bcmpkt_sflow_shim_1_t_figet_t bcm56780_a0_dna_2_4_13_sflow_shim_1_t_figet = {
    {
        bcmpkt_sflow_shim_1_t_i_support_get
    }
};

static shr_enum_map_t bcm56780_a0_dna_2_4_13_sflow_shim_1_t_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm56780_a0_dna_2_4_13_sflow_shim_1_t_view_infos[BCMPKT_SFLOW_SHIM_1_T_FID_COUNT] = {
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
};

void bcm56780_a0_dna_2_4_13_sflow_shim_1_t_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm56780_a0_dna_2_4_13_sflow_shim_1_t_view_infos;
    info->view_types = bcm56780_a0_dna_2_4_13_sflow_shim_1_t_view_types;
    info->view_type_get = NULL;
}
