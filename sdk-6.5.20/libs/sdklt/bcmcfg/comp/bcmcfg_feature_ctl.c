/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by cfg from component configuration definition files.
 *
 * Tool: $SDK/INTERNAL/cfg/bin/cfg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <sal/sal_types.h>
#include <sal/sal_libc.h>
#include <shr/shr_error.h>
#include <bcmcfg/bcmcfg_types.h>
#include <bcmcfg/bcmcfg_internal.h>
#include <bcmcfg/comp/bcmcfg_feature_ctl.h>
#include "bcmcfg_feature_ctl_scanner.h"
#include <bcmcfg/comp/bcmcfg_comp_scanner_conf.h>
static const bcmcfg_comp_node_t bcmcfg_feature_ctl_schema[] = {
    {
        .node = BCMCFG_COMP_MAP,
        .key = "feature_ctl",
        .next = BCMCFG_NO_IDX,
        .offset = 0,
        .size = sizeof(bcmcfg_feature_ctl_config_t),
    }, /* [top] 0 */
    {
        .node = BCMCFG_COMP_SCALAR,
        .key = "enable_atomic_trans",
        .next = BCMCFG_NO_IDX,
        .offset = offsetof(bcmcfg_feature_ctl_config_t, enable_atomic_trans),
        .size = sizeof(((bcmcfg_feature_ctl_config_t *)0)->enable_atomic_trans),
    }, /* enable_atomic_trans 1 */
};

static bcmcfg_feature_ctl_config_t *bcmcfg_feature_ctl_data;

static const bcmcfg_feature_ctl_config_t bcmcfg_feature_ctl_default_data =
    {
        .enable_atomic_trans = 0,
    };

const bcmcfg_comp_scanner_t bcmcfg_feature_ctl_scanner = {
    .schema_count = 2,
    .schema = bcmcfg_feature_ctl_schema,
    .data_size = sizeof(*bcmcfg_feature_ctl_data),
    .data = (uint32_t **)(char *)&bcmcfg_feature_ctl_data,
    .default_data = (uint32_t *)(char *)&bcmcfg_feature_ctl_default_data,
};

int
bcmcfg_feature_ctl_default_config_get(bcmcfg_feature_ctl_config_t *config)
{
    return bcmcfg_comp_scanner_default_config_get(&bcmcfg_feature_ctl_scanner,
                                                  sizeof(bcmcfg_feature_ctl_config_t),
                                                  (void*) config);
}

int
bcmcfg_feature_ctl_config_get(bcmcfg_feature_ctl_config_t *config)
{
    return bcmcfg_comp_scanner_config_get(&bcmcfg_feature_ctl_scanner,
                                          sizeof(bcmcfg_feature_ctl_config_t),
                                          (void*) config);
}

int
bcmcfg_feature_ctl_config_set(bcmcfg_feature_ctl_config_t *config)
{
    return bcmcfg_comp_scanner_config_set(&bcmcfg_feature_ctl_scanner,
                                          sizeof(bcmcfg_feature_ctl_config_t),
                                          (void*) config);
}

