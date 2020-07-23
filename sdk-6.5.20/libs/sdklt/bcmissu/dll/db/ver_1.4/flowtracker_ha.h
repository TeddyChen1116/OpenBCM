/**************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/ha_yml_parser.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef FLOWTRACKER_HA_H
#define FLOWTRACKER_HA_H

#include <shr/shr_ha.h>

#define FT_EM_GRP_ID_MAP_SIZE 32

typedef struct {
   /*! Indicates if flowtracker app is initialized */
   bool init;
   /*! Indicates if embedded app is running or not.If this field is true, then it implies init is also true. */
   bool run;
   /*! uController number running flowtracker application. */
   uint32_t uc_num;
   /*! Collector reference count. */
   uint32_t collector_ref_count;
   /*! Array of EM groups Mapping. */
   uint32_t em_group_id_map[FT_EM_GRP_ID_MAP_SIZE];
   /*! Hardware learn enable mechanism. */
   uint16_t hw_learn;
} bcmcth_mon_ft_ha_t;

#define BCMCTH_MON_FT_HA_T_ID 0x7209d101fce0456e

#endif /* FLOWTRACKER_HA_H */
