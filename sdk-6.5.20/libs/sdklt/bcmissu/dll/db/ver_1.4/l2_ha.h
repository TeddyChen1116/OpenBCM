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
#ifndef L2_HA_H
#define L2_HA_H

#include <shr/shr_ha.h>

#define MAC_ADDR_LEN 6
#define ENTRY_WSIZE_MAX 4

typedef struct {
   /*! Mac address. */
   uint8_t mac[MAC_ADDR_LEN];
   /*! VLAN ID. */
   uint16_t vid;
   /*! Destination type. */
   uint8_t dest_type;
   /*! Module ID. */
   uint8_t modid;
   /*! Port ID. */
   uint16_t port;
   /*! Trunk group ID. */
   uint16_t trunk_id;
} bcmcth_l2_learn_cache_t;

#define BCMCTH_L2_LEARN_CACHE_T_ID 0xbc5e0f82b89f0630

typedef struct {
   /*! Offset of IMM table. */
   bool offset;
} bcmcth_l2_learn_cache_offset_t;

#define BCMCTH_L2_LEARN_CACHE_OFFSET_T_ID 0x7d970a1bca045dac

typedef struct {
   /*! Mac address. */
   uint8_t mac[MAC_ADDR_LEN];
   /*! VFI. */
   uint16_t vfi;
   /*! SVP. */
   uint16_t svp;
   /*! Source type. */
   uint8_t src_type;
   /*! Source value. */
   uint16_t source;
} bcmcth_l2_vfi_learn_cache_t;

#define BCMCTH_L2_VFI_LEARN_CACHE_T_ID 0x10b9e247a6c763ff

typedef struct {
   /*! Enable or disable report. */
   bool enable;
   /*! Poll L2 learning cache slowly. */
   bool slow_poll;
} bcmcth_l2_learn_report_ctrl_t;

#define BCMCTH_L2_LEARN_REPORT_CTRL_T_ID 0x4803389515d9ed57

typedef struct {
   /*! Entry status. */
   uint32_t status;
   /*! Entry data. */
   uint32_t data[ENTRY_WSIZE_MAX];
} bcmcth_l2_entry_ha_t;

#define BCMCTH_L2_ENTRY_HA_T_ID 0xf69bee403f1fa12f

typedef struct {
   /*! Block validation. */
   uint32_t signature;
   /*! Entry array size. */
   uint32_t array_size;
   /*! Entry array. */
   bcmcth_l2_entry_ha_t entry[];
} bcmcth_l2_cache_entry_ha_t;

#define BCMCTH_L2_CACHE_ENTRY_HA_T_ID 0xf588acd745ea429c

typedef struct {
   /*! Count of elements in queue. */
   uint32_t count;
   /*! Index of first element in queue. */
   uint32_t front;
   /*! Next index of last element in queue. */
   uint32_t rear;
   /*! Index of first to-report element in queue. */
   uint32_t report;
   /*! Count of elements to report. */
   uint32_t rpt_cnt;
   /*! New learn entry number during one DMA operation. */
   uint32_t fresh_entry;
   /*! Number of all learned entries. */
   uint32_t learn_sum;
   /*! Number of all reported entries. */
   uint32_t rpt_sum;
   /*! Number of all LT deleted entries. */
   uint32_t del_sum;
   /*! Queue size. */
   uint32_t size;
   /*! Queue elements array address. */
   uint64_t elements;
} bcmcth_l2_ring_queue_ha_t;

#define BCMCTH_L2_RING_QUEUE_HA_T_ID 0xcb8398484a6a96c2

typedef struct {
   /*! Block validation. */
   uint32_t signature;
   /*! Ring queue array size. */
   uint32_t array_size;
   /*! Ring queue array. */
   bcmcth_l2_ring_queue_ha_t rq[];
} bcmcth_l2_cache_ha_t;

#define BCMCTH_L2_CACHE_HA_T_ID 0x44a32089487190f4

#endif /* L2_HA_H */
