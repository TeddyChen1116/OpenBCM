/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_diagnostic_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_SOC_ARAD_TM_ARAD_EGR_PORTS_DIAGNOSTIC_H_
#define _SHR_SW_STATE_DPP_SOC_ARAD_TM_ARAD_EGR_PORTS_DIAGNOSTIC_H_

#ifdef BCM_WARM_BOOT_API_TEST
/********************************* diagnostic calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the diagnostic calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the diagnostic struct by 'sw_state_diagnostic_cb_init'.                  */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_dump_cb)(
    int unit, int tm_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_port_reserved_reassembly_context_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_port_reserved_reassembly_context_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int port_priority_cal_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_valid_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_valid_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int port_priority_cal_idx_0, int queue_rate_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_rates_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_rates_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int port_priority_cal_idx_0, int queue_rate_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_bursts_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_bursts_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int port_priority_cal_idx_0, int queue_rate_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int tcg_cal_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_valid_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_valid_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int tcg_cal_idx_0, int tcg_rate_idx_0, int tcg_rate_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_rates_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_rates_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int tcg_cal_idx_0, int tcg_rate_idx_0, int tcg_rate_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_bursts_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_bursts_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int tcg_cal_idx_0, int tcg_rate_idx_0, int tcg_rate_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_valid_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_valid_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int rates_idx_0, int rates_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_sch_rates_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_sch_rates_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int rates_idx_0, int rates_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_rates_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_rates_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int rates_idx_0, int rates_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_bursts_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_bursts_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int rates_idx_0, int rates_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_priority_shaper_rate_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_priority_shaper_rate_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int port_priority_idx_0, int port_priority_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_valid_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_valid_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int port_priority_idx_0, int port_priority_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_nof_calcal_instances_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_nof_calcal_instances_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int chan_arb_idx_0, int chan_arb_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_calcal_length_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_calcal_length_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_egq_tcg_qpair_shaper_enable_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_egq_tcg_qpair_shaper_enable_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_erp_interface_id_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_erp_interface_id_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_ports_prog_editor_profile_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_ports_prog_editor_profile_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_tcg_shaper_rate_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_tcg_shaper_rate_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int tcg_shaper_idx_0, int tcg_shaper_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_valid_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_valid_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0, int tcg_shaper_idx_0, int tcg_shaper_idx_1);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_chanif2chan_arb_occ_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_chanif2chan_arb_occ_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_nonchanif2sch_offset_occ_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_nonchanif2sch_offset_occ_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_channelized_cals_occ_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_channelized_cals_occ_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_channelized_cals_occ_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_channelized_cals_occ_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_e2e_interfaces_occ_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_e2e_interfaces_occ_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_e2e_interfaces_occ_dump */
