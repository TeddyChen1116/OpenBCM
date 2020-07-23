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
#include "bcmptm_rm_tcam_prio_only_ha.h"

static const issu_field_t bcmissu_fields_bcmptm_rm_tcam_hw_field_list_t[] = {
    {
        .fid = 0xb9f19760,
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
        .fid = 0x191d3aa4,
        .width = sizeof(uint16_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = BCMPTM_RM_TCAM_MAX_FIELDS_PER_ENTRY,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x71c4de68,
        .width = sizeof(uint16_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = BCMPTM_RM_TCAM_MAX_FIELDS_PER_ENTRY,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmptm_rm_tcam_hw_field_list_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_rm_tcam_hw_field_list_t var;

    switch (field_id) {
        case 0xb9f19760:
            return ((uint8_t *)&var.num_fields) - (uint8_t *)&var;
        case 0x191d3aa4:
            return ((uint8_t *)&var.field_width) - (uint8_t *)&var;
        case 0x71c4de68:
            return ((uint8_t *)&var.field_start_bit) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_rm_tcam_prio_only_ha_bcmptm_rm_tcam_hw_field_list_t_v1_4 = {
    .offset_get_func = bcmptm_rm_tcam_hw_field_list_t_field_offset_get,
    .generic_size = sizeof(bcmptm_rm_tcam_hw_field_list_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmptm_rm_tcam_hw_field_list_t,
};

static const issu_field_t bcmissu_fields_bcmptm_rm_tcam_prio_only_info_t[] = {
    {
        .fid = 0xb4744c9d,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_LTID,
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
        .fid = 0x9f8b970b,
        .width = sizeof(uint16_t),
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
        .fid = 0x8afadbeb,
        .width = sizeof(uint16_t),
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
        .fid = 0x73092456,
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
        .fid = 0xba4de536,
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
        .fid = 0x67f6cc63,
        .width = sizeof(bcmptm_rm_tcam_hw_field_list_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = BCMPTM_RM_TCAM_MAX_ENTRIES_PER_INDEX,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = 0x722464c34797018c,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x9fa1251f,
        .width = sizeof(int32_t),
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
        .fid = 0x99434a55,
        .width = sizeof(int32_t),
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
        .fid = 0xd6fbfb62,
        .width = sizeof(int8_t),
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
        .fid = 0x0113dd6e,
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
        .fid = 0x09d90435,
        .width = sizeof(uint16_t),
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
        .fid = 0xfe7876ad,
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
        .fid = 0x3840cace,
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
        .fid = 0xe701368a,
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
        .fid = 0x05b3dd89,
        .width = sizeof(uint16_t),
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
        .fid = 0xb9c42685,
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
        .fid = 0xff8d9614,
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
};

static uint32_t bcmptm_rm_tcam_prio_only_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_rm_tcam_prio_only_info_t var;

    switch (field_id) {
        case 0xb4744c9d:
            return ((uint8_t *)&var.ltid) - (uint8_t *)&var;
        case 0x4e5868d6:
            return ((uint8_t *)&var.flags) - (uint8_t *)&var;
        case 0x9f8b970b:
            return ((uint8_t *)&var.num_entries) - (uint8_t *)&var;
        case 0x8afadbeb:
            return ((uint8_t *)&var.num_entries_ltid) - (uint8_t *)&var;
        case 0x73092456:
            return ((uint8_t *)&var.num_lookups) - (uint8_t *)&var;
        case 0xba4de536:
            return ((uint8_t *)&var.num_entries_per_index) - (uint8_t *)&var;
        case 0x67f6cc63:
            return ((uint8_t *)&var.hw_field_list) - (uint8_t *)&var;
        case 0x9fa1251f:
            return ((uint8_t *)&var.reserved_entry_index1) - (uint8_t *)&var;
        case 0x99434a55:
            return ((uint8_t *)&var.reserved_entry_index2) - (uint8_t *)&var;
        case 0xd6fbfb62:
            return ((uint8_t *)&var.res_ent_key_type_val) - (uint8_t *)&var;
        case 0x0113dd6e:
            return ((uint8_t *)&var.num_lt_sharing) - (uint8_t *)&var;
        case 0x09d90435:
            return ((uint8_t *)&var.shr_info_count) - (uint8_t *)&var;
        case 0xfe7876ad:
            return ((uint8_t *)&var.shr_info_offset) - (uint8_t *)&var;
        case 0x3840cace:
            return ((uint8_t *)&var.entry_info_offset) - (uint8_t *)&var;
        case 0xe701368a:
            return ((uint8_t *)&var.entry_info_seg_size) - (uint8_t *)&var;
        case 0x05b3dd89:
            return ((uint8_t *)&var.entry_hash_size) - (uint8_t *)&var;
        case 0xb9c42685:
            return ((uint8_t *)&var.entry_hash_offset) - (uint8_t *)&var;
        case 0xff8d9614:
            return ((uint8_t *)&var.entry_hash_seg_size) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_rm_tcam_prio_only_ha_bcmptm_rm_tcam_prio_only_info_t_v1_4 = {
    .offset_get_func = bcmptm_rm_tcam_prio_only_info_t_field_offset_get,
    .generic_size = sizeof(bcmptm_rm_tcam_prio_only_info_t),
    .field_count = 18,
    .fields = bcmissu_fields_bcmptm_rm_tcam_prio_only_info_t,
};

static const issu_field_t bcmissu_fields_bcmptm_rm_tcam_prio_only_entry_info_t[] = {
    {
        .fid = 0x8e4ca966,
        .width = sizeof(int),
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
        .fid = 0xcff25b3f,
        .width = sizeof(int8_t),
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
        .fid = 0x7a86c157,
        .width = sizeof(int32_t),
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

static uint32_t bcmptm_rm_tcam_prio_only_entry_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_rm_tcam_prio_only_entry_info_t var;

    switch (field_id) {
        case 0x8e4ca966:
            return ((uint8_t *)&var.entry_pri) - (uint8_t *)&var;
        case 0xcff25b3f:
            return ((uint8_t *)&var.entry_type) - (uint8_t *)&var;
        case 0x7a86c157:
            return ((uint8_t *)&var.offset) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_rm_tcam_prio_only_ha_bcmptm_rm_tcam_prio_only_entry_info_t_v1_4 = {
    .offset_get_func = bcmptm_rm_tcam_prio_only_entry_info_t_field_offset_get,
    .generic_size = sizeof(bcmptm_rm_tcam_prio_only_entry_info_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmptm_rm_tcam_prio_only_entry_info_t,
};

static const issu_field_t bcmissu_fields_bcmptm_rm_tcam_prio_only_shr_info_t[] = {
    {
        .fid = 0x704b6e89,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_LTID,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xe64eca97,
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
        .fid = 0x7ffa4994,
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
        .fid = 0x7715a56b,
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
        .fid = 0x9d629eb0,
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
        .fid = 0x9a75a3a9,
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
};

static uint32_t bcmptm_rm_tcam_prio_only_shr_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_rm_tcam_prio_only_shr_info_t var;

    switch (field_id) {
        case 0x704b6e89:
            return ((uint8_t *)&var.shr_ltid) - (uint8_t *)&var;
        case 0xe64eca97:
            return ((uint8_t *)&var.start_index) - (uint8_t *)&var;
        case 0x7ffa4994:
            return ((uint8_t *)&var.end_index) - (uint8_t *)&var;
        case 0x7715a56b:
            return ((uint8_t *)&var.shr_start_index) - (uint8_t *)&var;
        case 0x9d629eb0:
            return ((uint8_t *)&var.shr_end_index) - (uint8_t *)&var;
        case 0x9a75a3a9:
            return ((uint8_t *)&var.shr_flags) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_rm_tcam_prio_only_ha_bcmptm_rm_tcam_prio_only_shr_info_t_v1_4 = {
    .offset_get_func = bcmptm_rm_tcam_prio_only_shr_info_t_field_offset_get,
    .generic_size = sizeof(bcmptm_rm_tcam_prio_only_shr_info_t),
    .field_count = 6,
    .fields = bcmissu_fields_bcmptm_rm_tcam_prio_only_shr_info_t,
};
