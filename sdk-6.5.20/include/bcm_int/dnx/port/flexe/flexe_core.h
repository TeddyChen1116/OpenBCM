
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

#ifndef _FLEXE_CORE_H__H_
#define _FLEXE_CORE_H__H_

#include <soc/portmod/portmod.h>
#include <shared/shrextend/shrextend_debug.h>

/*!
 * @enum flexe_core_dispatch_type_e
 * @brief Supported Drivers 
 */
typedef enum flexe_core_dispatch_type_e
{
    flexe_coreDispatchTypeNone,
#ifdef INCLUDE_FLEXE
    flexe_coreDispatchTypeFlexe_std,
#endif                          /* INCLUDE_FLEXE */
#ifdef INCLUDE_FLEXE_DBG
    flexe_coreDispatchTypeFlexe_dbg,
#endif                          /* INCLUDE_FLEXE_DBG */
    flexe_coreDispatchTypeCount
} flexe_core_dispatch_type_t;

#ifdef FLEXE_CORE_DIAG
extern const enum_mapping_t flexe_core_dispatch_type_t_mapping[];
#endif /* FLEXE_CORE_DIAG */

/* flexe_core_dispatch_type_t validation */
int flexe_core_dispatch_type_t_validate(
    int unit,
    flexe_core_dispatch_type_t flexe_core_dispatch_type);
/*! 
 * flexe_core_init
 *
 * @brief initialize an FlexE core. 
 *
 * @param [in]  unit            - unit id
 */
shr_error_e flexe_core_init(
    int unit);

/*! 
 * flexe_core_deinit
 *
 * @brief De-initialize an FlexE core. 
 *
 * @param [in]  unit            - unit id
 */
shr_error_e flexe_core_deinit(
    int unit);

#define FLEXE_CORE_OH_ALARM_GID_MISMATCH (0x1)
#define FLEXE_CORE_OH_ALARM_PHY_NUM_MISMATCH (0x2)
#define FLEXE_CORE_OH_ALARM_LOF (0x4)
#define FLEXE_CORE_OH_ALARM_LOM (0x8)
#define FLEXE_CORE_OH_ALARM_RPF (0x10)
#define FLEXE_CORE_OH_ALARM_OH1_ALARM (0x20)
#define FLEXE_CORE_OH_ALARM_C_BIT_ALARM (0x40)
#define FLEXE_CORE_OH_ALARM_PHY_MAP_MISMATCH (0x80)
#define FLEXE_CORE_OH_ALARM_CAL_A_MISMATCH (0x100)
#define FLEXE_CORE_OH_ALARM_CAL_B_MISMATCH (0x200)
#define FLEXE_CORE_OH_ALARM_GROUP_DESKEW (0x400)
#define FLEXE_CORE_OH_ALARM_CRC (0x800)
#define FLEXE_CORE_OH_ALARM_SC_MISMATCH (0x1000)

#define FLEXE_CORE_OAM_ALARM_RX_CSF_LPI (0x1)
#define FLEXE_CORE_OAM_ALARM_RX_CS_LF (0x2)
#define FLEXE_CORE_OAM_ALARM_RX_CS_RF (0x4)
#define FLEXE_CORE_OAM_ALARM_BASE_OAM_LOS (0x8)
#define FLEXE_CORE_OAM_ALARM_RX_SDBIP (0x10)
#define FLEXE_CORE_OAM_ALARM_RX_BASE_CRC (0x20)
#define FLEXE_CORE_OAM_ALARM_RX_BASE_RDI (0x40)
#define FLEXE_CORE_OAM_ALARM_RX_BASE_PERIOD_MISMATCH (0x80)
#define FLEXE_CORE_OAM_ALARM_SDREI (0x100)
#define FLEXE_CORE_OAM_ALARM_SFBIP (0x200)
#define FLEXE_CORE_OAM_ALARM_SFREI (0x400)
#define FLEXE_CORE_OAM_ALARM_RX_LF (0x800)
#define FLEXE_CORE_OAM_ALARM_RX_RF (0x1000)

/*!
 * @enum flexe_core_port_speed_mode_e
 * @brief FlexE Core port speed mode 
 */
typedef enum flexe_core_port_speed_mode_e
{
    flexe_core_port_speed_mode_50G = 0,
    flexe_core_port_speed_mode_100G = 1,
    flexe_core_port_speed_mode_200G = 2,
    flexe_core_port_speed_mode_400G = 3,
    flexe_core_port_speed_mode_Count
} flexe_core_port_speed_mode_t;

