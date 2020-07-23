/** \file algo/swstate/auto_generated/types/algo_stat_pp_types.h
 *
 * sw state types (structs/enums/typedefs)
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __ALGO_STAT_PP_TYPES_H__
#define __ALGO_STAT_PP_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
/*
 * STRUCTs
 */

/**
 * Stat PP related sw state
 */
typedef struct {
    /**
     * STAT_PP_IRPP_PROFILE_ID
     */
    dnx_algo_res_t stat_pp_irpp_profile_id;
    /**
     * STAT_PP_ETPP_PROFILE_ID
     */
    dnx_algo_res_t stat_pp_etpp_profile_id;
    /**
     * STAT_PP_ETPP_COUNTING_PROFILE_ID
     */
    dnx_algo_res_t stat_pp_etpp_counting_profile_id;
    /**
     * STAT_PP_ETPP_METERING_PROFILE_ID
     */
    dnx_algo_res_t stat_pp_etpp_metering_profile_id;
    /**
     * STAT_PP_ERPP_PROFILE_ID
     */
    dnx_algo_res_t stat_pp_erpp_profile_id;
} algo_stat_pp_sw_state_t;


#endif /* __ALGO_STAT_PP_TYPES_H__ */
