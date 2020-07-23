/** \file algo/swstate/auto_generated/access/algo_trunk_access.c
 *
 * sw state functions definitions
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

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <soc/dnxc/swstate/dnxc_sw_state_c_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_trunk_access.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_trunk_diagnostic.h>
/*
 * Global Variables
 */

/* dummy variable for gdb to know this type */
algo_trunk_sw_state_t* algo_trunk_db_dummy = NULL;
/*
 * FUNCTIONs
 */

/*
 *
 * is_init function for the variable algo_trunk_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_is_init(int unit, uint8 *is_init)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_IS_INIT,
        DNXC_SW_STATE_NO_FLAGS);

    *is_init = (NULL != ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]));
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_IS_INIT_LOGGING,
        BSL_LS_SWSTATEDNX_ISINIT,
        ALGO_TRUNK_MODULE_ID,
        ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]),
        "algo_trunk_db[%d]",
        unit);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * init function for the variable algo_trunk_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_init(int unit)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_INIT,
        DNXC_SW_STATE_NO_FLAGS);

    DNX_SW_STATE_MODULE_INIT(
        unit,
        ALGO_TRUNK_MODULE_ID,
        DNXC_SW_STATE_IMPLEMENTATION_WB,
        algo_trunk_sw_state_t,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION,
        "algo_trunk_db_init");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_INIT_LOGGING,
        BSL_LS_SWSTATEDNX_INIT,
        ALGO_TRUNK_MODULE_ID,
        ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]),
        "algo_trunk_db[%d]",
        unit);

    DNX_SW_STATE_DIAG_INFO_UPDATE(
        unit,
        ALGO_TRUNK_MODULE_ID,
        algo_trunk_db_info,
        ALGO_TRUNK_DB_INFO,
        DNX_SW_STATE_DIAG_ALLOC,
        sizeof(algo_trunk_sw_state_t),
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * set function for the variable egress_trunk
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_egress_trunk_set(int unit, dnx_algo_template_t egress_trunk)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_SET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TRUNK_MODULE_ID);

    DNX_SW_STATE_SET(
        unit,
        ALGO_TRUNK_MODULE_ID,
        ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        egress_trunk,
        dnx_algo_template_t,
        0,
        "algo_trunk_db_egress_trunk_set");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_SET_LOGGING,
        BSL_LS_SWSTATEDNX_SET,
        ALGO_TRUNK_MODULE_ID,
        &egress_trunk,
        "algo_trunk_db[%d]->egress_trunk",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        ALGO_TRUNK_MODULE_ID,
        algo_trunk_db_info,
        ALGO_TRUNK_DB_EGRESS_TRUNK_INFO,
        DNX_SW_STATE_DIAG_MODIFY,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get function for the variable egress_trunk
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_egress_trunk_get(int unit, dnx_algo_template_t *egress_trunk)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        ALGO_TRUNK_MODULE_ID,
        egress_trunk);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TRUNK_MODULE_ID);

    *egress_trunk = ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk;
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_GET_LOGGING,
        BSL_LS_SWSTATEDNX_GET,
        ALGO_TRUNK_MODULE_ID,
        &((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        "algo_trunk_db[%d]->egress_trunk",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        ALGO_TRUNK_MODULE_ID,
        algo_trunk_db_info,
        ALGO_TRUNK_DB_EGRESS_TRUNK_INFO,
        DNX_SW_STATE_DIAG_READ,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * create function for the variable egress_trunk
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_egress_trunk_create(int unit, dnx_algo_template_create_data_t * data, void *extra_arguments)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_CREATE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TRUNK_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_CREATE(
        ALGO_TRUNK_MODULE_ID,
        ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        data,
        extra_arguments,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_CREATE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRCREATE,
        ALGO_TRUNK_MODULE_ID,
        &((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        "algo_trunk_db[%d]->egress_trunk",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TRUNK_MODULE_ID,
        algo_trunk_db_info,
        ALGO_TRUNK_DB_EGRESS_TRUNK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * allocate_single function for the variable egress_trunk
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_egress_trunk_allocate_single(int unit, uint32 flags, bcm_trunk_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_ALLOCATE_SINGLE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TRUNK_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_ALLOCATE_SINGLE(
        ALGO_TRUNK_MODULE_ID,
        ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        flags,
        profile_data,
        extra_arguments,
        profile,
        first_reference);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_ALLOCATE_SINGLE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRALLOCATE_SINGLE,
        ALGO_TRUNK_MODULE_ID,
        &((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        "algo_trunk_db[%d]->egress_trunk",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TRUNK_MODULE_ID,
        algo_trunk_db_info,
        ALGO_TRUNK_DB_EGRESS_TRUNK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * free_single function for the variable egress_trunk
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_egress_trunk_free_single(int unit, int profile, uint8 *last_reference)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_FREE_SINGLE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TRUNK_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_FREE_SINGLE(
        ALGO_TRUNK_MODULE_ID,
        ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        profile,
        last_reference);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_FREE_SINGLE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRFREE_SINGLE,
        ALGO_TRUNK_MODULE_ID,
        &((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        "algo_trunk_db[%d]->egress_trunk",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TRUNK_MODULE_ID,
        algo_trunk_db_info,
        ALGO_TRUNK_DB_EGRESS_TRUNK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * exchange function for the variable egress_trunk
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_egress_trunk_exchange(int unit, uint32 flags, const bcm_trunk_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_EXCHANGE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TRUNK_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_EXCHANGE(
        ALGO_TRUNK_MODULE_ID,
        ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        flags,
        profile_data,
        old_profile,
        extra_arguments,
        new_profile,
        first_reference,
        last_reference);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_EXCHANGE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGREXCHANGE,
        ALGO_TRUNK_MODULE_ID,
        &((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        "algo_trunk_db[%d]->egress_trunk",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TRUNK_MODULE_ID,
        algo_trunk_db_info,
        ALGO_TRUNK_DB_EGRESS_TRUNK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * profile_data_get function for the variable egress_trunk
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_egress_trunk_profile_data_get(int unit, int profile, int *ref_count, bcm_trunk_t *profile_data)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_PROFILE_DATA_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TRUNK_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_PROFILE_DATA_GET(
        ALGO_TRUNK_MODULE_ID,
        ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        profile,
        ref_count,
        profile_data);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_PROFILE_DATA_GET_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRPROFILE_DATA_GET,
        ALGO_TRUNK_MODULE_ID,
        &((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        "algo_trunk_db[%d]->egress_trunk",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TRUNK_MODULE_ID,
        algo_trunk_db_info,
        ALGO_TRUNK_DB_EGRESS_TRUNK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * profile_get function for the variable egress_trunk
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_trunk_db_egress_trunk_profile_get(int unit, const bcm_trunk_t *profile_data, int *profile)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        SW_STATE_FUNC_PROFILE_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        ALGO_TRUNK_MODULE_ID,
        sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        ALGO_TRUNK_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_PROFILE_GET(
        ALGO_TRUNK_MODULE_ID,
        ((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        profile_data,
        profile);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_PROFILE_GET_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRPROFILE_GET,
        ALGO_TRUNK_MODULE_ID,
        &((algo_trunk_sw_state_t*)sw_state_roots_array[unit][ALGO_TRUNK_MODULE_ID])->egress_trunk,
        "algo_trunk_db[%d]->egress_trunk",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        ALGO_TRUNK_MODULE_ID,
        algo_trunk_db_info,
        ALGO_TRUNK_DB_EGRESS_TRUNK_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

algo_trunk_db_cbs algo_trunk_db = 	{
	
	algo_trunk_db_is_init,
	algo_trunk_db_init,
		{
		
		algo_trunk_db_egress_trunk_set,
		algo_trunk_db_egress_trunk_get,
		algo_trunk_db_egress_trunk_create,
		algo_trunk_db_egress_trunk_allocate_single,
		algo_trunk_db_egress_trunk_free_single,
		algo_trunk_db_egress_trunk_exchange,
		algo_trunk_db_egress_trunk_profile_data_get,
		algo_trunk_db_egress_trunk_profile_get}
	}
;
#undef BSL_LOG_MODULE