#ifdef FLEXE_CORE_DIAG
extern const enum_mapping_t flexe_core_port_speed_mode_t_mapping[];
#endif /* FLEXE_CORE_DIAG */

/* flexe_core_port_speed_mode_t validation */
int flexe_core_port_speed_mode_t_validate(
    int unit,
    flexe_core_port_speed_mode_t flexe_core_port_speed_mode);

/*!
 * @enum flexe_core_serdes_rate_mode_e
 * @brief FlexE Core serdes rate mode 
 */
typedef enum flexe_core_serdes_rate_mode_e
{
    flexe_core_serdes_rate_mode_25G = 0,
    flexe_core_serdes_rate_mode_26G = 1,
    flexe_core_serdes_rate_mode_53G = 2,
    flexe_core_serdes_rate_mode_Count
} flexe_core_serdes_rate_mode_t;

#ifdef FLEXE_CORE_DIAG
extern const enum_mapping_t flexe_core_serdes_rate_mode_t_mapping[];
#endif /* FLEXE_CORE_DIAG */

/* flexe_core_serdes_rate_mode_t validation */
int flexe_core_serdes_rate_mode_t_validate(
    int unit,
    flexe_core_serdes_rate_mode_t flexe_core_serdes_rate_mode);

/*!
 * @struct flexe_core_port_info_s
 * @brief This struct contains the required information for flexe core port. 
 */
typedef struct flexe_core_port_info_s
{
    int is_bypass; /**< if the port is flexe bypass mode */
    int speed; /**< port speed */
    flexe_core_serdes_rate_mode_t serdes_rate_mode;
} flexe_core_port_info_t;

/* flexe_core_port_info_t initialization and validation */
int flexe_core_port_info_t_validate(
    int unit,
    const flexe_core_port_info_t * flexe_core_port_info);
int flexe_core_port_info_t_init(
    int unit,
    flexe_core_port_info_t * flexe_core_port_info);

/*! 
 * flexe_core_group_phy_add
 *
 * @brief Add FlexE core ports to FlexE group 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flags           - RX/TX
 * @param [in]  group_index     - FlexE group ID
 * @param [in]  flexe_core_port_bmp   - FlexE core port bitmap
 * @param [in]  logical_phy_id   - Logical PHY ID for FlexE core ports
 * @param [in]  port_info       - Port info for FlexE core ports
 */
shr_error_e flexe_core_group_phy_add(
    int unit,
    uint32 flags,
    int group_index,
    soc_pbmp_t flexe_core_port_bmp,
    const int *logical_phy_id,
    const flexe_core_port_info_t * port_info);

/*! 
 * flexe_core_group_phy_remove
 *
 * @brief Remove FlexE core ports from FlexE group 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flags           - RX/TX
 * @param [in]  group_index     - FlexE group ID
 * @param [in]  flexe_core_port_bmp   - FlexE core port bitmap
 */
shr_error_e flexe_core_group_phy_remove(
    int unit,
    uint32 flags,
    int group_index,
    soc_pbmp_t flexe_core_port_bmp);

/*! 
 * flexe_core_client_add
 *
 * @brief Add FlexE client to FlexE group(bus A) 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Client channel ID
 * @param [in]  flags           - RX/TX
 * @param [in]  cal_id          - Calendar ID
 * @param [in]  flexe_core_port_array   - FlexE core port array
 * @param [in]  ts_mask         - Timeslot bitmap taken by the client
 * @param [in]  nof_flexe_core_ports   - Number of FlexE core ports
 */
shr_error_e flexe_core_client_add(
    int unit,
    int client_channel,
    uint32 flags,
    int cal_id,
    const int *flexe_core_port_array,
    bcm_port_flexe_time_slot_t ts_mask,
    int nof_flexe_core_ports);

/*! 
 * flexe_core_client_delete
 *
 * @brief Delete an existing FlexE client (bus A) 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Client channel ID
 * @param [in]  flags           - RX/TX
 * @param [in]  cal_id          - Calendar ID
 * @param [in]  flexe_core_port_array   - FlexE core port array
 * @param [in]  ts_mask         - Timeslot bitmap taken by the client
 * @param [in]  nof_flexe_core_ports   - Number of FlexE core ports
 */
