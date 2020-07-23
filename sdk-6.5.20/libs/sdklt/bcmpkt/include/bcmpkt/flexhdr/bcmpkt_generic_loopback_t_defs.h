#ifndef BCMPKT_GENERIC_LOOPBACK_T_DEFS_H
#define BCMPKT_GENERIC_LOOPBACK_T_DEFS_H
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
 * \name GENERIC_LOOPBACK_T field IDs.
 * \anchor BCMPKT_GENERIC_LOOPBACK_T_XXX
 */
#define BCMPKT_GENERIC_LOOPBACK_T_INPUT_PRIORITY     0
#define BCMPKT_GENERIC_LOOPBACK_T_RESERVED_1         1
#define BCMPKT_GENERIC_LOOPBACK_T_INTERFACE_OBJ      2
#define BCMPKT_GENERIC_LOOPBACK_T_PROCESSING_CTRL_1  3
#define BCMPKT_GENERIC_LOOPBACK_T_PROCESSING_CTRL_0  4
#define BCMPKT_GENERIC_LOOPBACK_T_DESTINATION_OBJ    5
#define BCMPKT_GENERIC_LOOPBACK_T_SOURCE_SYSTEM_PORT 6
#define BCMPKT_GENERIC_LOOPBACK_T_INTERFACE_CTRL     7
#define BCMPKT_GENERIC_LOOPBACK_T_HEADER_TYPE        8
#define BCMPKT_GENERIC_LOOPBACK_T_ENTROPY_OBJ        9
#define BCMPKT_GENERIC_LOOPBACK_T_DESTINATION_TYPE   10
#define BCMPKT_GENERIC_LOOPBACK_T_RESERVED_2         11
#define BCMPKT_GENERIC_LOOPBACK_T_FLAGS              12
#define BCMPKT_GENERIC_LOOPBACK_T_START_BYTE         13
#define BCMPKT_GENERIC_LOOPBACK_T_QOS_OBJ            14

#define BCMPKT_GENERIC_LOOPBACK_T_FID_INVALID        -1
#define BCMPKT_GENERIC_LOOPBACK_T_FID_COUNT          15
#define BCMPKT_GENERIC_LOOPBACK_T_FID_START          0
#define BCMPKT_GENERIC_LOOPBACK_T_FID_END            (BCMPKT_GENERIC_LOOPBACK_T_FID_COUNT - 1)

#define BCMPKT_GENERIC_LOOPBACK_T_I_SUPPORT          0
#define BCMPKT_GENERIC_LOOPBACK_T_I_FID_COUNT        1

#define BCMPKT_GENERIC_LOOPBACK_T_FIELD_NAME_MAP_INIT \
    {"INPUT_PRIORITY", BCMPKT_GENERIC_LOOPBACK_T_INPUT_PRIORITY},\
    {"RESERVED_1", BCMPKT_GENERIC_LOOPBACK_T_RESERVED_1},\
    {"INTERFACE_OBJ", BCMPKT_GENERIC_LOOPBACK_T_INTERFACE_OBJ},\
    {"PROCESSING_CTRL_1", BCMPKT_GENERIC_LOOPBACK_T_PROCESSING_CTRL_1},\
    {"PROCESSING_CTRL_0", BCMPKT_GENERIC_LOOPBACK_T_PROCESSING_CTRL_0},\
    {"DESTINATION_OBJ", BCMPKT_GENERIC_LOOPBACK_T_DESTINATION_OBJ},\
    {"SOURCE_SYSTEM_PORT", BCMPKT_GENERIC_LOOPBACK_T_SOURCE_SYSTEM_PORT},\
    {"INTERFACE_CTRL", BCMPKT_GENERIC_LOOPBACK_T_INTERFACE_CTRL},\
    {"HEADER_TYPE", BCMPKT_GENERIC_LOOPBACK_T_HEADER_TYPE},\
    {"ENTROPY_OBJ", BCMPKT_GENERIC_LOOPBACK_T_ENTROPY_OBJ},\
    {"DESTINATION_TYPE", BCMPKT_GENERIC_LOOPBACK_T_DESTINATION_TYPE},\
    {"RESERVED_2", BCMPKT_GENERIC_LOOPBACK_T_RESERVED_2},\
    {"FLAGS", BCMPKT_GENERIC_LOOPBACK_T_FLAGS},\
    {"START_BYTE", BCMPKT_GENERIC_LOOPBACK_T_START_BYTE},\
    {"QOS_OBJ", BCMPKT_GENERIC_LOOPBACK_T_QOS_OBJ},\
    {"generic_loopback_t fid count", BCMPKT_GENERIC_LOOPBACK_T_FID_COUNT}

#endif /* BCMPKT_GENERIC_LOOPBACK_T_DEFS_H */
