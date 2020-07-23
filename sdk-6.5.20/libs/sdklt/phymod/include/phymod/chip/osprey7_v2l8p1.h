/*
 *         
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#ifndef _OSPREY7_V2L8P1_H__H_
#define _OSPREY7_V2L8P1_H__H_

#include <phymod/phymod_definitions.h>
/*Initialize phymod module*/
int osprey7_v2l8p1_core_identify(const phymod_core_access_t* core, uint32_t core_id, uint32_t* is_identified);

/*Retrive core information*/
int osprey7_v2l8p1_core_info_get(const phymod_core_access_t* core, phymod_core_info_t* info);

/*Set\get lane mapping*/
int osprey7_v2l8p1_core_lane_map_set(const phymod_core_access_t* core, const phymod_lane_map_t* lane_map);
int osprey7_v2l8p1_core_lane_map_get(const phymod_core_access_t* core, phymod_lane_map_t* lane_map);

/*Reset Core*/
int osprey7_v2l8p1_core_reset_set(const phymod_core_access_t* core, phymod_reset_mode_t reset_mode, phymod_reset_direction_t direction);
int osprey7_v2l8p1_core_reset_get(const phymod_core_access_t* core, phymod_reset_mode_t reset_mode, phymod_reset_direction_t* direction);

/*Set\get firmware operation mode*/
int osprey7_v2l8p1_phy_firmware_lane_config_set(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t fw_lane_config);
int osprey7_v2l8p1_phy_firmware_lane_config_get(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t* fw_lane_config);

/* re-tune rx path*/
int osprey7_v2l8p1_phy_rx_restart(const phymod_phy_access_t* phy);

/*Set phy polarity*/
int osprey7_v2l8p1_phy_polarity_set(const phymod_phy_access_t* phy, const phymod_polarity_t* polarity);
int osprey7_v2l8p1_phy_polarity_get(const phymod_phy_access_t* phy, phymod_polarity_t* polarity);

/*Set\Get TX Parameters*/
int osprey7_v2l8p1_phy_tx_set(const phymod_phy_access_t* phy, const phymod_tx_t* tx);
int osprey7_v2l8p1_phy_tx_get(const phymod_phy_access_t* phy, phymod_tx_t* tx);

/*Set\Get TX override Parameters*/
int osprey7_v2l8p1_phy_tx_override_set(const phymod_phy_access_t* phy, const phymod_tx_override_t* tx_override);
int osprey7_v2l8p1_phy_tx_override_get(const phymod_phy_access_t* phy, phymod_tx_override_t* tx_override);

/*Set\Get RX Parameters*/
int osprey7_v2l8p1_phy_rx_set(const phymod_phy_access_t* phy, const phymod_rx_t* rx);
int osprey7_v2l8p1_phy_rx_get(const phymod_phy_access_t* phy, phymod_rx_t* rx);

/*PHY Rx adaptation resume*/
int osprey7_v2l8p1_phy_rx_adaptation_resume(const phymod_phy_access_t* phy);

/*TX transmission control*/
int osprey7_v2l8p1_phy_tx_lane_control_set(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t tx_control);
int osprey7_v2l8p1_phy_tx_lane_control_get(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t* tx_control);

/*Rx control*/
int osprey7_v2l8p1_phy_rx_lane_control_set(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t rx_control);
int osprey7_v2l8p1_phy_rx_lane_control_get(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t* rx_control);

/*Set\Get CL72*/
int osprey7_v2l8p1_phy_cl72_set(const phymod_phy_access_t* phy, uint32_t cl72_en);
int osprey7_v2l8p1_phy_cl72_get(const phymod_phy_access_t* phy, uint32_t* cl72_en);

/*Get CL72 status*/
int osprey7_v2l8p1_phy_cl72_status_get(const phymod_phy_access_t* phy, phymod_cl72_status_t* status);

/*Core Initialization*/
int osprey7_v2l8p1_core_init(const phymod_core_access_t* core, const phymod_core_init_config_t* init_config, const phymod_core_status_t* core_status);

/*Core vco freq get function*/
int osprey7_v2l8p1_phy_pll_multiplier_get(const phymod_phy_access_t* phy, uint32_t* core_vco_pll_multiplier);

/*Phy Initialization*/
int osprey7_v2l8p1_phy_init(const phymod_phy_access_t* phy, const phymod_phy_init_config_t* init_config);

/*Set\get loopback mode*/
int osprey7_v2l8p1_phy_loopback_set(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t enable);
int osprey7_v2l8p1_phy_loopback_get(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t* enable);

/*Get rx pmd locked indication*/
int osprey7_v2l8p1_phy_rx_pmd_locked_get(const phymod_phy_access_t* phy, uint32_t* rx_pmd_locked);

/*Get rx pmd locked indication*/
int osprey7_v2l8p1_phy_rx_signal_detect_get(const phymod_phy_access_t* phy, uint32_t* rx_signal_detect);

/*Read phymod register*/
int osprey7_v2l8p1_phy_reg_read(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t* val);

/*Write phymod register*/
int osprey7_v2l8p1_phy_reg_write(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t val);

/*eye margin estimate get*/
int osprey7_v2l8p1_phy_eye_margin_est_get(const phymod_phy_access_t* phy, phymod_eye_margin_mode_t eye_margin_mode, uint32_t* value);

/*Set the interface mode, speed and other configuration related to interface.*/
int osprey7_v2l8p1_phy_speed_config_set(const phymod_phy_access_t* phy, const phymod_phy_speed_config_t* speed_config, const phymod_phy_pll_state_t* old_pll_state, phymod_phy_pll_state_t* new_pll_state);
int osprey7_v2l8p1_phy_speed_config_get(const phymod_phy_access_t* phy, phymod_phy_speed_config_t* speed_config);

/* get PMD micro code and length*/
int osprey7_v2l8p1_phy_firmware_load_info_get(const phymod_phy_access_t* phy, phymod_firmware_load_info_t* info);

/* enable tx pam4 precoder for extended reach channel*/
int osprey7_v2l8p1_phy_tx_pam4_precoder_enable_set(const phymod_phy_access_t* phy, int enable);
int osprey7_v2l8p1_phy_tx_pam4_precoder_enable_get(const phymod_phy_access_t* phy, int* enable);

/* Locks TX on RX */
int osprey7_v2l8p1_phy_tx_phase_lock_set(const phymod_phy_access_t* phy, uint8_t enable);

/* Power down PLL*/
int osprey7_v2l8p1_phy_pll_pwrdn(const phymod_phy_access_t* phy, uint32_t pll_index, uint32_t pwrdn);

/*Get rx ppm*/
int osprey7_v2l8p1_phy_rx_ppm_get(const phymod_phy_access_t* phy, int16_t* rx_ppm);

/*Set/Get the channel loss hint for PAM4 speed */
int osprey7_v2l8p1_phy_channel_loss_hint_set(const phymod_phy_access_t* phy, uint32_t channel_loss);
int osprey7_v2l8p1_phy_channel_loss_hint_get(const phymod_phy_access_t* phy, uint32_t* channel_loss);

/* initialize the PMD info data structure */
int osprey7_v2l8p1_phy_pmd_info_init(const phymod_phy_access_t* phy);

/*Get PLL power down*/
int osprey7_v2l8p1_phy_pll_powerdown_get(const phymod_phy_access_t* phy, uint32_t pll_index, uint32_t* powerdown);

#endif /*_OSPREY7_V2L8P1_H_*/