shr_error_e flexe_core_client_delete(
    int unit,
    int client_channel,
    uint32 flags,
    int cal_id,
    const int *flexe_core_port_array,
    bcm_port_flexe_time_slot_t ts_mask,
    int nof_flexe_core_ports);

/*! 
 * flexe_core_mac_client_add
 *
 * @brief Add a MAC client to bus B 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Client channel ID
 * @param [in]  nof_slots       - Number of timeslots taken by the channel
 */
shr_error_e flexe_core_mac_client_add(
    int unit,
    int client_channel,
    int nof_slots);

/*! 
 * flexe_core_mac_client_delete
 *
 * @brief Delete a MAC client from bus B 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Client channel ID
 * @param [in]  nof_slots       - Number of timeslots taken by the channel
 */
shr_error_e flexe_core_mac_client_delete(
    int unit,
    int client_channel,
    int nof_slots);

/*! 
 * flexe_core_sar_client_add
 *
 * @brief Add SAR client to bus C 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Client channel ID
 * @param [in]  flags           - RX/TX
 * @param [in]  ts_num          - Number of timeslots taken by the channel
 */
shr_error_e flexe_core_sar_client_add(
    int unit,
    int client_channel,
    uint32 flags,
    int ts_num);

/*! 
 * flexe_core_sar_client_delete
 *
 * @brief Delete SAR client from bus C 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Client channel ID
 * @param [in]  flags           - RX/TX
 * @param [in]  ts_num          - Number of timeslots taken by the channel
 */
shr_error_e flexe_core_sar_client_delete(
    int unit,
    int client_channel,
    uint32 flags,
    int ts_num);

/*! 
 * flexe_core_rateadpt_slots_add
 *
 * @brief Allocated time slots in rate adapter 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Client channel ID
 * @param [in]  ts_num          - Number of timeslots taken by the channel
 */
shr_error_e flexe_core_rateadpt_slots_add(
    int unit,
    int client_channel,
    int ts_num);

/*! 
 * flexe_core_rateadpt_slots_delete
 *
 * @brief Delete time slots in rate adapter 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Client channel ID
 */
shr_error_e flexe_core_rateadpt_slots_delete(
    int unit,
    int client_channel);

/*! 
 * flexe_core_sar_channel_map_set
 *
 * @brief Map SAR channel to ILKN channel 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flags           - RX/TX
 * @param [in]  sar_channel     - SAR channel ID
 * @param [in]  ilkn_channel    - ILKN channel ID
 * @param [in]  enable          - Enable/disable the map
 */
shr_error_e flexe_core_sar_channel_map_set(
    int unit,
    uint32 flags,
    int sar_channel,
    int ilkn_channel,
    int enable);

/*! 
 * flexe_core_66b_switch_set
 *
 * @brief Add a cross-connect in 66b switch 
 *
 * @param [in]  unit            - unit id
 * @param [in]  src_channel     - Source channel ID
 * @param [in]  dest_channel    - Destination channel ID
 * @param [in]  index           - Destination index (0~2)
 * @param [in]  enable          - Enable/disable the cross-connect
 */
shr_error_e flexe_core_66b_switch_set(
    int unit,
    int src_channel,
    int dest_channel,
    int index,
    int enable);

/*! 
 * flexe_core_oh_logical_phy_id_set
 *
 * @brief Get/Set FlexE logical PHY ID for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  logical_phy_id   - FlexE Logical PHY ID
 */
shr_error_e flexe_core_oh_logical_phy_id_set(
    int unit,
    int flexe_core_port,
    int logical_phy_id);
/*! 
 * flexe_core_oh_logical_phy_id_get
 *
 * @brief Get/Set FlexE logical PHY ID for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  flags           - RX/TX
 * @param [out]  logical_phy_id   - FlexE Logical PHY ID
 */
shr_error_e flexe_core_oh_logical_phy_id_get(
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *logical_phy_id);

/*! 
 * flexe_core_oh_group_id_set
 *
 * @brief Get/Set FlexE group ID for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  group_id        - FlexE group ID
 */
shr_error_e flexe_core_oh_group_id_set(
    int unit,
    int flexe_core_port,
    int group_id);
/*! 
 * flexe_core_oh_group_id_get
 *
 * @brief Get/Set FlexE group ID for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  flags           - RX/TX
 * @param [out]  group_id        - FlexE group ID
 */
