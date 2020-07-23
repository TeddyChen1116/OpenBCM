/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mirror/bcm56780_a0/bcm56780_a0_MIRROR_ENCAP_INSTANCE.map.ltl for
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
#include <bcmltd/bcmltd_handler.h>
/* MIRROR_ENCAP_INSTANCE field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_mirror_encap_instance_map_field_data_mmd[] = {
    { /* 0 MIRROR_ENCAP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 1 EGR */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_mirror_encap_instance_map_field_data = {
    .fields = 2,
    .field = bcm56780_a0_lrd_mirror_encap_instance_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_mirror_encap_instancet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 15,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_mirror_encap_instancet_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_lrd_mirror_encap_instancet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_copy_field_src_field_desc_s7[1] = {
    {
        .field_id  = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_copy_field_mirror_encap_instance_dst_field_desc_d1[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s7_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S7_D1_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_copy_field_src_field_desc_s7,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_copy_field_mirror_encap_instance_dst_field_desc_d1,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s7_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_REV_S7_D1_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_copy_field_mirror_encap_instance_dst_field_desc_d1,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_copy_field_src_field_desc_s7,
};


static const bcmlrd_map_entry_t bcm56780_a0_lrd_mirror_encap_instancet_epre_edev_config_mirror_type_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
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
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
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
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
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
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
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
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 4,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
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
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 5,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
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
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
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
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 8,
            .maxbit    = 8,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 9,
            .maxbit    = 9,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 10,
            .maxbit    = 10,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 11,
            .maxbit    = 11,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 12,
            .maxbit    = 12,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 13,
            .maxbit    = 13,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 14,
            .maxbit    = 14,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_SESSION_TYPEf,
            .field_idx = 0,
            .minbit    = 15,
            .maxbit    = 15,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s7_d1 */
                .desc = &bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s7_d1_desc,
            },
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s7_d1 */
                .desc = &bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s7_d1_desc,
            },
        },
    },
};
const bcmlrd_field_selector_t bcm56780_a0_lrd_mirror_encap_instance_map_select[] = {
    { /* Node:0, Type:ROOT, MIRROR_ENCAP_ID */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 0,
        .selection_parent = 0,
        .group = 0,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 0
    },
    { /* Node:2, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 1,
        .selection_parent = 0,
        .group = 1,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 1
    },
    { /* Node:3, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 2,
        .selection_parent = 0,
        .group = 2,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 2
    },
    { /* Node:4, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 3,
        .selection_parent = 0,
        .group = 3,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 3
    },
    { /* Node:5, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 4,
        .selection_parent = 0,
        .group = 4,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 4
    },
    { /* Node:6, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 5,
        .selection_parent = 0,
        .group = 5,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 5
    },
    { /* Node:7, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 6,
        .selection_parent = 0,
        .group = 6,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 6
    },
    { /* Node:8, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 7,
        .selection_parent = 0,
        .group = 7,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 7
    },
    { /* Node:9, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 8,
        .selection_parent = 0,
        .group = 8,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 8
    },
    { /* Node:10, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 9,
        .selection_parent = 0,
        .group = 9,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 9
    },
    { /* Node:11, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 10,
        .selection_parent = 0,
        .group = 10,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 10
    },
    { /* Node:12, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 11,
        .selection_parent = 0,
        .group = 11,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 11
    },
    { /* Node:13, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 12,
        .selection_parent = 0,
        .group = 12,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 12
    },
    { /* Node:14, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 13,
        .selection_parent = 0,
        .group = 13,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 13
    },
    { /* Node:15, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 14,
        .selection_parent = 0,
        .group = 14,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 14
    },
    { /* Node:16, Type:Directmap, EGR:EPRE_EDEV_CONFIG_MIRROR_TYPE.MIRROR_SESSION_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = MIRROR_ENCAP_INSTANCEt_EGRf,
        .group_index = 0,
        .entry_index = 15,
        .selection_parent = 0,
        .group = 15,
        .selector_id = MIRROR_ENCAP_INSTANCEt_MIRROR_ENCAP_IDf,
        .selector_value = 15
    },
};

const bcmlrd_field_selector_data_t bcm56780_a0_lrd_mirror_encap_instance_map_select_data = {
    .num_field_selector = 17,
    .field_selector = bcm56780_a0_lrd_mirror_encap_instance_map_select,
};

static const bcmlrd_map_group_t bcm56780_a0_lrd_mirror_encap_instance_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EPRE_EDEV_CONFIG_MIRROR_TYPEr,
        },
        .entries = 18,
        .entry = bcm56780_a0_lrd_mirror_encap_instancet_epre_edev_config_mirror_type_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_mirror_encap_instance_map = {
    .src_id = MIRROR_ENCAP_INSTANCEt,
    .field_data = &bcm56780_a0_lrd_mirror_encap_instance_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_lrd_mirror_encap_instance_map_group,
    .table_attr = &bcm56780_a0_lrd_mirror_encap_instancet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56780_a0_lrd_mirror_encap_instance_map_select_data,
};
