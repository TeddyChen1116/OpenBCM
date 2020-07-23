/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56990_b0/bcm56990_b0_MON_ETRAP_QUEUE_ASSIGNMENT.map.ltl for
 *      bcm56990_b0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_b0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_b0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* MON_ETRAP_QUEUE_ASSIGNMENT field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_mon_etrap_queue_assignment_map_field_data_mmd[] = {
    { /* 0 INT_PRI */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 16,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 PORT_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 272,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 IPV4_TCP */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 IPV4_UDP */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 4 IPV4_OTHER */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 IPV6_TCP */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 IPV6_UDP */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 7 IPV6_OTHER */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 8 MPLS */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 9 NON_IPV4_IPV6_MPLS */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_mon_etrap_queue_assignment_map_field_data = {
    .fields = 10,
    .field = bcm56990_b0_lrd_mon_etrap_queue_assignment_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_mon_etrap_queue_assignmentt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_mon_etrap_queue_assignmentt_attr_group = {
    .attributes = 1,
    .attr = bcm56990_b0_lrd_mon_etrap_queue_assignmentt_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_src_field_desc_s6[1] = {
    {
        .field_id  = MON_ETRAP_QUEUE_ASSIGNMENTt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_mon_etrap_queue_assignment_dst_field_desc_d2[1] = {
    {
        .field_id  = EGR_PORT_BMP_ENf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 271,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_src_field_desc_s5[1] = {
    {
        .field_id  = MON_ETRAP_QUEUE_ASSIGNMENTt_INT_PRIf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_mon_etrap_queue_assignment_dst_field_desc_d3[1] = {
    {
        .field_id  = INT_PRI_BMP_ENf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_fwd_s6_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_MON_ETRAP_ARRAY_TO_BMP_XFRM_HANDLER_FWD_S6_D2_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_src_field_desc_s6,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_mon_etrap_queue_assignment_dst_field_desc_d2,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_rev_s6_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_MON_ETRAP_ARRAY_TO_BMP_XFRM_HANDLER_REV_S6_D2_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_mon_etrap_queue_assignment_dst_field_desc_d2,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_src_field_desc_s6,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_fwd_s5_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_MON_ETRAP_ARRAY_TO_BMP_XFRM_HANDLER_FWD_S5_D3_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_src_field_desc_s5,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_mon_etrap_queue_assignment_dst_field_desc_d3,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_rev_s5_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_MON_ETRAP_ARRAY_TO_BMP_XFRM_HANDLER_REV_S5_D3_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_mon_etrap_queue_assignment_dst_field_desc_d3,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_mon_etrap_array_to_bmp_src_field_desc_s5,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_mon_etrap_queue_assignmentt_etrap_queue_en_egr_port_bmp_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_fwd_s6_d2 */
                .desc = &bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_fwd_s6_d2_desc,
            },
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_rev_s6_d2 */
                .desc = &bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_rev_s6_d2_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t bcm56990_b0_lrd_mon_etrap_queue_assignmentt_etrap_queue_en_int_pri_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_fwd_s5_d3 */
                .desc = &bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_fwd_s5_d3_desc,
            },
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_rev_s5_d3 */
                .desc = &bcm56990_b0_lta_bcmltx_mon_etrap_array_to_bmp_xfrm_handler_rev_s5_d3_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t bcm56990_b0_lrd_mon_etrap_queue_assignmentt_etrap_queue_en_pkt_type_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV4_TCP_ENf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_ETRAP_QUEUE_ASSIGNMENTt_IPV4_TCPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV4_UDP_ENf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_ETRAP_QUEUE_ASSIGNMENTt_IPV4_UDPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV4_OTHER_ENf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_ETRAP_QUEUE_ASSIGNMENTt_IPV4_OTHERf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6_TCP_ENf,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 4,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_ETRAP_QUEUE_ASSIGNMENTt_IPV6_TCPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6_UDP_ENf,
            .field_idx = 0,
            .minbit    = 5,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_ETRAP_QUEUE_ASSIGNMENTt_IPV6_UDPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPV6_OTHER_ENf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_ETRAP_QUEUE_ASSIGNMENTt_IPV6_OTHERf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MPLS_ENf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_ETRAP_QUEUE_ASSIGNMENTt_MPLSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PKT_TYPE_OTHER_ENf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_ETRAP_QUEUE_ASSIGNMENTt_NON_IPV4_IPV6_MPLSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_mon_etrap_queue_assignment_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ETRAP_QUEUE_EN_EGR_PORT_BMPm,
        },
        .entries = 2,
        .entry = bcm56990_b0_lrd_mon_etrap_queue_assignmentt_etrap_queue_en_egr_port_bmp_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ETRAP_QUEUE_EN_INT_PRIr,
        },
        .entries = 2,
        .entry = bcm56990_b0_lrd_mon_etrap_queue_assignmentt_etrap_queue_en_int_pri_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ETRAP_QUEUE_EN_PKT_TYPEr,
        },
        .entries = 8,
        .entry = bcm56990_b0_lrd_mon_etrap_queue_assignmentt_etrap_queue_en_pkt_type_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_mon_etrap_queue_assignment_map = {
    .src_id = MON_ETRAP_QUEUE_ASSIGNMENTt,
    .field_data = &bcm56990_b0_lrd_mon_etrap_queue_assignment_map_field_data,
    .groups = 3,
    .group  = bcm56990_b0_lrd_mon_etrap_queue_assignment_map_group,
    .table_attr = &bcm56990_b0_lrd_mon_etrap_queue_assignmentt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