shr_error_e flexe_core_oh_group_id_get(
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *group_id);

/*! 
 * flexe_core_oh_client_id_set
 *
 * @brief Get/Set FlexE client IDs for FlexE OH calendar 
 *
 * @param [in]  unit            - unit id
 * @param [in]  cal_id          - Calendar ID
 * @param [in]  nof_ports       - Number of ports
 * @param [in]  flexe_core_port_array   - FlexE core ports array
 * @param [in]  nof_slots       - Number of timeslots
 * @param [in]  calendar_slots   - Client ID array for each slot
 */
shr_error_e flexe_core_oh_client_id_set(
    int unit,
    int cal_id,
    int nof_ports,
    const int *flexe_core_port_array,
    int nof_slots,
    const int *calendar_slots);
/*! 
 * flexe_core_oh_client_id_get
 *
 * @brief Get/Set FlexE client IDs for FlexE OH calendar 
 *
 * @param [in]  unit            - unit id
 * @param [in]  cal_id          - Calendar ID
 * @param [in]  flags           - RX/TX
 * @param [in]  nof_ports       - Number of ports
 * @param [in]  flexe_core_port_array   - FlexE core ports array
 * @param [in]  nof_slots       - Number of timeslots
 * @param [out]  calendar_slots   - Client ID array for each slot
 */
shr_error_e flexe_core_oh_client_id_get(
    int unit,
    int cal_id,
    uint32 flags,
    int nof_ports,
    const int *flexe_core_port_array,
    int nof_slots,
    int *calendar_slots);

/*! 
 * flexe_core_oh_phymap_set
 *
 * @brief Set FlexE PHYMAP for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  logical_phy_id   - Logical PHY ID
 * @param [in]  enable          - Enable/disable the map
 */
shr_error_e flexe_core_oh_phymap_set(
    int unit,
    int flexe_core_port,
    int logical_phy_id,
    int enable);

/*! 
 * flexe_core_oh_cr_bit_set
 *
 * @brief Get/Set CR bit for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  cal_id          - Calendar ID
 */
shr_error_e flexe_core_oh_cr_bit_set(
    int unit,
    int flexe_core_port,
    int cal_id);
/*! 
 * flexe_core_oh_cr_bit_get
 *
 * @brief Get/Set CR bit for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  flags           - RX/TX
 * @param [out]  cal_id          - Calendar ID
 */
shr_error_e flexe_core_oh_cr_bit_get(
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *cal_id);

/*! 
 * flexe_core_oh_ca_bit_set
 *
 * @brief Get/Set CA bit for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  cal_id          - Calendar ID
 */
shr_error_e flexe_core_oh_ca_bit_set(
    int unit,
    int flexe_core_port,
    int cal_id);
/*! 
 * flexe_core_oh_ca_bit_get
 *
 * @brief Get/Set CA bit for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  flags           - RX/TX
 * @param [out]  cal_id          - Calendar ID
 */
shr_error_e flexe_core_oh_ca_bit_get(
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *cal_id);

/*! 
 * flexe_core_oh_c_bit_set
 *
 * @brief Get/Set C bit for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  cal_id          - Calendar ID
 */
shr_error_e flexe_core_oh_c_bit_set(
    int unit,
    int flexe_core_port,
    int cal_id);
/*! 
 * flexe_core_oh_c_bit_get
 *
 * @brief Get/Set C bit for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  flags           - RX/TX
 * @param [out]  cal_id          - Calendar ID
 */
shr_error_e flexe_core_oh_c_bit_get(
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *cal_id);

/*! 
 * flexe_core_oh_sc_bit_set
 *
 * @brief Get/Set SC bit for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  sync_config     - SC bit in FlexE OH
 */
shr_error_e flexe_core_oh_sc_bit_set(
    int unit,
    int flexe_core_port,
    int sync_config);
/*! 
 * flexe_core_oh_sc_bit_get
 *
 * @brief Get/Set SC bit for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  flags           - RX/TX
 * @param [out]  sync_config     - SC bit in FlexE oh
 */
shr_error_e flexe_core_oh_sc_bit_get(
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *sync_config);

/*! 
 * flexe_core_active_calendar_set
 *
 * @brief Get/Set active calendar for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  cal_id          - Calendar ID
 */
shr_error_e flexe_core_active_calendar_set(
    int unit,
    int flexe_core_port,
    int cal_id);
