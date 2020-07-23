/** \file dnx/swstate/auto_generated/diagnostic/dnx_ire_packet_generator_commandline.c
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
#include <soc/dnx/swstate/auto_generated/diagnostic/dnx_ire_packet_generator_diagnostic.h>
#include "dnx_ire_packet_generator_commandline.h"
#include <soc/dnx/swstate/auto_generated/access/dnx_ire_packet_generator_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_dnx_ire_packet_generator_cmds[] = {
    {"ire_datapath_enable_state", NULL, sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_cmds, NULL, &dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_man},
    {"dump", sh_dnx_swstate_dnx_ire_packet_generator_dump_cmd, NULL, dnx_swstate_dnx_ire_packet_generator_dump_options, &dnx_swstate_dnx_ire_packet_generator_dump_man},
    {"size_get", sh_dnx_swstate_dnx_ire_packet_generator_size_get_cmd, NULL, dnx_swstate_dnx_ire_packet_generator_size_get_options, &dnx_swstate_dnx_ire_packet_generator_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_ire_packet_generator_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_ire_packet_generator_diagnostic_operation_counters_options, &dnx_swstate_dnx_ire_packet_generator_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    ire_packet_generator_info.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(ire_packet_generator_info_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_dump_man = {
    "swstate dnx_ire_packet_generator dump",
    "print the module's content",
    "swstate dnx_ire_packet_generator dump",
    "swstate dnx_ire_packet_generator dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(ire_packet_generator_info_info[unit], ire_packet_generator_info_layout_str, IRE_PACKET_GENERATOR_INFO_INFO_NOF_ENTRIES, "IRE_PACKET_GENERATOR_INFO~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_size_get_man = {
    "swstate dnx_ire_packet_generator size_get",
    "print the module's size",
    "swstate dnx_ire_packet_generator size_get",
    "swstate dnx_ire_packet_generator size_get",
};


shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(ire_packet_generator_info_info[unit], ire_packet_generator_info_layout_str, IRE_PACKET_GENERATOR_INFO_INFO_NOF_ENTRIES, "IRE_PACKET_GENERATOR_INFO~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_diagnostic_operation_counters_man = {
    "swstate dnx_ire_packet_generator diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate dnx_ire_packet_generator diagnostic_operation_counters",
    "swstate dnx_ire_packet_generator diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_man = {
    cmd_dnx_swstate_dnx_ire_packet_generator_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_ire_packet_generator_desc[] = "swstate dnx_ire_packet_generator commands";



sh_sand_cmd_t sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_dump_cmd, NULL, dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_dump_options, &dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_dump_man},
    {"size_get", sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_size_get_cmd, NULL, dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_size_get_options, &dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_diagnostic_operation_counters_options, &dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_man = {
    cmd_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_desc[] = "ire_packet_generator_info ire_datapath_enable_state commands";


shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(ire_packet_generator_info_ire_datapath_enable_state_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_dump_man = {
    "swstate dump",
    "print the variable value",
    "ire_packet_generator_info ire_datapath_enable_state dump []\n",
    "ire_packet_generator_info ire_datapath_enable_state dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(ire_packet_generator_info_info[unit], ire_packet_generator_info_layout_str, IRE_PACKET_GENERATOR_INFO_INFO_NOF_ENTRIES, "IRE_PACKET_GENERATOR_INFO~IRE_DATAPATH_ENABLE_STATE~", sizeof(((dnx_ire_packet_generator_info_struct*)sw_state_roots_array[unit][DNX_IRE_PACKET_GENERATOR_MODULE_ID])->ire_datapath_enable_state));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "ire_packet_generator_info ire_datapath_enable_state size_get",
    "ire_packet_generator_info ire_datapath_enable_state size_get",
};


shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(ire_packet_generator_info_info[unit], ire_packet_generator_info_layout_str, IRE_PACKET_GENERATOR_INFO_INFO_NOF_ENTRIES, "IRE_PACKET_GENERATOR_INFO~IRE_DATAPATH_ENABLE_STATE~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "ire_packet_generator_info ire_datapath_enable_state diagnostic_operation_counters",
    "ire_packet_generator_info ire_datapath_enable_state diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
