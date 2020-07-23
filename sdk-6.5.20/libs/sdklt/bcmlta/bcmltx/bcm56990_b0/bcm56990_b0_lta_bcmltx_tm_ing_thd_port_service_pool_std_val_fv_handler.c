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
/* Handler: bcm56990_b0_lta_bcmltx_tm_ing_thd_port_service_pool_std_val_fv_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmdrd/chip/bcm56990_b0_enum.h>
#include <bcmltx/bcmltx_std_table_validator.h>

static const uint32_t
bcm56990_b0_lta_bcmltx_tm_ing_thd_port_service_pool_std_val_validate_src[3] = {
    TM_ING_THD_PORT_SERVICE_POOLt_MIN_GUARANTEE_CELLS_OPERf,
    TM_ING_THD_PORT_SERVICE_POOLt_RESUME_LIMIT_CELLS_OPERf,
    TM_ING_THD_PORT_SERVICE_POOLt_OPERATIONAL_STATEf,
};

static const bcmltd_generic_arg_t
bcm56990_b0_lta_bcmltx_tm_ing_thd_port_service_pool_std_val_comp_data = {
    .sid       = TM_ING_THD_PORT_SERVICE_POOLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

const bcmltd_field_val_arg_t
bcm56990_b0_lta_bcmltx_tm_ing_thd_port_service_pool_std_val_fv_handler_arg = {
    .values = 0,
    .value = NULL,
    .fields = 3,
    .field = bcm56990_b0_lta_bcmltx_tm_ing_thd_port_service_pool_std_val_validate_src,
    .comp_data = &bcm56990_b0_lta_bcmltx_tm_ing_thd_port_service_pool_std_val_comp_data
};

const bcmltd_field_val_handler_t
bcm56990_b0_lta_bcmltx_tm_ing_thd_port_service_pool_std_val_fv_handler = {
    .validate = bcmltx_std_table_validator,
    .arg      = &bcm56990_b0_lta_bcmltx_tm_ing_thd_port_service_pool_std_val_fv_handler_arg
};


