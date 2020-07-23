/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml
 * for device bcm56780_a0 and variant ina_2_4_13.
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
#include <bcmpkt/flexhdr/bcmpkt_psamp_mirror_on_drop_1_t.h>
#include <bcmpkt/flexhdr/bcmpkt_psamp_mirror_on_drop_1_t_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))

static uint32_t bcmpkt_psamp_mirror_on_drop_1_t_user_meta_data_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 0, 16);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_USER_META_DATA with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_psamp_mirror_on_drop_1_t_user_meta_data_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_USER_META_DATA with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 0, 16, val);
}

static uint32_t bcmpkt_psamp_mirror_on_drop_1_t_sampled_length_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 0, 16);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_SAMPLED_LENGTH with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_psamp_mirror_on_drop_1_t_sampled_length_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_SAMPLED_LENGTH with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    WORD_FIELD_SET(data[1], 0, 16, val);
}

static uint32_t bcmpkt_psamp_mirror_on_drop_1_t_var_len_indicator_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 16, 8);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_VAR_LEN_INDICATOR with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_psamp_mirror_on_drop_1_t_var_len_indicator_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_VAR_LEN_INDICATOR with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    WORD_FIELD_SET(data[1], 16, 8, val);
}

static uint32_t bcmpkt_psamp_mirror_on_drop_1_t_mirror_on_drop_obj_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 24, 8);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_MIRROR_ON_DROP_OBJ with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_psamp_mirror_on_drop_1_t_mirror_on_drop_obj_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_MIRROR_ON_DROP_OBJ with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    WORD_FIELD_SET(data[1], 24, 8, val);
}

static uint32_t bcmpkt_psamp_mirror_on_drop_1_t_mmu_drop_ctrl_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 16, 8);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_MMU_DROP_CTRL with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_psamp_mirror_on_drop_1_t_mmu_drop_ctrl_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_MMU_DROP_CTRL with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 16, 8, val);
}

static uint32_t bcmpkt_psamp_mirror_on_drop_1_t_ing_drop_reason_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 24, 8);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_ING_DROP_REASON with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_psamp_mirror_on_drop_1_t_ing_drop_reason_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_ING_DROP_REASON with value %u on device BCM56780_A0_INA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 24, 8, val);
}

static uint32_t bcmpkt_psamp_mirror_on_drop_1_t_i_support_get(uint32_t *data, uint32_t **addr) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_I_SUPPORT on device BCM56780_A0_INA_2_4_13\n")));
    return true;
}

const bcmpkt_psamp_mirror_on_drop_1_t_fget_t bcm56780_a0_ina_2_4_13_psamp_mirror_on_drop_1_t_fget = {
    {
        bcmpkt_psamp_mirror_on_drop_1_t_user_meta_data_get,
        bcmpkt_psamp_mirror_on_drop_1_t_sampled_length_get,
        bcmpkt_psamp_mirror_on_drop_1_t_var_len_indicator_get,
        bcmpkt_psamp_mirror_on_drop_1_t_mirror_on_drop_obj_get,
        bcmpkt_psamp_mirror_on_drop_1_t_mmu_drop_ctrl_get,
        bcmpkt_psamp_mirror_on_drop_1_t_ing_drop_reason_get,
    }
};

const bcmpkt_psamp_mirror_on_drop_1_t_fset_t bcm56780_a0_ina_2_4_13_psamp_mirror_on_drop_1_t_fset = {
    {
        bcmpkt_psamp_mirror_on_drop_1_t_user_meta_data_set,
        bcmpkt_psamp_mirror_on_drop_1_t_sampled_length_set,
        bcmpkt_psamp_mirror_on_drop_1_t_var_len_indicator_set,
        bcmpkt_psamp_mirror_on_drop_1_t_mirror_on_drop_obj_set,
        bcmpkt_psamp_mirror_on_drop_1_t_mmu_drop_ctrl_set,
        bcmpkt_psamp_mirror_on_drop_1_t_ing_drop_reason_set,
    }
};


const bcmpkt_psamp_mirror_on_drop_1_t_figet_t bcm56780_a0_ina_2_4_13_psamp_mirror_on_drop_1_t_figet = {
    {
        bcmpkt_psamp_mirror_on_drop_1_t_i_support_get
    }
};

static shr_enum_map_t bcm56780_a0_ina_2_4_13_psamp_mirror_on_drop_1_t_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm56780_a0_ina_2_4_13_psamp_mirror_on_drop_1_t_view_infos[BCMPKT_PSAMP_MIRROR_ON_DROP_1_T_FID_COUNT] = {
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
};

void bcm56780_a0_ina_2_4_13_psamp_mirror_on_drop_1_t_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm56780_a0_ina_2_4_13_psamp_mirror_on_drop_1_t_view_infos;
    info->view_types = bcm56780_a0_ina_2_4_13_psamp_mirror_on_drop_1_t_view_types;
    info->view_type_get = NULL;
}
