/** \file algo/swstate/auto_generated/diagnostic/cosq_latency_diagnostic.c
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
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/cosq_latency_diagnostic.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
/*
 * Global Variables
 */

extern dnx_cosq_latency_db_t * dnx_cosq_latency_db_data[SOC_MAX_NUM_DEVICES];
/*
 * FUNCTIONs
 */

/*
 *
 * dump function for the variable dnx_cosq_latency_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_cosq_latency_db_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(dnx_cosq_latency_db_ingress_latency_res_dump(unit, filters));
    SHR_IF_ERR_EXIT(dnx_cosq_latency_db_end_to_end_latency_res_dump(unit, filters));
    SHR_IF_ERR_EXIT(dnx_cosq_latency_db_end_to_end_aqm_latency_res_dump(unit, filters));
    SHR_IF_ERR_EXIT(dnx_cosq_latency_db_queue_template_dump(unit, filters));
    SHR_IF_ERR_EXIT(dnx_cosq_latency_db_probability_convert_dump(unit, filters));
    SHR_IF_ERR_EXIT(dnx_cosq_latency_db_aqm_flow_id_res_dump(unit, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable ingress_latency_res
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_cosq_latency_db_ingress_latency_res_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "cosq_latency ingress_latency_res") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate cosq_latency ingress_latency_res\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_cosq_latency_db/ingress_latency_res.txt",
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","ingress_latency_res: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","ingress_latency_res: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            COSQ_LATENCY_MODULE_ID,
            &((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID])->ingress_latency_res);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable end_to_end_latency_res
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_cosq_latency_db_end_to_end_latency_res_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "cosq_latency end_to_end_latency_res") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate cosq_latency end_to_end_latency_res\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_cosq_latency_db/end_to_end_latency_res.txt",
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","end_to_end_latency_res: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","end_to_end_latency_res: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            COSQ_LATENCY_MODULE_ID,
            &((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID])->end_to_end_latency_res);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable end_to_end_aqm_latency_res
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_cosq_latency_db_end_to_end_aqm_latency_res_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "cosq_latency end_to_end_aqm_latency_res") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate cosq_latency end_to_end_aqm_latency_res\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_cosq_latency_db/end_to_end_aqm_latency_res.txt",
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","end_to_end_aqm_latency_res: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","end_to_end_aqm_latency_res: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            COSQ_LATENCY_MODULE_ID,
            &((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID])->end_to_end_aqm_latency_res);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable queue_template
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_cosq_latency_db_queue_template_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "cosq_latency queue_template") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate cosq_latency queue_template\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_cosq_latency_db/queue_template.txt",
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","queue_template: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","queue_template: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            COSQ_LATENCY_MODULE_ID,
            &((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID])->queue_template,
            dnx_cosq_latency_queue_template_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable probability_convert
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_cosq_latency_db_probability_convert_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(dnx_cosq_latency_db_probability_convert_exponent_b_dump(unit, filters));
    SHR_IF_ERR_EXIT(dnx_cosq_latency_db_probability_convert_coefficient_a_dump(unit, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable exponent_b
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_cosq_latency_db_probability_convert_exponent_b_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "uint32") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "cosq_latency probability_convert exponent_b") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate cosq_latency probability_convert exponent_b\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_cosq_latency_db/probability_convert/exponent_b.txt",
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","probability_convert.exponent_b: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","probability_convert.exponent_b: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        dnx_sw_state_print_uint32(
            unit,
            &((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID])->probability_convert.exponent_b);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable coefficient_a
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_cosq_latency_db_probability_convert_coefficient_a_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "uint32") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "cosq_latency probability_convert coefficient_a") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate cosq_latency probability_convert coefficient_a\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_cosq_latency_db/probability_convert/coefficient_a.txt",
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","probability_convert.coefficient_a: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","probability_convert.coefficient_a: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        dnx_sw_state_print_uint32(
            unit,
            &((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID])->probability_convert.coefficient_a);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable aqm_flow_id_res
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_cosq_latency_db_aqm_flow_id_res_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "cosq_latency aqm_flow_id_res") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate cosq_latency aqm_flow_id_res\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_cosq_latency_db/aqm_flow_id_res.txt",
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","aqm_flow_id_res: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "dnx_cosq_latency_db[%d]->","((dnx_cosq_latency_db_t*)sw_state_roots_array[%d][COSQ_LATENCY_MODULE_ID])->","aqm_flow_id_res: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            COSQ_LATENCY_MODULE_ID,
            &((dnx_cosq_latency_db_t*)sw_state_roots_array[unit][COSQ_LATENCY_MODULE_ID])->aqm_flow_id_res);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_sw_state_diagnostic_info_t dnx_cosq_latency_db_info[SOC_MAX_NUM_DEVICES][DNX_COSQ_LATENCY_DB_INFO_NOF_ENTRIES];
const char* dnx_cosq_latency_db_layout_str[DNX_COSQ_LATENCY_DB_INFO_NOF_ENTRIES] = {
    "DNX_COSQ_LATENCY_DB~",
    "DNX_COSQ_LATENCY_DB~INGRESS_LATENCY_RES~",
    "DNX_COSQ_LATENCY_DB~END_TO_END_LATENCY_RES~",
    "DNX_COSQ_LATENCY_DB~END_TO_END_AQM_LATENCY_RES~",
    "DNX_COSQ_LATENCY_DB~QUEUE_TEMPLATE~",
    "DNX_COSQ_LATENCY_DB~PROBABILITY_CONVERT~",
    "DNX_COSQ_LATENCY_DB~PROBABILITY_CONVERT~EXPONENT_B~",
    "DNX_COSQ_LATENCY_DB~PROBABILITY_CONVERT~COEFFICIENT_A~",
    "DNX_COSQ_LATENCY_DB~AQM_FLOW_ID_RES~",
};
#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
