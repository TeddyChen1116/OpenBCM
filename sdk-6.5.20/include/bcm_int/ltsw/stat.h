/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMI_LTSW_STAT_H
#define BCMI_LTSW_STAT_H

#include <bcm/types.h>

#include <sal/sal_types.h>

/*!
 * \brief Non DMA supported counters. These counters are included by show counter output.
 */
typedef enum bcmi_ltsw_stat_counter_non_dma_id_s {

    /*! Per-queue transmit counters for multicast packets. */
    BCMI_LTSW_COUNTER_NON_DMA_EGR_PERQ_XMT_MC = 0,

    /*! Per-queue transmit counters for unicast packets. */
    BCMI_LTSW_COUNTER_NON_DMA_EGR_PERQ_XMT_UC = 1,

    /*! Must be last.  Not a usable value. */
    BCMI_LTSW_COUNTER_NON_DMA_COUNT = 2

} bcmi_ltsw_stat_counter_non_dma_id_t;

#define BCMI_LTSW_STAT_COUNTER_NON_DMA_ID_STR \
{ \
    "EGR_PERQ_XMT_MC", \
    "EGR_PERQ_XMT_UC" \
}

/*!
 * \brief Non DMA counter control structure.
 */
typedef struct bcmi_ltsw_stat_counter_non_dma_s {

    /*! Non DMA counter ID. */
    bcmi_ltsw_stat_counter_non_dma_id_t id;

    /*! LT table name. */
    const char *table;

    /*! LT table key. */
    const char *key;

    /*! Base index for this non DMA counter. */
    uint32_t base_index;

    /*! The number of entries per port. */
    uint32_t entries_perport;

    /*! Packet counter name. */
    char *cname_pkt;

    /*! Byte counter name. */
    char *cname_byte;

} bcmi_ltsw_stat_counter_non_dma_t;

/*!
 * \brief Counter control structure.
 */
typedef struct bcmi_ltsw_stat_counter_control_s {

    /*! Base index for MAC counters. */
    uint32_t base_index0;

    /*! The number of entries per port for MAC counters. */
    uint32_t entries_perport0;

    /*! Base index for MAC error counters. */
    uint32_t base_index1;

    /*! The number of entries per port for MAC error counters. */
    uint32_t entries_perport1;

    /*! Non DMA counter entries. */
    bcmi_ltsw_stat_counter_non_dma_t *counter_non_dma;

    /*! Base index for L3 counters. */
    uint32_t l3_base_index;

    /*! The number of entries per port for L3 counters. */
    uint32_t l3_entries_perport;

    /*! Base index for ECN counters. */
    uint32_t ecn_base_index;

    /*! The number of entries per port for ECN counters. */
    uint32_t ecn_entries_perport;

    /*! Base index for Ingress debug counters. */
    uint32_t rx_dbg_base_index;

    /*! The number of entries per port for Ingress debug counters. */
    uint32_t rx_dbg_entries_perport;

    /*! Base index for Egress debug counters. */
    uint32_t tx_dbg_base_index;

    /*! The number of entries per port for Egress debug counters. */
    uint32_t tx_dbg_entries_perport;

    /*! Base index for Mirror SFLOW counters. */
    uint32_t sflow_base_index;

    /*! The number of entries per port for Mirror SFLOW counters. */
    uint32_t sflow_entries_perport;

    /*! Total counters. */
    uint32_t total_counters;

} bcmi_ltsw_stat_counter_control_t;

/*!
 * \brief De-initializes the stat module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_stat_detach(int unit);

/*!
 * \brief Get the counter control information structure.
 *
 * \param [in] unit Unit Number.
 * \param [out] info Counter control information structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_stat_counter_control_get(
    int unit,
    bcmi_ltsw_stat_counter_control_t *info);

/*!
 * \brief Initializes the statistic on port.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_stat_port_attach(
    int unit,
    bcm_port_t port);

/*!
 * \brief De-initializes the statistic on port.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_stat_port_detach(
    int unit,
    bcm_port_t port);

#endif /* BCMI_LTSW_STAT_H */
