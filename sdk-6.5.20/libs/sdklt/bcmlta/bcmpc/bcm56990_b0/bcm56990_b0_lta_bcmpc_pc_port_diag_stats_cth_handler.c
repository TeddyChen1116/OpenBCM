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
/* Logical Table Adaptor for component bcmpc */
/* Handler: bcm56990_b0_lta_bcmpc_pc_port_diag_stats_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmpc/bcmpc_lth_port_diag_stats.h>



const bcmltd_generic_arg_t
bcm56990_b0_lta_bcmpc_pc_port_diag_stats_cth_handler_arg = {
    .sid = PC_PORT_DIAG_STATSt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

const bcmltd_table_handler_t
bcm56990_b0_lta_bcmpc_pc_port_diag_stats_cth_handler = {
    .validate = bcmpc_lth_port_diag_stats_validate,
    .op_insert       = bcmpc_lth_port_diag_stats_insert,
    .op_lookup       = bcmpc_lth_port_diag_stats_lookup,
    .op_delete       = bcmpc_lth_port_diag_stats_delete,
    .op_update       = bcmpc_lth_port_diag_stats_update,
    .op_first        = bcmpc_lth_port_diag_stats_first,
    .op_next         = bcmpc_lth_port_diag_stats_next,
    .ha       = NULL,
    .arg      = &bcm56990_b0_lta_bcmpc_pc_port_diag_stats_cth_handler_arg
};

