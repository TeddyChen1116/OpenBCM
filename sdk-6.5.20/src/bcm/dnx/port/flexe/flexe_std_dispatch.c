
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

#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX family only!"
#endif /* BCM_DNX_SUPPORT */

#include <bcm_int/dnx/algo/swstate/auto_generated/access/dnx_algo_flexe_core_access.h>
#include <bcm_int/dnx/port/flexe/flexe_core.h>
#include <bcm_int/dnx/port/flexe/flexe_core_dispatch.h>

#ifdef INCLUDE_FLEXE

#include <bcm_int/dnx/port/flexe/flexe_std.h>

#include <bcm_int/dnx/port/flexe/flexe_std.h>

const __flexe_core__dispatch__t__ flexe_core_flexe_std_driver = {

    flexe_std_init,
    flexe_std_deinit,
    flexe_std_group_phy_add,
    flexe_std_group_phy_remove,
    flexe_std_client_add,
    flexe_std_client_delete,
    flexe_std_mac_client_add,
    flexe_std_mac_client_delete,
    flexe_std_sar_client_add,
    flexe_std_sar_client_delete,
    flexe_std_rateadpt_slots_add,
    flexe_std_rateadpt_slots_delete,
    flexe_std_sar_channel_map_set,
    flexe_std_66b_switch_set,
    flexe_std_oh_logical_phy_id_set,
    flexe_std_oh_logical_phy_id_get,
    flexe_std_oh_group_id_set,
    flexe_std_oh_group_id_get,
    flexe_std_oh_client_id_set,
    flexe_std_oh_client_id_get,
    flexe_std_oh_phymap_set,
    flexe_std_oh_cr_bit_set,
    flexe_std_oh_cr_bit_get,
    flexe_std_oh_ca_bit_set,
    flexe_std_oh_ca_bit_get,
    flexe_std_oh_c_bit_set,
    flexe_std_oh_c_bit_get,
    flexe_std_oh_sc_bit_set,
    flexe_std_oh_sc_bit_get,
    flexe_std_active_calendar_set,
    flexe_std_active_calendar_get,
    flexe_std_oh_alarm_status_get,
    flexe_std_oh_cal_mismatch_ts_get,
    flexe_std_oam_alarm_status_get,
    flexe_std_oam_alarm_enable_set,
    flexe_std_oam_base_period_set,
    flexe_std_oam_base_period_get,
    flexe_std_oam_base_insert_enable_set,
    flexe_std_oam_base_insert_enable_get,
    flexe_std_oam_bypass_enable_set,
    flexe_std_oam_bypass_enable_get,
    flexe_std_sar_oam_bypass_enable_set,
    flexe_std_sar_oam_bypass_enable_get,
    flexe_std_oam_local_fault_insert_set,
    flexe_std_oam_local_fault_insert_get,
    flexe_std_oam_remote_fault_insert_set,
    flexe_std_oam_remote_fault_insert_get,
    flexe_std_oam_sd_alm_block_num_set,
    flexe_std_oam_sd_alm_block_num_get,
    flexe_std_oam_sd_alm_trigger_thr_set,
    flexe_std_oam_sd_alm_trigger_thr_get,
    flexe_std_oam_sd_alm_clear_thr_set,
    flexe_std_oam_sd_alm_clear_thr_get,
    flexe_std_oam_sf_bip8_alm_block_num_set,
    flexe_std_oam_sf_bip8_alm_block_num_get,
    flexe_std_oam_sf_bip8_alm_trigger_thr_set,
    flexe_std_oam_sf_bip8_alm_trigger_thr_get,
    flexe_std_oam_sf_bip8_alm_clear_thr_set,
    flexe_std_oam_sf_bip8_alm_clear_thr_get,
    flexe_std_oam_sd_bei_alm_block_num_set,
    flexe_std_oam_sd_bei_alm_block_num_get,
    flexe_std_oam_sd_bei_alm_trigger_thr_set,
    flexe_std_oam_sd_bei_alm_trigger_thr_get,
    flexe_std_oam_sd_bei_alm_clear_thr_set,
    flexe_std_oam_sd_bei_alm_clear_thr_get,
    flexe_std_oam_sf_bei_alm_block_num_set,
    flexe_std_oam_sf_bei_alm_block_num_get,
    flexe_std_oam_sf_bei_alm_trigger_thr_set,
    flexe_std_oam_sf_bei_alm_trigger_thr_get,
    flexe_std_oam_sf_bei_alm_clear_thr_set,
    flexe_std_oam_sf_bei_alm_clear_thr_get,
    flexe_std_oam_bip8_counter_get,
    flexe_std_oam_bei_counter_get,
    flexe_std_oam_pkt_count_get,
    flexe_std_oam_base_pkt_count_get,
    flexe_std_phy_default_config_set,
    flexe_std_oam_alarm_collection_timer_step_set,
    flexe_std_oam_alarm_collection_timer_step_get,
    flexe_std_oam_alarm_collection_step_count_set,
    flexe_std_oam_alarm_collection_step_count_get,
    flexe_std_sar_cell_mode_set,
    flexe_std_sar_cell_mode_get,
    flexe_std_channel_map_set,
    flexe_std_client_local_fault_get,
    flexe_std_client_remote_fault_get,
    flexe_std_sar_client_local_fault_get,
    flexe_std_sar_client_remote_fault_get,
};

#endif /* INCLUDE_FLEXE */
