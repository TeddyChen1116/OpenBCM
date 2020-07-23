/*************************************************************************************
 *                                                                                   *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/*******************************************************************************************
 *******************************************************************************************
 *  File Name     :  merlin7_tx_analog_functions.h                                         *
 *  Created On    :  04/20/2015                                                            *
 *  Created By    :  Kiran Divakar                                                         *
 *  Description   :  Functions to Configure Merlin7 TXFIR                                  *
 */

/** @file merlin7_tx_analog_functions.h
 * Functions to configure Merlin16 TX
 */

#ifndef MERLIN7_TX_ANALOG_FUNCTIONS_H
#define MERLIN7_TX_ANALOG_FUNCTIONS_H

#ifdef INCLUDE_STD_HEADERS
#include <stdint.h>
#endif

#include "merlin7_tsc_dependencies.h"

/* Structs required for M16 TXFIR AFE slicer controls */

/** Post2 Slicer Register Field Struct */
struct p2sr_regfield_st {
  uint16_t post2_1x_0         ;
  uint16_t dc_level_post2_1x_0;
  uint16_t post2_1x_1         ;
  uint16_t dc_level_post2_1x_1;
  uint16_t post2_2x_0         ;
  uint16_t dc_level_post2_2x_0;
  uint16_t post2_2x_1         ;
  uint16_t dc_level_post2_2x_1;
  uint16_t reserved0          ;
};

/** Post1 Slicer Register Field Struct */
struct p1sr_regfield_st {
  uint16_t post1_1x_0            ;
  uint16_t dc_level_post1_1x_0   ;
  uint16_t post1_1x_1            ;
  uint16_t dc_level_post1_1x_1   ;
  uint16_t post1_2x_0            ;
  uint16_t dc_level_post1_2x_0   ;
  uint16_t post1_2x_1            ;
  uint16_t dc_level_post1_2x_1   ;
  uint16_t post1_2x_2            ;
  uint16_t dc_level_post1_2x_2   ;
  uint16_t reserved0             ;
  uint16_t pre_post1pre_1x_0     ;
  uint16_t post1_post1pre_1x_0   ;
  uint16_t dc_level_post1pre_1x_0;
  uint16_t reserved1             ;
};

/** Post1Pre Slicer Register Field Struct */
struct presr_regfield_st {
  uint16_t pre_post1pre_1x_1     ;
  uint16_t post1_post1pre_1x_1   ;
  uint16_t dc_level_post1pre_1x_1;
  uint16_t pre_post1pre_2x_0     ;
  uint16_t post1_post1pre_2x_0   ;
  uint16_t dc_level_post1pre_2x_0;
  uint16_t pre_post1pre_2x_1     ;
  uint16_t post1_post1pre_2x_1   ;
  uint16_t dc_level_post1pre_2x_1;
  uint16_t pre_post1pre_2x_2     ;
  uint16_t post1_post1pre_2x_2   ;
  uint16_t dc_level_post1pre_2x_2;
  uint16_t pre_post1pre_2x_3     ;
  uint16_t post1_post1pre_2x_3   ;
  uint16_t dc_level_post1pre_2x_3;
  uint16_t reserved0             ;
};

/** Main Slicer Register Field Struct */
struct mssr_regfield_st {
  uint16_t dc_level_0p5x     ;
  uint16_t dc_level_main_1x  ;
  uint16_t dc_level_main_2x_0;
  uint16_t dc_level_main_2x_1;
  uint16_t reserved0         ;
};

/** Post2 Slicer Register Struct */
struct  p2sr_reg_st {
  struct p2sr_regfield_st field;
  uint16_t word;
};

/** Post1 Slicer Register Struct */
struct  p1sr_reg_st {
  struct p1sr_regfield_st field;
  uint16_t word;
};

/** Post1Pre Slicer Register Struct */
struct  presr_reg_st {
  struct presr_regfield_st field;
  uint16_t word;
};

/** Main Slicer Register Struct */
struct  mssr_reg_st {
  struct mssr_regfield_st field;
  uint16_t word;
};

/** Converts the input TXFIR tap values to the required analog tap slicer settings
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param pre      TXFIR pre   tap value (0..10)  in 1/60 Vpp
 * @param main     TXFIR main  tap value (1..60)  in 1/60 Vpp
 * @param post1    TXFIR post1 tap value (0..24)  in 1/60 Vpp
 * @param post2    TXFIR post2 tap value (0..6)   in 1/60 Vpp
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
static err_code_t _txfir_tap_mapping(srds_access_t *sa__, int8_t pre, int8_t main, int8_t post1, int8_t post2);

/* Update Merlin16 TXFIR Slicer Structs */
static err_code_t _update_p1sr_reg_word(struct p1sr_reg_st *st);
static err_code_t _update_p2sr_reg_word(struct p2sr_reg_st *st);
static err_code_t _update_mssr_reg_word(struct mssr_reg_st *st);
static err_code_t _update_presr_reg_word(struct presr_reg_st *st);

/** Write to Analog Slicer Control Registers */ 
static err_code_t _write_txfir_slicer_controls(srds_access_t *sa__,
                                               struct p1sr_reg_st p1_st, struct p2sr_reg_st p2_st,
                                               struct mssr_reg_st ms_st, struct presr_reg_st pre_st);
#endif