/*! 
 * flexe_core_active_calendar_get
 *
 * @brief Get/Set active calendar for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [in]  flags           - RX/TX
 * @param [out]  cal_id          - Calendar ID
 */
shr_error_e flexe_core_active_calendar_get(
    int unit,
    int flexe_core_port,
    uint32 flags,
    int *cal_id);

/*! 
 * flexe_core_oh_alarm_status_get
 *
 * @brief Get OH alarm status for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [out]  alarm_status    - Alarm status
 */
shr_error_e flexe_core_oh_alarm_status_get(
    int unit,
    int flexe_core_port,
    uint16 *alarm_status);

/*! 
 * flexe_core_oh_cal_mismatch_ts_get
 *
 * @brief Get calendar OH mismatch timeslots for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [out]  time_slots      - Calendar OH mismatch timeslots array
 */
shr_error_e flexe_core_oh_cal_mismatch_ts_get(
    int unit,
    int flexe_core_port,
    bcm_port_flexe_time_slot_t * time_slots);

/*! 
 * flexe_core_oam_alarm_status_get
 *
 * @brief Get OAM alarm status for FlexE core port 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - FlexE core port ID
 * @param [out]  alarms_status   - Alarm status
 */
shr_error_e flexe_core_oam_alarm_status_get(
    int unit,
    int flexe_core_port,
    uint16 *alarms_status);

/*! 
 * flexe_core_oam_alarm_enable_set
 *
 * @brief Enable/disable OAM alarm for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  alarm_type      - Alarm type
 * @param [in]  enable          - Enable/disable
 */
shr_error_e flexe_core_oam_alarm_enable_set(
    int unit,
    int client_channel,
    int alarm_type,
    int enable);

/*! 
 * flexe_core_oam_base_period_set
 *
 * @brief Set BAS OAM period for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  flags           - RX/TX
 * @param [in]  base_period     - BAS period
 */
shr_error_e flexe_core_oam_base_period_set(
    int unit,
    int client_channel,
    uint32 flags,
    uint32 base_period);
/*! 
 * flexe_core_oam_base_period_get
 *
 * @brief Set BAS OAM period for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  flags           - RX/TX
 * @param [out]  base_period     - BAS period
 */
shr_error_e flexe_core_oam_base_period_get(
    int unit,
    int client_channel,
    uint32 flags,
    uint32 *base_period);

/*! 
 * flexe_core_oam_base_insert_enable_set
 *
 * @brief Enable/disable BAS insertion for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  enable          - Enable/disable
 */
shr_error_e flexe_core_oam_base_insert_enable_set(
    int unit,
    int client_channel,
    uint32 enable);
/*! 
 * flexe_core_oam_base_insert_enable_get
 *
 * @brief Enable/disable BAS insertion for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  enable          - Enable/disable
 */
shr_error_e flexe_core_oam_base_insert_enable_get(
    int unit,
    int client_channel,
    uint32 *enable);

/*! 
 * flexe_core_oam_bypass_enable_set
 *
 * @brief Enable/disable OAM bypass for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  flags           - RX/TX
 * @param [in]  enable          - Enable/disable
 */
shr_error_e flexe_core_oam_bypass_enable_set(
    int unit,
    int client_channel,
    uint32 flags,
    uint32 enable);
/*! 
 * flexe_core_oam_bypass_enable_get
 *
 * @brief Enable/disable OAM bypass for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  flags           - RX/TX
 * @param [out]  enable          - Enable/disable
 */
shr_error_e flexe_core_oam_bypass_enable_get(
    int unit,
    int client_channel,
    uint32 flags,
    uint32 *enable);

/*! 
 * flexe_core_sar_oam_bypass_enable_set
 *
 * @brief Enable/disable OAM bypass for SAR client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Sar client ID
 * @param [in]  flags           - RX/TX
 * @param [in]  enable          - Enable/disable
 */
shr_error_e flexe_core_sar_oam_bypass_enable_set(
    int unit,
    int client_channel,
    uint32 flags,
    uint32 enable);
/*! 
 * flexe_core_sar_oam_bypass_enable_get
 *
 * @brief Enable/disable OAM bypass for SAR client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - Sar client ID
 * @param [in]  flags           - RX/TX
 * @param [out]  enable          - Enable/disable
 */
