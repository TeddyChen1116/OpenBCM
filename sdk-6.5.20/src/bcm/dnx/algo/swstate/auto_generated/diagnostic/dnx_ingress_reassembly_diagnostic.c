/** \file algo/swstate/auto_generated/diagnostic/dnx_ingress_reassembly_diagnostic.c
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
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/dnx_ingress_reassembly_diagnostic.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
/*
 * Global Variables
 */

extern dnx_ingress_reassembly_db_t * dnx_ingress_reassembly_db_data[SOC_MAX_NUM_DEVICES];
/*
 * FUNCTIONs
 */

/*
 *
 * dump function for the variable dnx_ingress_reassembly_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_reassembly_db_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(dnx_ingress_reassembly_db_alloc_dump(unit, -1, filters));
    SHR_IF_ERR_EXIT(dnx_ingress_reassembly_db_rcy_dump(unit, filters));
    SHR_IF_ERR_EXIT(dnx_ingress_reassembly_db_mirror_dump(unit, filters));
    SHR_IF_ERR_EXIT(dnx_ingress_reassembly_db_disabled_context_dump(unit, -1, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable alloc
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_reassembly_db_alloc_dump(int  unit,  int  alloc_idx_0,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = alloc_idx_0, I0 = alloc_idx_0 + 1;
    char *s0 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "dnx_ingress_reassembly alloc") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate dnx_ingress_reassembly alloc\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_ingress_reassembly_db/alloc.txt",
            "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","alloc[]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID]));

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->alloc);

        if (i0 == -1) {
            I0 = dnx_sw_state_get_nof_elements(unit,
                DNX_INGRESS_REASSEMBLY_MODULE_ID,
                ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->alloc);
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->alloc
                , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->alloc), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= dnx_sw_state_get_nof_elements(unit, DNX_INGRESS_REASSEMBLY_MODULE_ID, ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->alloc))
        {
            LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->alloc[]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(dnx_sw_state_get_nof_elements(unit, DNX_INGRESS_REASSEMBLY_MODULE_ID, ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->alloc) == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            dnx_sw_state_dump_update_current_idx(unit, i0);
            DNX_SW_STATE_PRINT_MONITOR(
                unit,
                "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","alloc[%s%d]: ", s0, i0);

            DNX_SW_STATE_PRINT_FILE(
                unit,
                "[%s%d]: ", s0, i0);

            DNX_ALGO_RES_MNGR_PRINT(
                unit,
                DNX_INGRESS_REASSEMBLY_MODULE_ID,
                &((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->alloc[i0]);

        }
        dnx_sw_state_dump_end_of_stride(unit);
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable rcy
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_reassembly_db_rcy_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(dnx_ingress_reassembly_db_rcy_reassembly_context_dump(unit, -1, -1, -1, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable reassembly_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_reassembly_db_rcy_reassembly_context_dump(int  unit,  int  reassembly_context_idx_0,  int  reassembly_context_idx_1,  int  reassembly_context_idx_2,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = reassembly_context_idx_0, I0 = reassembly_context_idx_0 + 1;
    int i1 = reassembly_context_idx_1, I1 = reassembly_context_idx_1 + 1, org_i1 = reassembly_context_idx_1;
    int i2 = reassembly_context_idx_2, I2 = reassembly_context_idx_2 + 1, org_i2 = reassembly_context_idx_2;
    char *s0 = "", *s1 = "", *s2 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "uint32") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "dnx_ingress_reassembly rcy reassembly_context") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate dnx_ingress_reassembly rcy reassembly_context\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_ingress_reassembly_db/rcy/reassembly_context.txt",
            "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","rcy.reassembly_context[][][]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID]));

        if (i0 == -1) {
            I0 = DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES;
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context
                , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES)
        {
            LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context[][][]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            if (i1 == -1) {
                I1 = DNX_DATA_MAX_INGR_REASSEMBLY_RCY_NOF_INTERFACES;
                i1 = dnx_sw_state_dump_check_all_the_same(unit,
                    ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context[i0]
                    , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context[i0]), I1, &s1) ? I1 - 1 : 0;
            }

            if(i1 >= DNX_DATA_MAX_INGR_REASSEMBLY_RCY_NOF_INTERFACES)
            {
                LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context[][][]: ")));
                LOG_CLI((BSL_META("Invalid index: %d \n"),i1));
                SHR_EXIT();
            }

            if(DNX_DATA_MAX_INGR_REASSEMBLY_RCY_NOF_INTERFACES == 0)
            {
                SHR_EXIT();
            }

            for(; i1 < I1; i1++) {
                if (i2 == -1) {
                    I2 = DNX_DATA_MAX_INGR_REASSEMBLY_PRIORITY_RCY_PRIORITIES_NOF;
                    i2 = dnx_sw_state_dump_check_all_the_same(unit,
                        ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context[i0][i1]
                        , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context[i0][i1]), I2, &s2) ? I2 - 1 : 0;
                }

                if(i2 >= DNX_DATA_MAX_INGR_REASSEMBLY_PRIORITY_RCY_PRIORITIES_NOF)
                {
                    LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context[][][]: ")));
                    LOG_CLI((BSL_META("Invalid index: %d \n"),i2));
                    SHR_EXIT();
                }

                if(DNX_DATA_MAX_INGR_REASSEMBLY_PRIORITY_RCY_PRIORITIES_NOF == 0)
                {
                    SHR_EXIT();
                }

                for(; i2 < I2; i2++) {
                    dnx_sw_state_dump_update_current_idx(unit, i2);
                    DNX_SW_STATE_PRINT_MONITOR(
                        unit,
                        "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","rcy.reassembly_context[%s%d][%s%d][%s%d]: ", s0, i0, s1, i1, s2, i2);

                    DNX_SW_STATE_PRINT_FILE(
                        unit,
                        "[%s%d][%s%d][%s%d]: ", s0, i0, s1, i1, s2, i2);

                    dnx_sw_state_print_uint32(
                        unit,
                        &((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->rcy.reassembly_context[i0][i1][i2]);

                }
                i2 = org_i2;
                dnx_sw_state_dump_end_of_stride(unit);
            }
            i1 = org_i1;
        }
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable mirror
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_reassembly_db_mirror_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(dnx_ingress_reassembly_db_mirror_info_dump(unit, -1, -1, -1, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable info
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_reassembly_db_mirror_info_dump(int  unit,  int  info_idx_0,  int  info_idx_1,  int  info_idx_2,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(dnx_ingress_reassembly_db_mirror_info_reassembly_context_dump(unit, info_idx_0,info_idx_1,info_idx_2, filters));
    SHR_IF_ERR_EXIT(dnx_ingress_reassembly_db_mirror_info_ref_count_dump(unit, info_idx_0,info_idx_1,info_idx_2, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable reassembly_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_reassembly_db_mirror_info_reassembly_context_dump(int  unit,  int  info_idx_0,  int  info_idx_1,  int  info_idx_2,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = info_idx_0, I0 = info_idx_0 + 1;
    int i1 = info_idx_1, I1 = info_idx_1 + 1, org_i1 = info_idx_1;
    int i2 = info_idx_2, I2 = info_idx_2 + 1, org_i2 = info_idx_2;
    char *s0 = "", *s1 = "", *s2 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "uint32") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "dnx_ingress_reassembly mirror info reassembly_context") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate dnx_ingress_reassembly mirror info reassembly_context\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_ingress_reassembly_db/mirror/info/reassembly_context.txt",
            "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","mirror.info[][][].reassembly_context: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID]));

        if (i0 == -1) {
            I0 = DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES;
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info
                , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES)
        {
            LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[][][].reassembly_context: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            if (i1 == -1) {
                I1 = DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_EGR_INTERFACES;
                i1 = dnx_sw_state_dump_check_all_the_same(unit,
                    ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0]
                    , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0]), I1, &s1) ? I1 - 1 : 0;
            }

            if(i1 >= DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_EGR_INTERFACES)
            {
                LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[][][].reassembly_context: ")));
                LOG_CLI((BSL_META("Invalid index: %d \n"),i1));
                SHR_EXIT();
            }

            if(DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_EGR_INTERFACES == 0)
            {
                SHR_EXIT();
            }

            for(; i1 < I1; i1++) {
                if (i2 == -1) {
                    I2 = DNX_DATA_MAX_INGR_REASSEMBLY_PRIORITY_MIRROR_PRIORITIES_NOF;
                    i2 = dnx_sw_state_dump_check_all_the_same(unit,
                        ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0][i1]
                        , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0][i1]), I2, &s2) ? I2 - 1 : 0;
                }

                if(i2 >= DNX_DATA_MAX_INGR_REASSEMBLY_PRIORITY_MIRROR_PRIORITIES_NOF)
                {
                    LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[][][].reassembly_context: ")));
                    LOG_CLI((BSL_META("Invalid index: %d \n"),i2));
                    SHR_EXIT();
                }

                if(DNX_DATA_MAX_INGR_REASSEMBLY_PRIORITY_MIRROR_PRIORITIES_NOF == 0)
                {
                    SHR_EXIT();
                }

                for(; i2 < I2; i2++) {
                    dnx_sw_state_dump_update_current_idx(unit, i2);
                    DNX_SW_STATE_PRINT_MONITOR(
                        unit,
                        "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","mirror.info[%s%d][%s%d][%s%d].reassembly_context: ", s0, i0, s1, i1, s2, i2);

                    DNX_SW_STATE_PRINT_FILE(
                        unit,
                        "[%s%d][%s%d][%s%d]: ", s0, i0, s1, i1, s2, i2);

                    dnx_sw_state_print_uint32(
                        unit,
                        &((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0][i1][i2].reassembly_context);

                }
                i2 = org_i2;
                dnx_sw_state_dump_end_of_stride(unit);
            }
            i1 = org_i1;
        }
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable ref_count
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_reassembly_db_mirror_info_ref_count_dump(int  unit,  int  info_idx_0,  int  info_idx_1,  int  info_idx_2,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = info_idx_0, I0 = info_idx_0 + 1;
    int i1 = info_idx_1, I1 = info_idx_1 + 1, org_i1 = info_idx_1;
    int i2 = info_idx_2, I2 = info_idx_2 + 1, org_i2 = info_idx_2;
    char *s0 = "", *s1 = "", *s2 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "uint32") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "dnx_ingress_reassembly mirror info ref_count") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate dnx_ingress_reassembly mirror info ref_count\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_ingress_reassembly_db/mirror/info/ref_count.txt",
            "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","mirror.info[][][].ref_count: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID]));

        if (i0 == -1) {
            I0 = DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES;
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info
                , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES)
        {
            LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[][][].ref_count: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            if (i1 == -1) {
                I1 = DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_EGR_INTERFACES;
                i1 = dnx_sw_state_dump_check_all_the_same(unit,
                    ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0]
                    , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0]), I1, &s1) ? I1 - 1 : 0;
            }

            if(i1 >= DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_EGR_INTERFACES)
            {
                LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[][][].ref_count: ")));
                LOG_CLI((BSL_META("Invalid index: %d \n"),i1));
                SHR_EXIT();
            }

            if(DNX_DATA_MAX_EGR_QUEUING_PARAMS_NOF_EGR_INTERFACES == 0)
            {
                SHR_EXIT();
            }

            for(; i1 < I1; i1++) {
                if (i2 == -1) {
                    I2 = DNX_DATA_MAX_INGR_REASSEMBLY_PRIORITY_MIRROR_PRIORITIES_NOF;
                    i2 = dnx_sw_state_dump_check_all_the_same(unit,
                        ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0][i1]
                        , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0][i1]), I2, &s2) ? I2 - 1 : 0;
                }

                if(i2 >= DNX_DATA_MAX_INGR_REASSEMBLY_PRIORITY_MIRROR_PRIORITIES_NOF)
                {
                    LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[][][].ref_count: ")));
                    LOG_CLI((BSL_META("Invalid index: %d \n"),i2));
                    SHR_EXIT();
                }

                if(DNX_DATA_MAX_INGR_REASSEMBLY_PRIORITY_MIRROR_PRIORITIES_NOF == 0)
                {
                    SHR_EXIT();
                }

                for(; i2 < I2; i2++) {
                    dnx_sw_state_dump_update_current_idx(unit, i2);
                    DNX_SW_STATE_PRINT_MONITOR(
                        unit,
                        "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","mirror.info[%s%d][%s%d][%s%d].ref_count: ", s0, i0, s1, i1, s2, i2);

                    DNX_SW_STATE_PRINT_FILE(
                        unit,
                        "[%s%d][%s%d][%s%d]: ", s0, i0, s1, i1, s2, i2);

                    dnx_sw_state_print_uint32(
                        unit,
                        &((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->mirror.info[i0][i1][i2].ref_count);

                }
                i2 = org_i2;
                dnx_sw_state_dump_end_of_stride(unit);
            }
            i1 = org_i1;
        }
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable disabled_context
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_reassembly_db_disabled_context_dump(int  unit,  int  disabled_context_idx_0,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = disabled_context_idx_0, I0 = disabled_context_idx_0 + 1;
    char *s0 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "uint32") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "dnx_ingress_reassembly disabled_context") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate dnx_ingress_reassembly disabled_context\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "dnx_ingress_reassembly_db/disabled_context.txt",
            "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","disabled_context[]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID]));

        if (i0 == -1) {
            I0 = SOC_MAX_NUM_PORTS;
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->disabled_context
                , sizeof(*((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->disabled_context), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= SOC_MAX_NUM_PORTS)
        {
            LOG_CLI((BSL_META("dnx_ingress_reassembly_db[]->((dnx_ingress_reassembly_db_t*)sw_state_roots_array[][DNX_INGRESS_REASSEMBLY_MODULE_ID])->disabled_context[]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(SOC_MAX_NUM_PORTS == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            dnx_sw_state_dump_update_current_idx(unit, i0);
            DNX_SW_STATE_PRINT_MONITOR(
                unit,
                "dnx_ingress_reassembly_db[%d]->","((dnx_ingress_reassembly_db_t*)sw_state_roots_array[%d][DNX_INGRESS_REASSEMBLY_MODULE_ID])->","disabled_context[%s%d]: ", s0, i0);

            DNX_SW_STATE_PRINT_FILE(
                unit,
                "[%s%d]: ", s0, i0);

            dnx_sw_state_print_uint32(
                unit,
                &((dnx_ingress_reassembly_db_t*)sw_state_roots_array[unit][DNX_INGRESS_REASSEMBLY_MODULE_ID])->disabled_context[i0]);

        }
        dnx_sw_state_dump_end_of_stride(unit);
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_sw_state_diagnostic_info_t dnx_ingress_reassembly_db_info[SOC_MAX_NUM_DEVICES][DNX_INGRESS_REASSEMBLY_DB_INFO_NOF_ENTRIES];
const char* dnx_ingress_reassembly_db_layout_str[DNX_INGRESS_REASSEMBLY_DB_INFO_NOF_ENTRIES] = {
    "DNX_INGRESS_REASSEMBLY_DB~",
    "DNX_INGRESS_REASSEMBLY_DB~ALLOC~",
    "DNX_INGRESS_REASSEMBLY_DB~RCY~",
    "DNX_INGRESS_REASSEMBLY_DB~RCY~REASSEMBLY_CONTEXT~",
    "DNX_INGRESS_REASSEMBLY_DB~MIRROR~",
    "DNX_INGRESS_REASSEMBLY_DB~MIRROR~INFO~",
    "DNX_INGRESS_REASSEMBLY_DB~MIRROR~INFO~REASSEMBLY_CONTEXT~",
    "DNX_INGRESS_REASSEMBLY_DB~MIRROR~INFO~REF_COUNT~",
    "DNX_INGRESS_REASSEMBLY_DB~DISABLED_CONTEXT~",
};
#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
