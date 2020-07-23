/*------------------------------------------------------------------------------
 * 
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *  Broadcom Corporation
 *  Proprietary and Confidential information
 *  All rights reserved
 *  This source file is the property of Broadcom Corporation, and
 *  may not be copied or distributed in any isomorphic form without the
 *  prior written consent of Broadcom Corporation.
 *------------------------------------------------------------------------------
 *  Description: Structures and function prototypes for Speed Table, AM Table,
 *               and UM Table access.
 *----------------------------------------------------------------------------*/
#ifndef _TSCOMOD_DPLL_SPD_CTRL_H_
#define _TSCOMOD_DPLL_SPD_CTRL_H_

#include <phymod/phymod.h>
#include "tscomod_dpll_spd_ctrl_defines.h"

typedef struct {
    uint8_t  am_table_index;
    uint8_t  fec_arch;
    uint8_t  symbol_interleave;
    uint8_t  tc_xor_control;
    uint8_t  rs_fec_sync_header_mode;
    uint8_t  rs_fec_cwm_nibble_match_count;
    uint8_t  rs_fec_symbol_error_window_mode;
    uint16_t rs_fec_symbol_error_count_threshold;
    uint8_t  deskew_forwarding_threshold_2xn;
    uint8_t  deskew_forwarding_threshold_1xn;
    uint8_t  bit_mux_mode;
    uint8_t  num_lanes;
    uint8_t  deskew_window_without_rs_fec;
    uint8_t  deskew_window_with_rs_fec;
    uint8_t  ber_fsm_disable_with_rs_fec;
    uint8_t  ber_fsm_disable_without_rs_fec;
    uint8_t  ber_window_mode;
    uint8_t  ber_trigger_count;
    uint8_t  credit_quotient;
    uint16_t credit_remainder;
    uint16_t credit_divisor;
    uint8_t  use_cl49_block_sync;
    uint8_t  scr_mode;
    uint8_t  codec_mode;
    uint8_t  training_en;
    uint8_t  an_timer_select;
    uint8_t  t_pma_watermark;
    uint8_t  l_tpma_watermark;
    uint8_t  loop_block_count_for_ts;
    uint16_t loop_bit_count_for_ts;
    uint8_t  am_lock_fsm_mode;
    uint8_t  t_pma_start_mode;
    uint8_t  hi_ser_enable;
    uint8_t  t_pma_input_width_mode;
    uint8_t  t_pma_output_width_mode;
    uint8_t  bit_mux_mode_modifier;
    uint8_t  num_lanes_modifier;
    uint8_t  mapping_select;
    uint8_t  version;
    uint8_t  hi_ser_2;
} tscomod_dpll_spd_id_tbl_entry_t;

/* Function Prototypes */
extern void tscomod_dpll_spd_ctrl_unpack_spd_id_tbl_entry(uint32_t *packed_entry, tscomod_dpll_spd_id_tbl_entry_t *entry);
extern void tscomod_dpll_spd_ctrl_pack_spd_id_tbl_entry(tscomod_dpll_spd_id_tbl_entry_t *entry, uint32_t *packed_entry);


#endif  /* TSCOMOD_DPLL_SPD_CTRL_H_ */