shr_error_e flexe_core_sar_oam_bypass_enable_get(
    int unit,
    int client_channel,
    uint32 flags,
    uint32 *enable);

/*! 
 * flexe_core_oam_local_fault_insert_set
 *
 * @brief Enable/disable OAM local fault insertion for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  enable          - Enable/disable
 */
shr_error_e flexe_core_oam_local_fault_insert_set(
    int unit,
    int client_channel,
    uint32 enable);
/*! 
 * flexe_core_oam_local_fault_insert_get
 *
 * @brief Enable/disable OAM local fault insertion for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  enable          - Enable/disable
 */
shr_error_e flexe_core_oam_local_fault_insert_get(
    int unit,
    int client_channel,
    uint32 *enable);

/*! 
 * flexe_core_oam_remote_fault_insert_set
 *
 * @brief Enable/disable OAM remote fault insertion for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  enable          - Enable/disable
 */
shr_error_e flexe_core_oam_remote_fault_insert_set(
    int unit,
    int client_channel,
    uint32 enable);
/*! 
 * flexe_core_oam_remote_fault_insert_get
 *
 * @brief Enable/disable OAM remote fault insertion for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  enable          - Enable/disable
 */
shr_error_e flexe_core_oam_remote_fault_insert_get(
    int unit,
    int client_channel,
    uint32 *enable);

/*! 
 * flexe_core_oam_sd_alm_block_num_set
 *
 * @brief Configure SD alarm block number for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  block_num       - Block number
 */
shr_error_e flexe_core_oam_sd_alm_block_num_set(
    int unit,
    int client_channel,
    uint32 block_num);
/*! 
 * flexe_core_oam_sd_alm_block_num_get
 *
 * @brief Configure SD alarm block number for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  block_num       - Block number
 */
shr_error_e flexe_core_oam_sd_alm_block_num_get(
    int unit,
    int client_channel,
    uint32 *block_num);

/*! 
 * flexe_core_oam_sd_alm_trigger_thr_set
 *
 * @brief Configure SD BIP8 error set threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sd_alm_trigger_thr_set(
    int unit,
    int client_channel,
    uint32 threshold);
/*! 
 * flexe_core_oam_sd_alm_trigger_thr_get
 *
 * @brief Configure SD BIP8 error set threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sd_alm_trigger_thr_get(
    int unit,
    int client_channel,
    uint32 *threshold);

/*! 
 * flexe_core_oam_sd_alm_clear_thr_set
 *
 * @brief Configure SD BIP8 error clear threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sd_alm_clear_thr_set(
    int unit,
    int client_channel,
    uint32 threshold);
/*! 
 * flexe_core_oam_sd_alm_clear_thr_get
 *
 * @brief Configure SD BIP8 error clear threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sd_alm_clear_thr_get(
    int unit,
    int client_channel,
    uint32 *threshold);

/*! 
 * flexe_core_oam_sf_bip8_alm_block_num_set
 *
 * @brief Configure SF bip8 alarm block number for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  block_num       - Block number
 */
shr_error_e flexe_core_oam_sf_bip8_alm_block_num_set(
    int unit,
    int client_channel,
    uint32 block_num);
/*! 
 * flexe_core_oam_sf_bip8_alm_block_num_get
 *
 * @brief Configure SF bip8 alarm block number for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  block_num       - Block number
 */
shr_error_e flexe_core_oam_sf_bip8_alm_block_num_get(
    int unit,
    int client_channel,
    uint32 *block_num);

/*! 
 * flexe_core_oam_sf_bip8_alm_trigger_thr_set
 *
 * @brief Configure SF BIP8 error set threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sf_bip8_alm_trigger_thr_set(
    int unit,
    int client_channel,
    uint32 threshold);
/*! 
 * flexe_core_oam_sf_bip8_alm_trigger_thr_get
 *
 * @brief Configure SF BIP8 error set threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sf_bip8_alm_trigger_thr_get(
    int unit,
    int client_channel,
    uint32 *threshold);

/*! 
 * flexe_core_oam_sf_bip8_alm_clear_thr_set
 *
 * @brief Configure SF BIP8 error clear threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sf_bip8_alm_clear_thr_set(
    int unit,
    int client_channel,
    uint32 threshold);
/*! 
 * flexe_core_oam_sf_bip8_alm_clear_thr_get
 *
 * @brief Configure SF BIP8 error clear threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sf_bip8_alm_clear_thr_get(
    int unit,
    int client_channel,
    uint32 *threshold);

/*! 
 * flexe_core_oam_sd_bei_alm_block_num_set
 *
 * @brief Configure SD BEI alarm block number for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  block_num       - Block number
 */
