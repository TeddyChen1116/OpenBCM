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
#include <shr/shr_types.h>
#ifndef BCMCFG_FEATURE_CTL_HA_PRIVATE_H
#define BCMCFG_FEATURE_CTL_HA_PRIVATE_H
#include <bcmcfg/generated/bcmcfg_feature_ctl_ha_config.h>

/*! \file bcmcfg_feature_ctl_ha_private.h
 *
 * \brief Private HA functions for feature control
 */


/*!
 * \brief Feature control HA configuration getter.
 *
 * Get HA configuration data for feature control.
 *
 * \param [in] ptr        Pointer to HA block.
 *
 * \return HA configuration data for feature control.
 */
extern const bcmcfg_feature_ctl_ha_config_t *
bcmcfg_feature_ctl_ha_config_get(uint8_t *ptr);


/*!
 * \brief Feature control HA configuration setter.
 *
 * Set HA configuration data for feature control.
 *
 * \param [in] ptr        Pointer to HA block.
 * \param [in] config     Config data.
 *
 * \retval 0  OK
 */
extern int
bcmcfg_feature_ctl_ha_config_set(uint8_t *ptr, bcmcfg_feature_ctl_ha_config_t *config);

#endif /* BCMCFG_FEATURE_CTL_HA_PRIVATE_H */
