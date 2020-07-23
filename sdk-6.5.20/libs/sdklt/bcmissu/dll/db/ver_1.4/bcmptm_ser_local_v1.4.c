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
#include "bcmptm_ser_local.h"

static const issu_field_t bcmissu_fields_bcmptm_ser_sinfo_t[] = {
    {
        .fid = 0x4b10691f,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xf99e9489,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xd6edb9df,
        .width = sizeof(bool),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmptm_ser_sinfo_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_ser_sinfo_t var;

    switch (field_id) {
        case 0x4b10691f:
            return ((uint8_t *)&var.ser_range_enable) - (uint8_t *)&var;
        case 0xf99e9489:
            return ((uint8_t *)&var.ser_range_in_usage) - (uint8_t *)&var;
        case 0xd6edb9df:
            return ((uint8_t *)&var.ser_log_overlaid) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_ser_local_bcmptm_ser_sinfo_t_v1_4 = {
    .offset_get_func = bcmptm_ser_sinfo_t_field_offset_get,
    .generic_size = sizeof(bcmptm_ser_sinfo_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmptm_ser_sinfo_t,
};

static const issu_field_t bcmissu_fields_bcmptm_ser_entry_view_bitmap_t[] = {
    {
        .fid = 0xf6987784,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = DEPTH_WIDE_ENTRY_BITMAP,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmptm_ser_entry_view_bitmap_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_ser_entry_view_bitmap_t var;

    switch (field_id) {
        case 0xf6987784:
            return ((uint8_t *)&var.entry_view_bitmap) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_ser_local_bcmptm_ser_entry_view_bitmap_t_v1_4 = {
    .offset_get_func = bcmptm_ser_entry_view_bitmap_t_field_offset_get,
    .generic_size = sizeof(bcmptm_ser_entry_view_bitmap_t),
    .field_count = 1,
    .fields = bcmissu_fields_bcmptm_ser_entry_view_bitmap_t,
};

const issu_enum_symbol_t bcmissu_enum_bcmptm_ser_local_bcmptm_ser_mode_index_t_v1_4[3] = {
    {"BCMPTM_SER_NARROW_INDEX", 0},
    {"BCMPTM_SER_WIDE_INDEX", 1},
    {NULL, 0}
};

static const issu_field_t bcmissu_fields_bcmptm_ser_slice_mode_t[] = {
    {
        .fid = 0x66fbe41b,
        .width = sizeof(uint16_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = BCMPTM_SER_SLICE_MODE_NUM,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xc148dbc9,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmptm_ser_slice_mode_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_ser_slice_mode_t var;

    switch (field_id) {
        case 0x66fbe41b:
            return ((uint8_t *)&var.slice_depth) - (uint8_t *)&var;
        case 0xc148dbc9:
            return ((uint8_t *)&var.slice_mode) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_ser_local_bcmptm_ser_slice_mode_t_v1_4 = {
    .offset_get_func = bcmptm_ser_slice_mode_t_field_offset_get,
    .generic_size = sizeof(bcmptm_ser_slice_mode_t),
    .field_count = 2,
    .fields = bcmissu_fields_bcmptm_ser_slice_mode_t,
};

static const issu_field_t bcmissu_fields_bcmptm_ser_slices_info_t[] = {
    {
        .fid = 0x1bc773e1,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = BCMPTM_SER_SLICE_MODE_NUM,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xb1774dad,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x4e5868d6,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x018cec05,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x2e262e8b,
        .width = sizeof(bcmptm_ser_slice_mode_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = BCMPTM_SER_MAX_SLICE_NUM,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = 0x2b3d8da417fc3090,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmptm_ser_slices_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_ser_slices_info_t var;

    switch (field_id) {
        case 0x1bc773e1:
            return ((uint8_t *)&var.sid_array) - (uint8_t *)&var;
        case 0xb1774dad:
            return ((uint8_t *)&var.sid_num) - (uint8_t *)&var;
        case 0x4e5868d6:
            return ((uint8_t *)&var.flags) - (uint8_t *)&var;
        case 0x018cec05:
            return ((uint8_t *)&var.slice_num) - (uint8_t *)&var;
        case 0x2e262e8b:
            return ((uint8_t *)&var.slice_mode_array) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_ser_local_bcmptm_ser_slices_info_t_v1_4 = {
    .offset_get_func = bcmptm_ser_slices_info_t_field_offset_get,
    .generic_size = sizeof(bcmptm_ser_slices_info_t),
    .field_count = 5,
    .fields = bcmissu_fields_bcmptm_ser_slices_info_t,
};