shr_error_e flexe_core_oam_sd_bei_alm_block_num_set(
    int unit,
    int client_channel,
    uint32 block_num);
/*! 
 * flexe_core_oam_sd_bei_alm_block_num_get
 *
 * @brief Configure SD BEI alarm block number for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  block_num       - Block number
 */
shr_error_e flexe_core_oam_sd_bei_alm_block_num_get(
    int unit,
    int client_channel,
    uint32 *block_num);

/*! 
 * flexe_core_oam_sd_bei_alm_trigger_thr_set
 *
 * @brief Configure SD BEI error set threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sd_bei_alm_trigger_thr_set(
    int unit,
    int client_channel,
    uint32 threshold);
/*! 
 * flexe_core_oam_sd_bei_alm_trigger_thr_get
 *
 * @brief Configure SD BEI error set threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sd_bei_alm_trigger_thr_get(
    int unit,
    int client_channel,
    uint32 *threshold);

/*! 
 * flexe_core_oam_sd_bei_alm_clear_thr_set
 *
 * @brief Configure SD BEI error clear threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sd_bei_alm_clear_thr_set(
    int unit,
    int client_channel,
    uint32 threshold);
/*! 
 * flexe_core_oam_sd_bei_alm_clear_thr_get
 *
 * @brief Configure SD BEI error clear threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sd_bei_alm_clear_thr_get(
    int unit,
    int client_channel,
    uint32 *threshold);

/*! 
 * flexe_core_oam_sf_bei_alm_block_num_set
 *
 * @brief Configure SF BEI alarm block number for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  block_num       - Block number
 */
shr_error_e flexe_core_oam_sf_bei_alm_block_num_set(
    int unit,
    int client_channel,
    uint32 block_num);
/*! 
 * flexe_core_oam_sf_bei_alm_block_num_get
 *
 * @brief Configure SF BEI alarm block number for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  block_num       - Block number
 */
shr_error_e flexe_core_oam_sf_bei_alm_block_num_get(
    int unit,
    int client_channel,
    uint32 *block_num);

/*! 
 * flexe_core_oam_sf_bei_alm_trigger_thr_set
 *
 * @brief Configure SF BEI error set threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sf_bei_alm_trigger_thr_set(
    int unit,
    int client_channel,
    uint32 threshold);
/*! 
 * flexe_core_oam_sf_bei_alm_trigger_thr_get
 *
 * @brief Configure SF BEI error set threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sf_bei_alm_trigger_thr_get(
    int unit,
    int client_channel,
    uint32 *threshold);

/*! 
 * flexe_core_oam_sf_bei_alm_clear_thr_set
 *
 * @brief Configure SF BEI error clear threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [in]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sf_bei_alm_clear_thr_set(
    int unit,
    int client_channel,
    uint32 threshold);
/*! 
 * flexe_core_oam_sf_bei_alm_clear_thr_get
 *
 * @brief Configure SF BEI error clear threshold for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  threshold       - Threshold
 */
shr_error_e flexe_core_oam_sf_bei_alm_clear_thr_get(
    int unit,
    int client_channel,
    uint32 *threshold);

/*! 
 * flexe_core_oam_bip8_counter_get
 *
 * @brief Get OAM BIP8 counter for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  val             - counter value
 */
shr_error_e flexe_core_oam_bip8_counter_get(
    int unit,
    int client_channel,
    uint64 *val);

/*! 
 * flexe_core_oam_bei_counter_get
 *
 * @brief Get OAM BEI counter for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  val             - counter value
 */
shr_error_e flexe_core_oam_bei_counter_get(
    int unit,
    int client_channel,
    uint64 *val);

/*! 
 * flexe_core_oam_pkt_count_get
 *
 * @brief Get OAM packet counter for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  val             - counter value
 */
shr_error_e flexe_core_oam_pkt_count_get(
    int unit,
    int client_channel,
    uint64 *val);

/*! 
 * flexe_core_oam_base_pkt_count_get
 *
 * @brief Get OAM BAS packet counter for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client ID
 * @param [out]  val             - counter value
 */
