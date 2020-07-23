/*************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/issu_db_gen.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcmissu/issu_types.h>
#include "bcmcfg_feature_ctl_ha_config.h"

static const issu_field_t bcmissu_fields_bcmcfg_feature_ctl_ha_config_t[] = {
    {
        .fid = 0xe3ba6b21,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcfg_feature_ctl_ha_config_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcfg_feature_ctl_ha_config_t var;

    switch (field_id) {
        case 0xe3ba6b21:
            return ((uint8_t *)&var.enable_atomic_trans) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmcfg_feature_ctl_ha_config_bcmcfg_feature_ctl_ha_config_t_v1_3 = {
    .offset_get_func = bcmcfg_feature_ctl_ha_config_t_field_offset_get,
    .generic_size = sizeof(bcmcfg_feature_ctl_ha_config_t),
    .field_count = 1,
    .fields = bcmissu_fields_bcmcfg_feature_ctl_ha_config_t,
};
