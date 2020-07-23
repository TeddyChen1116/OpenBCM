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
/* Handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_ing_ipmc_remap_table_index_tile_mode_table_entry_limit_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/general/bcmltx_index_tile_mode_table_entry_limit.h>

static const bcmltd_generic_arg_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_ing_ipmc_remap_table_index_tile_mode_comp_data = {
    .sid       = BCM56880_A0_DNA_4_6_6_ING_IPMC_REMAP_TABLEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

const bcmltd_table_entry_limit_handler_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_ing_ipmc_remap_table_index_tile_mode_table_entry_limit_handler = {
    .entry_limit_get = bcmltx_index_tile_mode_table_entry_limit_get,
    .arg     = &bcm56880_a0_dna_4_6_6_lta_bcmltx_ing_ipmc_remap_table_index_tile_mode_comp_data
};


