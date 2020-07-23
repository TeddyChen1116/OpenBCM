/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/control.h>

#include <bcm_int/ltsw/mbcm/cosq_stat.h>
#include <bcm_int/ltsw/tm/cosq_stat.h>
#include <bcm_int/ltsw/cosq.h>
#include <bcm_int/ltsw/port.h>

#include <sal/sal_libc.h>
#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_COSQ

/******************************************************************************
 * Private functions
 */

#define SYNC_ENABLE                     0x1

#define LTSW_COMPILER_64_UMUL_32(dst, src)    ((dst) *= (src))

static int
is_cpu_port(int unit, bcm_port_t lport)
{
    return bcmi_ltsw_port_is_type(unit, lport,  BCMI_LTSW_PORT_TYPE_CPU);
}


static int
bcm56880_a0_ltsw_cosq_stat_get(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_cosq_stat_t stat,
    int sync_mode,
    uint64_t *value)
{
    int sync = sync_mode ? SYNC_ENABLE : 0;
    bcmi_ltsw_cosq_device_info_t device_info = {0};

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_cosq_device_info_get(unit, &device_info));

    switch (stat) {
        case bcmCosqStatOutPackets:
        case bcmCosqStatOutBytes:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_counter_get(unit, gport, cosq, stat,
                                                  value, sync));
            break;
        case bcmCosqStatUCOutPackets:
        case bcmCosqStatUCOutBytes:
            if (BCM_GPORT_IS_MCAST_QUEUE_GROUP(gport)) {
                SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
            }
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_counter_get(unit, gport, cosq, stat,
                                                  value, sync));
            break;
        case bcmCosqStatMCOutPackets:
        case bcmCosqStatMCOutBytes:
            if (BCM_GPORT_IS_UCAST_QUEUE_GROUP(gport)) {
                SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
            }
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_counter_get(unit, gport, cosq, stat,
                                                  value, sync));
            break;
        case bcmCosqStatDroppedPackets:
        case bcmCosqStatDroppedBytes:
        case bcmCosqStatEgressCongestionDroppedPackets:
        case bcmCosqStatTotalDiscardDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_drop_counter_get(unit, gport, cosq, stat,
                                                       value, sync));
            break;
        case bcmCosqStatGreenDiscardDroppedPackets:
        case bcmCosqStatYellowDiscardDroppedPackets:
        case bcmCosqStatRedDiscardDroppedPackets:
        case bcmCosqStatYellowCongestionDroppedPackets:
        case bcmCosqStatRedCongestionDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_color_drop_get(unit, gport, cosq, stat,
                                                     value, sync));
            break;
        case bcmCosqStatEgressUCQueueMinBytesCurrent:
        case bcmCosqStatEgressMCQueueMinBytesCurrent:
        case bcmCosqStatEgressUCQueueBytesCurrent:
        case bcmCosqStatEgressMCQueueBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_current_usage_get(unit, gport, cosq, stat,
                                             value, sync));

            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        case bcmCosqStatEgressPortPoolSharedBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_sp_usage_get(unit, gport, cosq, stat,
                                                     value, sync));

            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        case bcmCosqStatEgressQgroupMinBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_qgroup_min_get(unit, gport, cosq, stat,
                                                  value, sync));

            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        case bcmCosqStatIngressPortPGMinBytesCurrent:
        case bcmCosqStatIngressPortPGSharedBytesCurrent:
        case bcmCosqStatIngressPortPGHeadroomBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_pg_current_usage_get(unit, gport, cosq, stat,
                                                value, sync));

            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        case bcmCosqStatIngressPortPoolSharedBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_sp_current_usage_get(unit, gport, cosq,
                                                value, sync));

            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        case bcmCosqStatHdrmPoolDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_hp_drop_counter_get(unit, gport, cosq, value, sync));
            break;
        case bcmCosqStatSourcePortDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_ing_port_drop_counter_get(unit, gport, cosq,
                                                     value, sync));
            break;
        case bcmCosqStatRQETotalDroppedPackets:
        case bcmCosqStatRQETotalDroppedBytes:
        case bcmCosqStatRQEGreenDroppedPackets:
        case bcmCosqStatRQEYellowDroppedPackets:
        case bcmCosqStatRQERedDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_rqe_drop_counter_get(unit, gport, cosq, stat,
                                                value, sync));
            break;
        case bcmCosqStatHighPriDroppedPackets:
        case bcmCosqStatOBMLossyHighPriDroppedPackets:
        case bcmCosqStatLowPriDroppedPackets:
        case bcmCosqStatOBMLossyLowPriDroppedPackets:
        case bcmCosqStatHighPriDroppedBytes:
        case bcmCosqStatOBMLossyHighPriDroppedBytes:
        case bcmCosqStatLowPriDroppedBytes:
        case bcmCosqStatOBMLossyLowPriDroppedBytes:
        case bcmCosqStatOBMLossless0DroppedPackets:
        case bcmCosqStatOBMLossless1DroppedPackets:
        case bcmCosqStatOBMLossless0DroppedBytes:
        case bcmCosqStatOBMLossless1DroppedBytes:
        case bcmCosqStatOBMFlowControlEvents:
        case bcmCosqStatOBMHighWatermark:
        case bcmCosqStatOBMLossyBufferBytes:
        case bcmCosqStatOBMLossless0BufferBytes:
        case bcmCosqStatOBMLossless1BufferBytes:
        case bcmCosqStatOBMBufferBytes:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_obm_get(unit, gport, cosq, stat, sync, value));
            break;
        case bcmCosqStatEgressPortUCPacketsCurrent:
        case bcmCosqStatEgressPortMCPacketsCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_total_current_usage_get(unit, gport, cosq,
                                                                stat, value, sync));
            break;
        case bcmCosqStatEgressPoolSharedUCBytesCurrent:
        case bcmCosqStatEgressPoolSharedMCBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_egr_sp_shared_current_usage_get(unit, gport, cosq,
                                                                stat, value, sync));
            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        case bcmCosqStatHeadroomPoolBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_hp_current_usage_get(unit, gport, cosq, stat,
                                                        value, sync));
            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        case bcmCosqStatIngressPoolSharedBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_ing_sp_current_usage_get(unit, gport, cosq,
                                                            stat, value, sync));
            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        case bcmCosqStatRQEQueueMinBytesCurrent:
        case bcmCosqStatRQEQueueSharedBytesCurrent:
        case bcmCosqStatRQEQueueTotalBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_rqe_current_usage_get(unit, gport, cosq, stat,
                                                         value, sync));
            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        case bcmCosqStatRQEPoolSharedBytesCurrent:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_rqe_pool_current_usage_get(unit, gport, cosq,
                                                              stat, value, sync));
            LTSW_COMPILER_64_UMUL_32(*value, device_info.mmu_cell_size);
            break;
        default:
            SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
    }

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_cosq_stat_set(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_cosq_stat_t stat,
    uint64_t value)
{
    SHR_FUNC_ENTER(unit);

    switch (stat) {
        case bcmCosqStatOutPackets:
        case bcmCosqStatOutBytes:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_counter_set(unit, gport, cosq, stat,
                                                  value));
            break;
        case bcmCosqStatUCOutPackets:
        case bcmCosqStatUCOutBytes:
            if (BCM_GPORT_IS_MCAST_QUEUE_GROUP(gport)) {
                SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
            }
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_counter_set(unit, gport, cosq, stat,
                                                  value));
            break;
        case bcmCosqStatMCOutPackets:
        case bcmCosqStatMCOutBytes:
            if (BCM_GPORT_IS_UCAST_QUEUE_GROUP(gport)) {
                SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
            }
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_counter_set(unit, gport, cosq, stat,
                                                  value));
            break;
        case bcmCosqStatDroppedPackets:
        case bcmCosqStatDroppedBytes:
        case bcmCosqStatEgressCongestionDroppedPackets:
        case bcmCosqStatTotalDiscardDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_drop_counter_set(unit, gport, cosq, stat,
                                                       value));
            break;
        case bcmCosqStatGreenDiscardDroppedPackets:
        case bcmCosqStatYellowDiscardDroppedPackets:
        case bcmCosqStatRedDiscardDroppedPackets:
        case bcmCosqStatYellowCongestionDroppedPackets:
        case bcmCosqStatRedCongestionDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_color_drop_set(unit, gport, cosq, stat,
                                                     value));
            break;
        case bcmCosqStatHdrmPoolDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_hp_drop_counter_set(unit, gport, cosq, value));
            break;
        case bcmCosqStatSourcePortDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_ing_port_drop_counter_set(unit, gport, cosq, value));
            break;
        case bcmCosqStatRQETotalDroppedPackets:
        case bcmCosqStatRQETotalDroppedBytes:
        case bcmCosqStatRQEGreenDroppedPackets:
        case bcmCosqStatRQEYellowDroppedPackets:
        case bcmCosqStatRQERedDroppedPackets:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_rqe_drop_counter_set(unit, gport, cosq, stat,
                                                value));
            break;
        case bcmCosqStatHighPriDroppedPackets:
        case bcmCosqStatOBMLossyHighPriDroppedPackets:
        case bcmCosqStatLowPriDroppedPackets:
        case bcmCosqStatOBMLossyLowPriDroppedPackets:
        case bcmCosqStatHighPriDroppedBytes:
        case bcmCosqStatOBMLossyHighPriDroppedBytes:
        case bcmCosqStatLowPriDroppedBytes:
        case bcmCosqStatOBMLossyLowPriDroppedBytes:
        case bcmCosqStatOBMLossless0DroppedPackets:
        case bcmCosqStatOBMLossless1DroppedPackets:
        case bcmCosqStatOBMLossless0DroppedBytes:
        case bcmCosqStatOBMLossless1DroppedBytes:
        case bcmCosqStatOBMFlowControlEvents:
        case bcmCosqStatOBMHighWatermark:
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_obm_set(unit, gport, cosq, stat, value));
            break;
        default:
            SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
    }

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_cosq_stat_clear(
    int unit,
    int port)
{
    int num_ucq, num_mcq;
    int qid, itm;
    bcmi_ltsw_cosq_device_info_t device_info = {0};

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_cosq_device_info_get(unit, &device_info));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_cosq_num_queue_get(unit, &num_ucq, &num_mcq));

    if (is_cpu_port(unit, port)) {
        for (qid = 0; qid < device_info.num_cpu_queue; qid++) {
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_counter_clear(unit, port, qid,
                                                            FALSE));
        }
    } else {
        for (qid = 0; qid < num_ucq; qid++) {
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_counter_clear(unit, port, qid,
                                                            TRUE));
        }

        for (qid = 0; qid < num_mcq; qid++) {
            SHR_IF_ERR_VERBOSE_EXIT
                (tm_ltsw_cosq_stat_port_queue_counter_clear(unit, port, qid,
                                                            FALSE));
        }
    }

    for (itm = 0; itm < device_info.num_itm; itm++) {
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_port_queue_color_drop_clear(unit, port, itm));

        if (is_cpu_port(unit, port)) {
            for (qid = 0; qid < device_info.num_cpu_queue; qid++) {
                SHR_IF_ERR_VERBOSE_EXIT
                    (tm_ltsw_cosq_stat_port_queue_drop_counter_clear(unit, port,
                                                              itm, qid, FALSE));
            }
        } else {
            for (qid = 0; qid < num_ucq; qid++) {
                SHR_IF_ERR_VERBOSE_EXIT
                    (tm_ltsw_cosq_stat_port_queue_drop_counter_clear(unit, port,
                                                               itm, qid, TRUE));
            }

            for (qid = 0; qid < num_mcq; qid++) {
                SHR_IF_ERR_VERBOSE_EXIT
                    (tm_ltsw_cosq_stat_port_queue_drop_counter_clear(unit, port,
                                                               itm, qid, FALSE));
            }
        }
    }

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_stat_ing_port_drop_counter_clear(unit, port));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_cosq_stat_init(int unit)
{
    int warm = bcmi_warmboot_get(unit);

    SHR_FUNC_ENTER(unit);

    if (!warm) {
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_obm_counter_init(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_rqe_drop_counter_init(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_port_queue_counter_init(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_port_queue_color_drop_init(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_port_queue_drop_counter_init(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_hp_drop_counter_init(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_ing_port_drop_counter_init(unit));
    }

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_cosq_stat_detach(int unit)
{
    int warm = bcmi_warmboot_get(unit);

    SHR_FUNC_ENTER(unit);

    if (!warm) {
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_obm_counter_detach(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_rqe_drop_counter_detach(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_port_queue_counter_detach(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_port_queue_color_drop_detach(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_port_queue_drop_counter_detach(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_hp_drop_counter_detach(unit));
        SHR_IF_ERR_VERBOSE_EXIT
            (tm_ltsw_cosq_stat_ing_port_drop_counter_detach(unit));
    }

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Cosq_stat driver function variable for bcm56880_a0 device.
 */
static mbcm_ltsw_cosq_stat_drv_t bcm56880_a0_ltsw_cosq_stat_drv = {
    .cosq_stat_get = bcm56880_a0_ltsw_cosq_stat_get,
    .cosq_stat_set = bcm56880_a0_ltsw_cosq_stat_set,
    .cosq_stat_clear = bcm56880_a0_ltsw_cosq_stat_clear,
    .cosq_stat_init = bcm56880_a0_ltsw_cosq_stat_init,
    .cosq_stat_detach = bcm56880_a0_ltsw_cosq_stat_detach
};

/******************************************************************************
 * Public functions
 */

int
bcm56880_a0_ltsw_cosq_stat_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_cosq_stat_drv_set(unit, &bcm56880_a0_ltsw_cosq_stat_drv));

exit:
    SHR_FUNC_EXIT();
}