shr_error_e flexe_core_oam_base_pkt_count_get(
    int unit,
    int client_channel,
    uint64 *val);

/*! 
 * flexe_core_phy_default_config_set
 *
 * @brief Configure default FlexE phy settings 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flexe_core_port   - flexe core port
 * @param [out]  speed           - flexe core port speed
 */
shr_error_e flexe_core_phy_default_config_set(
    int unit,
    int flexe_core_port,
    int speed);

/*! 
 * flexe_core_oam_alarm_collection_timer_step_set
 *
 * @brief Configure FlexE OAM alarm collection timer step 
 *
 * @param [in]  unit            - unit id
 * @param [in]  step            - timer step
 */
shr_error_e flexe_core_oam_alarm_collection_timer_step_set(
    int unit,
    int step);
/*! 
 * flexe_core_oam_alarm_collection_timer_step_get
 *
 * @brief Configure FlexE OAM alarm collection timer step 
 *
 * @param [in]  unit            - unit id
 * @param [out]  step            - timer step
 */
shr_error_e flexe_core_oam_alarm_collection_timer_step_get(
    int unit,
    int *step);

/*! 
 * flexe_core_oam_alarm_collection_step_count_set
 *
 * @brief Number of steps for OAM alarm collection period 
 *
 * @param [in]  unit            - unit id
 * @param [in]  step_count      - number of steps for period
 */
shr_error_e flexe_core_oam_alarm_collection_step_count_set(
    int unit,
    int step_count);
/*! 
 * flexe_core_oam_alarm_collection_step_count_get
 *
 * @brief Number of steps for OAM alarm collection period 
 *
 * @param [in]  unit            - unit id
 * @param [out]  step_count      - number of steps for period
 */
shr_error_e flexe_core_oam_alarm_collection_step_count_get(
    int unit,
    int *step_count);

/*! 
 * flexe_core_sar_cell_mode_set
 *
 * @brief Configure/get SAR cell mode in FlexE core 
 *
 * @param [in]  unit            - unit id
 * @param [in]  cell_mode       - SAR cell mode
 */
shr_error_e flexe_core_sar_cell_mode_set(
    int unit,
    int cell_mode);
/*! 
 * flexe_core_sar_cell_mode_get
 *
 * @brief Configure/get SAR cell mode in FlexE core 
 *
 * @param [in]  unit            - unit id
 * @param [out]  cell_mode       - SAR cell mode
 */
shr_error_e flexe_core_sar_cell_mode_get(
    int unit,
    int *cell_mode);

/*! 
 * flexe_core_channel_map_set
 *
 * @brief Set the channel map in FlexE Core 
 *
 * @param [in]  unit            - unit id
 * @param [in]  flags           - RX/TX
 * @param [in]  flexe_core_port   - FlexE core port
 * @param [in]  local_port      - The port which flexe core port maps to
 */
shr_error_e flexe_core_channel_map_set(
    int unit,
    uint32 flags,
    int flexe_core_port,
    uint32 local_port);

/*! 
 * flexe_core_client_local_fault_get
 *
 * @brief The local fault status for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client channel
 * @param [out]  local_fault_status   - Local fault status
 */
shr_error_e flexe_core_client_local_fault_get(
    int unit,
    int client_channel,
    int *local_fault_status);

/*! 
 * flexe_core_client_remote_fault_get
 *
 * @brief The Remote fault status for FlexE client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client channel
 * @param [out]  remote_fault_status   - Remote fault status
 */
shr_error_e flexe_core_client_remote_fault_get(
    int unit,
    int client_channel,
    int *remote_fault_status);

/*! 
 * flexe_core_sar_client_local_fault_get
 *
 * @brief The local fault status for FlexE SAR client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client channel
 * @param [out]  local_fault_status   - Local fault status
 */
shr_error_e flexe_core_sar_client_local_fault_get(
    int unit,
    int client_channel,
    int *local_fault_status);

/*! 
 * flexe_core_sar_client_remote_fault_get
 *
 * @brief The Remote fault status for FlexE SAR client 
 *
 * @param [in]  unit            - unit id
 * @param [in]  client_channel   - FlexE client channel
 * @param [out]  remote_fault_status   - Remote fault status
 */
shr_error_e flexe_core_sar_client_remote_fault_get(
    int unit,
    int client_channel,
    int *remote_fault_status);

#endif /*_FLEXE_CORE_H_*/
