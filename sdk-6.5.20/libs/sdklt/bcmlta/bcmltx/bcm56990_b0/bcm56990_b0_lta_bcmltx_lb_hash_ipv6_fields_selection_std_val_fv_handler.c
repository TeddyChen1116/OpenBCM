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
/* Handler: bcm56990_b0_lta_bcmltx_lb_hash_ipv6_fields_selection_std_val_fv_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmdrd/chip/bcm56990_b0_enum.h>
#include <bcmltx/bcmltx_std_table_validator.h>

static const uint32_t
bcm56990_b0_lta_bcmltx_lb_hash_ipv6_fields_selection_std_val_validate_src[4] = {
    LB_HASH_IPV6_FIELDS_SELECTIONt_HASH0u_DST_PORTf,
    LB_HASH_IPV6_FIELDS_SELECTIONt_HASH1u_DST_PORTf,
    LB_HASH_IPV6_FIELDS_SELECTIONt_HASH0u_DST_MODIDf,
    LB_HASH_IPV6_FIELDS_SELECTIONt_HASH1u_DST_MODIDf,
};

static const bcmltd_generic_arg_t
bcm56990_b0_lta_bcmltx_lb_hash_ipv6_fields_selection_std_val_comp_data = {
    .sid       = LB_HASH_IPV6_FIELDS_SELECTIONt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

const bcmltd_field_val_arg_t
bcm56990_b0_lta_bcmltx_lb_hash_ipv6_fields_selection_std_val_fv_handler_arg = {
    .values = 0,
    .value = NULL,
    .fields = 4,
    .field = bcm56990_b0_lta_bcmltx_lb_hash_ipv6_fields_selection_std_val_validate_src,
    .comp_data = &bcm56990_b0_lta_bcmltx_lb_hash_ipv6_fields_selection_std_val_comp_data
};

const bcmltd_field_val_handler_t
bcm56990_b0_lta_bcmltx_lb_hash_ipv6_fields_selection_std_val_fv_handler = {
    .validate = bcmltx_std_table_validator,
    .arg      = &bcm56990_b0_lta_bcmltx_lb_hash_ipv6_fields_selection_std_val_fv_handler_arg
};