typedef int (*sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_e2e_interfaces_occ_dump_cb)(
    int unit, int tm_idx_0, int arad_egr_ports_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

/*********************************** diagnostic calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the diagnostic layer for the entire SW state.*/
/* use this tree to dump fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_port_reserved_reassembly_context_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_reserved_reassembly_context_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_port_reserved_reassembly_context_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_valid_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_valid_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_valid_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_rates_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_rates_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_rates_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_bursts_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_bursts_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_bursts_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_dump_cb dump;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_valid_diagnostic_cbs_t valid;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_rates_diagnostic_cbs_t egq_rates;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_egq_bursts_diagnostic_cbs_t egq_bursts;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_dump_cb dump;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_queue_rate_diagnostic_cbs_t queue_rate;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_valid_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_valid_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_valid_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_rates_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_rates_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_rates_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_bursts_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_bursts_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_bursts_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_dump_cb dump;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_valid_diagnostic_cbs_t valid;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_rates_diagnostic_cbs_t egq_rates;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_egq_bursts_diagnostic_cbs_t egq_bursts;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_dump_cb dump;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_tcg_rate_diagnostic_cbs_t tcg_rate;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_valid_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_valid_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_valid_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_sch_rates_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_sch_rates_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_sch_rates_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_rates_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_rates_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_rates_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_bursts_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_bursts_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_bursts_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_dump_cb dump;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_valid_diagnostic_cbs_t valid;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_sch_rates_diagnostic_cbs_t sch_rates;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_rates_diagnostic_cbs_t egq_rates;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_egq_bursts_diagnostic_cbs_t egq_bursts;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_priority_shaper_rate_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_priority_shaper_rate_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_priority_shaper_rate_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_valid_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_valid_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_valid_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_dump_cb dump;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_priority_shaper_rate_diagnostic_cbs_t priority_shaper_rate;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_valid_diagnostic_cbs_t valid;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_nof_calcal_instances_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_nof_calcal_instances_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_nof_calcal_instances_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_dump_cb dump;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_nof_calcal_instances_diagnostic_cbs_t nof_calcal_instances;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_calcal_length_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_calcal_length_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_calcal_length_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_egq_tcg_qpair_shaper_enable_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_egq_tcg_qpair_shaper_enable_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_egq_tcg_qpair_shaper_enable_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_erp_interface_id_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_erp_interface_id_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_erp_interface_id_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_ports_prog_editor_profile_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_ports_prog_editor_profile_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_ports_prog_editor_profile_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_tcg_shaper_rate_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_tcg_shaper_rate_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_tcg_shaper_rate_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_valid_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_valid_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_valid_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_dump_cb dump;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_tcg_shaper_rate_diagnostic_cbs_t tcg_shaper_rate;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_valid_diagnostic_cbs_t valid;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_chanif2chan_arb_occ_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_chanif2chan_arb_occ_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_chanif2chan_arb_occ_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_nonchanif2sch_offset_occ_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_nonchanif2sch_offset_occ_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_nonchanif2sch_offset_occ_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_channelized_cals_occ_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_channelized_cals_occ_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_channelized_cals_occ_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_channelized_cals_occ_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_channelized_cals_occ_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_channelized_cals_occ_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_e2e_interfaces_occ_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_e2e_interfaces_occ_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_e2e_interfaces_occ_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_e2e_interfaces_occ_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_e2e_interfaces_occ_dump_cb dump;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_e2e_interfaces_occ_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_tm_arad_egr_ports_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_tm_arad_egr_ports_dump_cb dump;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_reserved_reassembly_context_diagnostic_cbs_t port_reserved_reassembly_context;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_cal_diagnostic_cbs_t port_priority_cal;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_cal_diagnostic_cbs_t tcg_cal;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_rates_diagnostic_cbs_t rates;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_port_priority_diagnostic_cbs_t port_priority;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_chan_arb_diagnostic_cbs_t chan_arb;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_calcal_length_diagnostic_cbs_t calcal_length;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_egq_tcg_qpair_shaper_enable_diagnostic_cbs_t egq_tcg_qpair_shaper_enable;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_erp_interface_id_diagnostic_cbs_t erp_interface_id;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_ports_prog_editor_profile_diagnostic_cbs_t ports_prog_editor_profile;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_tcg_shaper_diagnostic_cbs_t tcg_shaper;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_chanif2chan_arb_occ_diagnostic_cbs_t chanif2chan_arb_occ;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_nonchanif2sch_offset_occ_diagnostic_cbs_t nonchanif2sch_offset_occ;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_channelized_cals_occ_diagnostic_cbs_t channelized_cals_occ;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_channelized_cals_occ_diagnostic_cbs_t modified_channelized_cals_occ;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_e2e_interfaces_occ_diagnostic_cbs_t e2e_interfaces_occ;
    sw_state_dpp_soc_arad_tm_arad_egr_ports_modified_e2e_interfaces_occ_diagnostic_cbs_t modified_e2e_interfaces_occ;
} sw_state_dpp_soc_arad_tm_arad_egr_ports_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

int sw_state_dpp_soc_arad_tm_arad_egr_ports_diagnostic_cb_init(int unit);

#endif /* BCM_WARM_BOOT_API_TEST */

#endif /* _SHR_SW_STATE_DPP_SOC_ARAD_TM_ARAD_EGR_PORTS_DIAGNOSTIC_H_ */
