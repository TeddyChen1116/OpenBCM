/** \file dnx/swstate/auto_generated/diagnostic/ecmp_commandline.c
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

#include <shared/error.h>
#include <shared/bsl.h>
#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_c_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/ecmp_diagnostic.h>
#include "ecmp_commandline.h"
#include <bcm_int/dnx/algo/swstate/auto_generated/access/ecmp_access.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_l3.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_mdb.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_ecmp_cmds[] = {
    {"members_tbl_addr_profile_link_lists", NULL, sh_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_cmds, NULL, &dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_man},
    {"consistent_hashing_manager_handle", NULL, sh_dnx_swstate_ecmp_consistent_hashing_manager_handle_cmds, NULL, &dnx_swstate_ecmp_consistent_hashing_manager_handle_man},
    {"ecmp_res_manager", NULL, sh_dnx_swstate_ecmp_ecmp_res_manager_cmds, NULL, &dnx_swstate_ecmp_ecmp_res_manager_man},
    {"ecmp_extended_res_manager", NULL, sh_dnx_swstate_ecmp_ecmp_extended_res_manager_cmds, NULL, &dnx_swstate_ecmp_ecmp_extended_res_manager_man},
    {"ecmp_hierarchy", NULL, sh_dnx_swstate_ecmp_ecmp_hierarchy_cmds, NULL, &dnx_swstate_ecmp_ecmp_hierarchy_man},
    {"ecmp_nof_used_elements_per_grain", NULL, sh_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_cmds, NULL, &dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_man},
    {"ecmp_fec_members_table", NULL, sh_dnx_swstate_ecmp_ecmp_fec_members_table_cmds, NULL, &dnx_swstate_ecmp_ecmp_fec_members_table_man},
    {"ecmp_group_size_minus_one", NULL, sh_dnx_swstate_ecmp_ecmp_group_size_minus_one_cmds, NULL, &dnx_swstate_ecmp_ecmp_group_size_minus_one_man},
    {"dump", sh_dnx_swstate_ecmp_dump_cmd, NULL, dnx_swstate_ecmp_dump_options, &dnx_swstate_ecmp_dump_man},
    {"size_get", sh_dnx_swstate_ecmp_size_get_cmd, NULL, dnx_swstate_ecmp_size_get_options, &dnx_swstate_ecmp_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_ecmp_diagnostic_operation_counters_cmd, NULL, dnx_swstate_ecmp_diagnostic_operation_counters_options, &dnx_swstate_ecmp_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_ecmp_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    ecmp_db_info.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(ecmp_db_info_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_dump_man = {
    "swstate ecmp dump",
    "print the module's content",
    "swstate ecmp dump",
    "swstate ecmp dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_ecmp_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_size_get_man = {
    "swstate ecmp size_get",
    "print the module's size",
    "swstate ecmp size_get",
    "swstate ecmp size_get",
};


shr_error_e sh_dnx_swstate_ecmp_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_diagnostic_operation_counters_man = {
    "swstate ecmp diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate ecmp diagnostic_operation_counters",
    "swstate ecmp diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_ecmp_man = {
    cmd_dnx_swstate_ecmp_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_ecmp_desc[] = "swstate ecmp commands";



sh_sand_cmd_t sh_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_cmds[] = {
    {"dump", sh_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_dump_cmd, NULL, dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_dump_options, &dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_dump_man},
    {"size_get", sh_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_size_get_cmd, NULL, dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_size_get_options, &dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_diagnostic_operation_counters_cmd, NULL, dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_diagnostic_operation_counters_options, &dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_man = {
    cmd_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_desc[] = "ecmp_db_info members_tbl_addr_profile_link_lists commands";


shr_error_e sh_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(ecmp_db_info_members_tbl_addr_profile_link_lists_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_dump_man = {
    "swstate dump",
    "print the variable value",
    "ecmp_db_info members_tbl_addr_profile_link_lists dump []\n",
    "ecmp_db_info members_tbl_addr_profile_link_lists dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~MEMBERS_TBL_ADDR_PROFILE_LINK_LISTS~", sizeof(((ecmp_sw_db_info_t*)sw_state_roots_array[unit][ECMP_MODULE_ID])->members_tbl_addr_profile_link_lists));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "ecmp_db_info members_tbl_addr_profile_link_lists size_get",
    "ecmp_db_info members_tbl_addr_profile_link_lists size_get",
};


shr_error_e sh_dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~MEMBERS_TBL_ADDR_PROFILE_LINK_LISTS~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_members_tbl_addr_profile_link_lists_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "ecmp_db_info members_tbl_addr_profile_link_lists diagnostic_operation_counters",
    "ecmp_db_info members_tbl_addr_profile_link_lists diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_ecmp_consistent_hashing_manager_handle_cmds[] = {
    {"dump", sh_dnx_swstate_ecmp_consistent_hashing_manager_handle_dump_cmd, NULL, dnx_swstate_ecmp_consistent_hashing_manager_handle_dump_options, &dnx_swstate_ecmp_consistent_hashing_manager_handle_dump_man},
    {"size_get", sh_dnx_swstate_ecmp_consistent_hashing_manager_handle_size_get_cmd, NULL, dnx_swstate_ecmp_consistent_hashing_manager_handle_size_get_options, &dnx_swstate_ecmp_consistent_hashing_manager_handle_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_ecmp_consistent_hashing_manager_handle_diagnostic_operation_counters_cmd, NULL, dnx_swstate_ecmp_consistent_hashing_manager_handle_diagnostic_operation_counters_options, &dnx_swstate_ecmp_consistent_hashing_manager_handle_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_consistent_hashing_manager_handle_man = {
    cmd_dnx_swstate_ecmp_consistent_hashing_manager_handle_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_ecmp_consistent_hashing_manager_handle_desc[] = "ecmp_db_info consistent_hashing_manager_handle commands";


shr_error_e sh_dnx_swstate_ecmp_consistent_hashing_manager_handle_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(ecmp_db_info_consistent_hashing_manager_handle_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_consistent_hashing_manager_handle_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_consistent_hashing_manager_handle_dump_man = {
    "swstate dump",
    "print the variable value",
    "ecmp_db_info consistent_hashing_manager_handle dump []\n",
    "ecmp_db_info consistent_hashing_manager_handle dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_ecmp_consistent_hashing_manager_handle_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~CONSISTENT_HASHING_MANAGER_HANDLE~", sizeof(((ecmp_sw_db_info_t*)sw_state_roots_array[unit][ECMP_MODULE_ID])->consistent_hashing_manager_handle));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_consistent_hashing_manager_handle_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_consistent_hashing_manager_handle_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "ecmp_db_info consistent_hashing_manager_handle size_get",
    "ecmp_db_info consistent_hashing_manager_handle size_get",
};


shr_error_e sh_dnx_swstate_ecmp_consistent_hashing_manager_handle_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~CONSISTENT_HASHING_MANAGER_HANDLE~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_consistent_hashing_manager_handle_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_consistent_hashing_manager_handle_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "ecmp_db_info consistent_hashing_manager_handle diagnostic_operation_counters",
    "ecmp_db_info consistent_hashing_manager_handle diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_ecmp_ecmp_res_manager_cmds[] = {
    {"dump", sh_dnx_swstate_ecmp_ecmp_res_manager_dump_cmd, NULL, dnx_swstate_ecmp_ecmp_res_manager_dump_options, &dnx_swstate_ecmp_ecmp_res_manager_dump_man},
    {"size_get", sh_dnx_swstate_ecmp_ecmp_res_manager_size_get_cmd, NULL, dnx_swstate_ecmp_ecmp_res_manager_size_get_options, &dnx_swstate_ecmp_ecmp_res_manager_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_ecmp_ecmp_res_manager_diagnostic_operation_counters_cmd, NULL, dnx_swstate_ecmp_ecmp_res_manager_diagnostic_operation_counters_options, &dnx_swstate_ecmp_ecmp_res_manager_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_res_manager_man = {
    cmd_dnx_swstate_ecmp_ecmp_res_manager_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_ecmp_ecmp_res_manager_desc[] = "ecmp_db_info ecmp_res_manager commands";


shr_error_e sh_dnx_swstate_ecmp_ecmp_res_manager_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(ecmp_db_info_ecmp_res_manager_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_res_manager_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_res_manager_dump_man = {
    "swstate dump",
    "print the variable value",
    "ecmp_db_info ecmp_res_manager dump []\n",
    "ecmp_db_info ecmp_res_manager dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_res_manager_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_RES_MANAGER~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_res_manager_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_res_manager_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "ecmp_db_info ecmp_res_manager size_get",
    "ecmp_db_info ecmp_res_manager size_get",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_res_manager_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_RES_MANAGER~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_res_manager_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_res_manager_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "ecmp_db_info ecmp_res_manager diagnostic_operation_counters",
    "ecmp_db_info ecmp_res_manager diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_ecmp_ecmp_extended_res_manager_cmds[] = {
    {"dump", sh_dnx_swstate_ecmp_ecmp_extended_res_manager_dump_cmd, NULL, dnx_swstate_ecmp_ecmp_extended_res_manager_dump_options, &dnx_swstate_ecmp_ecmp_extended_res_manager_dump_man},
    {"size_get", sh_dnx_swstate_ecmp_ecmp_extended_res_manager_size_get_cmd, NULL, dnx_swstate_ecmp_ecmp_extended_res_manager_size_get_options, &dnx_swstate_ecmp_ecmp_extended_res_manager_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_ecmp_ecmp_extended_res_manager_diagnostic_operation_counters_cmd, NULL, dnx_swstate_ecmp_ecmp_extended_res_manager_diagnostic_operation_counters_options, &dnx_swstate_ecmp_ecmp_extended_res_manager_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_extended_res_manager_man = {
    cmd_dnx_swstate_ecmp_ecmp_extended_res_manager_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_ecmp_ecmp_extended_res_manager_desc[] = "ecmp_db_info ecmp_extended_res_manager commands";


shr_error_e sh_dnx_swstate_ecmp_ecmp_extended_res_manager_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(ecmp_db_info_ecmp_extended_res_manager_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_extended_res_manager_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_extended_res_manager_dump_man = {
    "swstate dump",
    "print the variable value",
    "ecmp_db_info ecmp_extended_res_manager dump []\n",
    "ecmp_db_info ecmp_extended_res_manager dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_extended_res_manager_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_EXTENDED_RES_MANAGER~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_extended_res_manager_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_extended_res_manager_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "ecmp_db_info ecmp_extended_res_manager size_get",
    "ecmp_db_info ecmp_extended_res_manager size_get",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_extended_res_manager_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_EXTENDED_RES_MANAGER~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_extended_res_manager_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_extended_res_manager_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "ecmp_db_info ecmp_extended_res_manager diagnostic_operation_counters",
    "ecmp_db_info ecmp_extended_res_manager diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_ecmp_ecmp_hierarchy_cmds[] = {
    {"dump", sh_dnx_swstate_ecmp_ecmp_hierarchy_dump_cmd, NULL, dnx_swstate_ecmp_ecmp_hierarchy_dump_options, &dnx_swstate_ecmp_ecmp_hierarchy_dump_man},
    {"size_get", sh_dnx_swstate_ecmp_ecmp_hierarchy_size_get_cmd, NULL, dnx_swstate_ecmp_ecmp_hierarchy_size_get_options, &dnx_swstate_ecmp_ecmp_hierarchy_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_ecmp_ecmp_hierarchy_diagnostic_operation_counters_cmd, NULL, dnx_swstate_ecmp_ecmp_hierarchy_diagnostic_operation_counters_options, &dnx_swstate_ecmp_ecmp_hierarchy_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_hierarchy_man = {
    cmd_dnx_swstate_ecmp_ecmp_hierarchy_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_ecmp_ecmp_hierarchy_desc[] = "ecmp_db_info ecmp_hierarchy commands";


shr_error_e sh_dnx_swstate_ecmp_ecmp_hierarchy_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  ecmp_hierarchy_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("ecmp_hierarchy_idx_0", ecmp_hierarchy_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(ecmp_db_info_ecmp_hierarchy_dump(unit, ecmp_hierarchy_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_hierarchy_dump_options[] = {
    {"ecmp_hierarchy_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_hierarchy_dump_man = {
    "swstate dump",
    "print the variable value",
    "ecmp_db_info ecmp_hierarchy dump [,ecmp_hierarchy_idx_0=<int>]\n",
    "ecmp_db_info ecmp_hierarchy dump ecmp_hierarchy_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_hierarchy_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_HIERARCHY~", sizeof(((ecmp_sw_db_info_t*)sw_state_roots_array[unit][ECMP_MODULE_ID])->ecmp_hierarchy));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_hierarchy_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_hierarchy_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "ecmp_db_info ecmp_hierarchy size_get",
    "ecmp_db_info ecmp_hierarchy size_get",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_hierarchy_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_HIERARCHY~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_hierarchy_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_hierarchy_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "ecmp_db_info ecmp_hierarchy diagnostic_operation_counters",
    "ecmp_db_info ecmp_hierarchy diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_cmds[] = {
    {"dump", sh_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_dump_cmd, NULL, dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_dump_options, &dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_dump_man},
    {"size_get", sh_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_size_get_cmd, NULL, dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_size_get_options, &dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_diagnostic_operation_counters_cmd, NULL, dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_diagnostic_operation_counters_options, &dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_man = {
    cmd_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_desc[] = "ecmp_db_info ecmp_nof_used_elements_per_grain commands";


shr_error_e sh_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  ecmp_nof_used_elements_per_grain_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("ecmp_nof_used_elements_per_grain_idx_0", ecmp_nof_used_elements_per_grain_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(ecmp_db_info_ecmp_nof_used_elements_per_grain_dump(unit, ecmp_nof_used_elements_per_grain_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_dump_options[] = {
    {"ecmp_nof_used_elements_per_grain_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_dump_man = {
    "swstate dump",
    "print the variable value",
    "ecmp_db_info ecmp_nof_used_elements_per_grain dump [,ecmp_nof_used_elements_per_grain_idx_0=<int>]\n",
    "ecmp_db_info ecmp_nof_used_elements_per_grain dump ecmp_nof_used_elements_per_grain_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_NOF_USED_ELEMENTS_PER_GRAIN~", sizeof(((ecmp_sw_db_info_t*)sw_state_roots_array[unit][ECMP_MODULE_ID])->ecmp_nof_used_elements_per_grain));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "ecmp_db_info ecmp_nof_used_elements_per_grain size_get",
    "ecmp_db_info ecmp_nof_used_elements_per_grain size_get",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_NOF_USED_ELEMENTS_PER_GRAIN~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_nof_used_elements_per_grain_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "ecmp_db_info ecmp_nof_used_elements_per_grain diagnostic_operation_counters",
    "ecmp_db_info ecmp_nof_used_elements_per_grain diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_ecmp_ecmp_fec_members_table_cmds[] = {
    {"dump", sh_dnx_swstate_ecmp_ecmp_fec_members_table_dump_cmd, NULL, dnx_swstate_ecmp_ecmp_fec_members_table_dump_options, &dnx_swstate_ecmp_ecmp_fec_members_table_dump_man},
    {"size_get", sh_dnx_swstate_ecmp_ecmp_fec_members_table_size_get_cmd, NULL, dnx_swstate_ecmp_ecmp_fec_members_table_size_get_options, &dnx_swstate_ecmp_ecmp_fec_members_table_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_ecmp_ecmp_fec_members_table_diagnostic_operation_counters_cmd, NULL, dnx_swstate_ecmp_ecmp_fec_members_table_diagnostic_operation_counters_options, &dnx_swstate_ecmp_ecmp_fec_members_table_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_fec_members_table_man = {
    cmd_dnx_swstate_ecmp_ecmp_fec_members_table_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_ecmp_ecmp_fec_members_table_desc[] = "ecmp_db_info ecmp_fec_members_table commands";


shr_error_e sh_dnx_swstate_ecmp_ecmp_fec_members_table_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  ecmp_fec_members_table_idx_0 = 0;
    int  ecmp_fec_members_table_idx_1 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("ecmp_fec_members_table_idx_0", ecmp_fec_members_table_idx_0);
    SH_SAND_GET_INT32("ecmp_fec_members_table_idx_1", ecmp_fec_members_table_idx_1);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(ecmp_db_info_ecmp_fec_members_table_dump(unit, ecmp_fec_members_table_idx_0, ecmp_fec_members_table_idx_1, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_fec_members_table_dump_options[] = {
    {"ecmp_fec_members_table_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"ecmp_fec_members_table_idx_1", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_fec_members_table_dump_man = {
    "swstate dump",
    "print the variable value",
    "ecmp_db_info ecmp_fec_members_table dump [,ecmp_fec_members_table_idx_0=<int>,ecmp_fec_members_table_idx_1=<int>]\n",
    "ecmp_db_info ecmp_fec_members_table dump ecmp_fec_members_table_idx_0=0 ecmp_fec_members_table_idx_1=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_fec_members_table_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_FEC_MEMBERS_TABLE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_fec_members_table_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_fec_members_table_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "ecmp_db_info ecmp_fec_members_table size_get",
    "ecmp_db_info ecmp_fec_members_table size_get",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_fec_members_table_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_FEC_MEMBERS_TABLE~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_fec_members_table_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_fec_members_table_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "ecmp_db_info ecmp_fec_members_table diagnostic_operation_counters",
    "ecmp_db_info ecmp_fec_members_table diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_ecmp_ecmp_group_size_minus_one_cmds[] = {
    {"dump", sh_dnx_swstate_ecmp_ecmp_group_size_minus_one_dump_cmd, NULL, dnx_swstate_ecmp_ecmp_group_size_minus_one_dump_options, &dnx_swstate_ecmp_ecmp_group_size_minus_one_dump_man},
    {"size_get", sh_dnx_swstate_ecmp_ecmp_group_size_minus_one_size_get_cmd, NULL, dnx_swstate_ecmp_ecmp_group_size_minus_one_size_get_options, &dnx_swstate_ecmp_ecmp_group_size_minus_one_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_ecmp_ecmp_group_size_minus_one_diagnostic_operation_counters_cmd, NULL, dnx_swstate_ecmp_ecmp_group_size_minus_one_diagnostic_operation_counters_options, &dnx_swstate_ecmp_ecmp_group_size_minus_one_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_group_size_minus_one_man = {
    cmd_dnx_swstate_ecmp_ecmp_group_size_minus_one_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_ecmp_ecmp_group_size_minus_one_desc[] = "ecmp_db_info ecmp_group_size_minus_one commands";


shr_error_e sh_dnx_swstate_ecmp_ecmp_group_size_minus_one_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  ecmp_group_size_minus_one_idx_0 = 0;
    int  ecmp_group_size_minus_one_idx_1 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("ecmp_group_size_minus_one_idx_0", ecmp_group_size_minus_one_idx_0);
    SH_SAND_GET_INT32("ecmp_group_size_minus_one_idx_1", ecmp_group_size_minus_one_idx_1);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(ecmp_db_info_ecmp_group_size_minus_one_dump(unit, ecmp_group_size_minus_one_idx_0, ecmp_group_size_minus_one_idx_1, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_group_size_minus_one_dump_options[] = {
    {"ecmp_group_size_minus_one_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"ecmp_group_size_minus_one_idx_1", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_group_size_minus_one_dump_man = {
    "swstate dump",
    "print the variable value",
    "ecmp_db_info ecmp_group_size_minus_one dump [,ecmp_group_size_minus_one_idx_0=<int>,ecmp_group_size_minus_one_idx_1=<int>]\n",
    "ecmp_db_info ecmp_group_size_minus_one dump ecmp_group_size_minus_one_idx_0=0 ecmp_group_size_minus_one_idx_1=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_group_size_minus_one_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_GROUP_SIZE_MINUS_ONE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_group_size_minus_one_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_group_size_minus_one_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "ecmp_db_info ecmp_group_size_minus_one size_get",
    "ecmp_db_info ecmp_group_size_minus_one size_get",
};


shr_error_e sh_dnx_swstate_ecmp_ecmp_group_size_minus_one_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(ecmp_db_info_info[unit], ecmp_db_info_layout_str, ECMP_DB_INFO_INFO_NOF_ENTRIES, "ECMP_DB_INFO~ECMP_GROUP_SIZE_MINUS_ONE~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_ecmp_ecmp_group_size_minus_one_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_ecmp_ecmp_group_size_minus_one_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "ecmp_db_info ecmp_group_size_minus_one diagnostic_operation_counters",
    "ecmp_db_info ecmp_group_size_minus_one diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
