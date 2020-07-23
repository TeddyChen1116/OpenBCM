/** \file dnxf/swstate/auto_generated/diagnostic/swstate_commandline.c
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

#include "swstate_commandline.h"
#include <appl/diag/dnxc/swstate/diagnostic_config.h>
#include <appl/diag/dnxc/swstate/diag_dnxc_sw_state_logging.h>
#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include "dnxf_commandline.h"
#if defined(DNX_SW_STATE_DIAGNOSTIC)


sh_sand_cmd_t sh_dnxf_swstate_cmds[] = {
    {"dnxf", NULL, sh_dnx_swstate_dnxf_cmds, NULL, &dnx_swstate_dnxf_man},
    {"config", NULL, dnxc_swstate_config_cmds, NULL, &dnxc_swstate_config_man},
#if defined(DNX_SW_STATE_LOGGING)
    {"logger", NULL, dnxc_swstate_logging_cmds, NULL, &dnxc_swstate_logging_man},
#endif
    {"dump", sh_dnxf_swstate_dump_cmd, NULL, dnxf_swstate_dump_options, &dnxf_swstate_dump_man},
    {"size_get", sh_dnxf_swstate_size_get_cmd, NULL, dnxf_swstate_size_get_options, &dnxf_swstate_size_get_man},
    {NULL}
};


shr_error_e sh_dnxf_swstate_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);

    sh_dnx_swstate_dnxf_dump_cmd(unit, args, sand_control);
    goto exit;
exit:
    SHR_FUNC_EXIT;
}



shr_error_e sh_dnxf_swstate_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);

    cli_out("%-34s", "dnxf: ");
    sh_dnx_swstate_dnxf_size_get_cmd(unit, args, sand_control);
    goto exit;
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnxf_swstate_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_option_t dnxf_swstate_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnxf_swstate_dump_man = {
    "swstate dump",
    "print the swstate data",
    "swstate dump",
    "swstate dump nocontent=false typefilter="" namefilter="" ",
};


sh_sand_man_t dnxf_swstate_size_get_man = {
    "swstate size_get",
    "print the swstate modules sizes",
    "swstate size_get",
    "swstate size_get nocontent=false typefilter="" namefilter="" ",
};


sh_sand_man_t sh_dnxf_swstate_man = {
    cmd_dnxf_swstate_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnxf_swstate_desc[] = "swstate root";


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
