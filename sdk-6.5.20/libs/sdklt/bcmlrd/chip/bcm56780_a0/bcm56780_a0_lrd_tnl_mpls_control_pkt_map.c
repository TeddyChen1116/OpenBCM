/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tnl/bcm56780_a0/bcm56780_a0_TNL_MPLS_CONTROL_PKT.map.ltl for
 *      bcm56780_a0
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
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56780_a0_lrd_enumpool.h"
/* TNL_MPLS_CONTROL_PKT field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_tnl_mpls_control_pkt_map_field_data_mmd[] = {
    { /* 0 TNL_MPLS_CONTROL_PKT_ID_0 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 1 TNL_MPLS_CONTROL_PKT_ID_0_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 TNL_MPLS_CONTROL_PKT_ID_1 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 3 TNL_MPLS_CONTROL_PKT_ID_1_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 4 TNL_MPLS_CONTROL_PKT_ID_2 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 TNL_MPLS_CONTROL_PKT_ID_2_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 6 TNL_MPLS_CONTROL_PKT_ID_3 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 TNL_MPLS_CONTROL_PKT_ID_3_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 8 TNL_MPLS_CONTROL_PKT_ID_4 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 9 TNL_MPLS_CONTROL_PKT_ID_4_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 10 TNL_MPLS_CONTROL_PKT_ID_5 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 11 TNL_MPLS_CONTROL_PKT_ID_5_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 12 ENTRY_PRIORITY */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x7fffffff,
      .depth = 0,
      .width = 31,
      .edata = NULL,
    },
    { /* 13 SEQ_NUM_CHECK */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 14 CW_PRESENT */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 15 CONTROL_PKT */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 16 CONTROL_PKT_TYPE */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 17 COPY_TO_CPU */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 18 DROP */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_tnl_mpls_control_pkt_map_field_data = {
    .fields = 19,
    .field = bcm56780_a0_lrd_tnl_mpls_control_pkt_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_tnl_mpls_control_pktt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 15,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_tnl_mpls_control_pktt_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_lrd_tnl_mpls_control_pktt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_lrd_tnl_mpls_control_pktt_mpls_ctrl_pkt_proc_tcam_only_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_0f,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 4,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_1f,
            .field_idx = 0,
            .minbit    = 5,
            .maxbit    = 8,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_2f,
            .field_idx = 0,
            .minbit    = 9,
            .maxbit    = 12,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_2f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_3f,
            .field_idx = 0,
            .minbit    = 13,
            .maxbit    = 16,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_3f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_4f,
            .field_idx = 0,
            .minbit    = 17,
            .maxbit    = 20,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_4f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_5f,
            .field_idx = 0,
            .minbit    = 21,
            .maxbit    = 24,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_5f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_0_MASKf,
            .field_idx = 0,
            .minbit    = 25,
            .maxbit    = 28,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_0_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_1_MASKf,
            .field_idx = 0,
            .minbit    = 29,
            .maxbit    = 32,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_1_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_2_MASKf,
            .field_idx = 0,
            .minbit    = 33,
            .maxbit    = 36,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_2_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_3_MASKf,
            .field_idx = 0,
            .minbit    = 37,
            .maxbit    = 40,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_3_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_4_MASKf,
            .field_idx = 0,
            .minbit    = 41,
            .maxbit    = 44,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_4_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY_4BIT_5_MASKf,
            .field_idx = 0,
            .minbit    = 45,
            .maxbit    = 48,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_TNL_MPLS_CONTROL_PKT_ID_5_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_ENTRY_PRIORITY,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 30,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_ENTRY_PRIORITYf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 30,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56780_a0_lrd_tnl_mpls_control_pktt_mpls_ctrl_pkt_proc_tcam_policy_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SEQ_NUM_CHECK_ENABLEf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_SEQ_NUM_CHECKf,
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
            .field_id  = CW_PRESENTf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_CW_PRESENTf,
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
            .field_id  = CONTROL_PKTf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_CONTROL_PKTf,
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
            .field_id  = CONTROL_PKT_TYPEf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 4,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_CONTROL_PKT_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = COPY_TO_CPUf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_COPY_TO_CPUf,
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
            .field_id  = DROPf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_MPLS_CONTROL_PKTt_DROPf,
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
static const bcmlrd_map_group_t bcm56780_a0_lrd_tnl_mpls_control_pkt_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MPLS_CTRL_PKT_PROC_TCAM_ONLYm,
        },
        .entries = 14,
        .entry = bcm56780_a0_lrd_tnl_mpls_control_pktt_mpls_ctrl_pkt_proc_tcam_only_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MPLS_CTRL_PKT_PROC_TCAM_POLICYm,
        },
        .entries = 6,
        .entry = bcm56780_a0_lrd_tnl_mpls_control_pktt_mpls_ctrl_pkt_proc_tcam_policy_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_tnl_mpls_control_pkt_map = {
    .src_id = TNL_MPLS_CONTROL_PKTt,
    .field_data = &bcm56780_a0_lrd_tnl_mpls_control_pkt_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_lrd_tnl_mpls_control_pkt_map_group,
    .table_attr = &bcm56780_a0_lrd_tnl_mpls_control_pktt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};