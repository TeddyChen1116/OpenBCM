#ifndef BCMPKT_L2_T_DEFS_H
#define BCMPKT_L2_T_DEFS_H
/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 */

/*!
 * \name L2_T field IDs.
 * \anchor BCMPKT_L2_T_XXX
 */
#define BCMPKT_L2_T_MACDA 0
#define BCMPKT_L2_T_MACSA 1

#define BCMPKT_L2_T_FID_INVALID        -1
#define BCMPKT_L2_T_FID_COUNT          2
#define BCMPKT_L2_T_FID_START          0
#define BCMPKT_L2_T_FID_END            (BCMPKT_L2_T_FID_COUNT - 1)

#define BCMPKT_L2_T_I_SUPPORT          0
#define BCMPKT_L2_T_I_FID_COUNT        1

#define BCMPKT_L2_T_FIELD_NAME_MAP_INIT \
    {"MACDA", BCMPKT_L2_T_MACDA},\
    {"MACSA", BCMPKT_L2_T_MACSA},\
    {"l2_t fid count", BCMPKT_L2_T_FID_COUNT}

#endif /* BCMPKT_L2_T_DEFS_H */
