/*! \file bcm56780_a0_testutil_check_health.c
 *
 * Chip-specific Check Health Utility.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */


#include <sal/sal_types.h>
#include <shr/shr_debug.h>
#include <sal/sal_assert.h>

#include <bcmdrd/bcmdrd_pt.h>
#include <bcmdrd/chip/bcm56780_a0_defs.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmbd/chip/bcm56780_a0_acc.h>
#include <bcmbd/chip/bcm56780_a0_dev.h>

#include <bcma/test/util/bcma_testutil_drv.h>
#include <bcma/test/util/bcma_testutil_common.h>
#include <bcma/test/util/bcma_testutil_pt_common.h>
#include <bcma/test/util/bcma_testutil_cmicx.h>
#include <bcma/test/util/bcma_testutil_tm.h>
#include <bcma/test/util/bcma_testutil_port.h>

#include <bcma/test/chip/bcm56780_a0_testutil_traffic.h>

#include <bcmtm/bcmtm_utils.h>
#include <bcmpc/bcmpc_lport.h>

#define BSL_LOG_MODULE BSL_LS_APPL_TEST

#define TD4_X9_PHY_PORT_CPU               0
#define TD4_X9_PHY_PORT_MNG0              257
#define TD4_X9_PHY_PORT_MNG1              258
#define TD4_X9_PHY_PORT_LPBK0             261
#define TD4_X9_PHY_PORT_LPBK1             262
#define TD4_X9_NUM_PHYS_PORTS             267
#define TD4_X9_PORTS_PER_PBLK             8
#define TD4_X9_PBLKS_PER_PIPE             5
#define TD4_X9_PIPES_PER_DEV              4

static int
td4_x9_get_pipe_pm_from_phy_port(int pnum)
{
    return ((pnum==TD4_X9_PHY_PORT_LPBK0)                        ? 1 :
           (pnum==TD4_X9_PHY_PORT_LPBK1)                        ? 3 :
           (pnum==TD4_X9_PHY_PORT_CPU)                          ? 0 :
           (pnum==TD4_X9_PHY_PORT_MNG0)                         ? 1 :
           (pnum==TD4_X9_PHY_PORT_MNG1)                         ? 3 :
           (((pnum - 1) & 0x1f) >> 3));
}

static int
td4_x9_get_subp_from_phy_port(int pnum)
{
    return ((pnum - 1) & 0x7);
}

static int
check_sid_exp_value(int unit, const check_health_info_t *check_sids, int *err_count)
{
    int i, j;
    bcmdrd_sid_t sid;
    bcmdrd_fid_t fid;
    uint32_t exp_value[2];
    int rv = SHR_E_NONE;
    for (i=0; ; i++) {
        sid = check_sids[i].sid;
        fid = check_sids[i].fid;
        if (sid == INVALIDr || fid == INVALIDf) {
            break;
        }
        for (j = 0; j < 2; j++) {
            exp_value[j] = check_sids[i].exp_value[j];
        }

        rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, -1, -1,
                2, exp_value);
        if (rv >= 0) {
            *err_count += rv;
        } else {
            return rv;
        }

    }
    return SHR_E_NONE;

}

static const check_health_info_t td4_x9_check_health_ipep_sids[] = {
    /* IPEP registers */
    {ING_DII_HW_STATUSr, EVENT_FIFO_0_WRITE_FAILf, {0x0, 0x0}},
    {ING_DII_HW_STATUSr, EVENT_FIFO_1_WRITE_FAILf, {0x0, 0x0}},
    {ING_DII_HW_STATUSr, REFRESH_ERRf, {0x0, 0x0}},
    {ING_DII_HW_STATUSr, SBUS_MOR_FIFO_RESETf, {0x0, 0x0}},
    {ING_DII_HW_STATUSr, SBUS_MOR_FIFO_OVERFLOWf, {0x0, 0x0}},
    {ING_DII_INTR_STATUSr, EVENT_FIFO_ERRf, {0x0, 0x0}},
    {ING_DII_INTR_STATUSr, REFRESH_ERRf, {0x0, 0x0}},
    {ING_DOI_INTR_STATUSr, EVENT_FIFO_0_READ_FAILf, {0x0, 0x0}},
    {ING_DOI_INTR_STATUSr, EVENT_FIFO_0_WRITE_FAILf, {0x0, 0x0}},
    {ING_DOI_INTR_STATUSr, EVENT_FIFO_1_READ_FAILf, {0x0, 0x0}},
    {ING_DOI_INTR_STATUSr, EVENT_FIFO_1_WRITE_FAILf, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP1f, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP2f, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP3f, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP4f, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP5f, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP6f, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP7f, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP8f, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP9f, {0x0, 0x0}},
    {IP_TO_CMIC_INTR_STATUSr, IP_SHAREDf, {0x0, 0x0}},
    {EP_TO_CMIC_INTR_STATUSr, EP1f, {0x0, 0x0}},
    {EP_TO_CMIC_INTR_STATUSr, EP2f, {0x0, 0x0}},
    {EP_TO_CMIC_INTR_STATUSr, EP3f, {0x0, 0x0}},
    {EP_TO_CMIC_INTR_STATUSr, DIIf, {0x0, 0x0}},
    {EPOST_EGR_SER_FIFO_STATUSr, WR_PTRf, {0x0, 0x0}},
    {EPOST_EGR_SER_FIFO_STATUSr, RD_PTRf, {0x0, 0x0}},
    {EGR_DOI_INTR_STATUSr, EVENT_FIFO_0_READ_FAILf, {0x0, 0x0}},
    {EGR_DOI_INTR_STATUSr, EVENT_FIFO_0_WRITE_FAILf, {0x0, 0x0}},
    {EGR_DOI_INTR_STATUSr, EVENT_FIFO_1_READ_FAILf, {0x0, 0x0}},
    {EGR_DOI_INTR_STATUSr, EVENT_FIFO_1_WRITE_FAILf, {0x0, 0x0}},
    {FLEX_CTR_EGR_FC_TOO_MANY_ACTIONS_COUNTERr, COUNTf, {0x0, 0x0}},
    {FLEX_CTR_ING_FC_TOO_MANY_ACTIONS_COUNTERr, COUNTf, {0x0, 0x0}},
    
    {FLEX_CTR_ST_ING0_FC_TOO_MANY_ACTIONS_COUNTERr, COUNTf, {0x0, 0x0}},
    {FLEX_CTR_ST_ING1_FC_TOO_MANY_ACTIONS_COUNTERr, COUNTf, {0x0, 0x0}},
    {CENTRAL_CTR_EVICTION_INTR_STATUSr, FIFO_COUNTf, {0x0, 0x0}},
    {CENTRAL_CTR_EVICTION_INTR_STATUSr, FIFO_PARITY_ERRORf, {0x0, 0x0}},
    {CENTRAL_CTR_EVICTION_INTR_STATUSr, FIFO_OVERFLOWf, {0x0, 0x0}},
    {CENTRAL_CTR_EVICTION_INTR_STATUSr, FIFO_NOT_EMPTYf, {0x0, 0x0}},
    {FLEX_EDITOR_ERROR_VECTORr, DATAf, {0x0, 0x0}},
    {DLB_ECMP_INTR_STATUSr, SER_FIFO_NON_EMPTYf, {0x0, 0x0}},
    {EPOST_EGR_INTR_STATUSr, SER_FIFO_NON_EMPTYf, {0x0, 0x0}},
    {IPOST_SER_STATUS_BLK_ING_INTR_STATUSr, SER_FIFO_NON_EMPTYf, {0x0, 0x0}},
    {ING_DOI_INTR_STATUSr, SER_FIFO_NON_EMPTYf, {0x0, 0x0}},
    {EGR_DOI_INTR_STATUSr, SER_FIFO_NON_EMPTYf, {0x0, 0x0}},
    { EPOST_EGR_PERQ_EVICTION_FAILr, COUNTf, {0x0, 0x0}},
    {INVALIDr, INVALIDf, {0x0, 0x0}}
};

static const check_health_info_t  td4_x9_check_health_port_sids[] = {
    /* Port registers */
    {CDMAC_INTR_STATUSr, MIB_COUNTER_MULTIPLE_ERRf, {0x0, 0x0}},
    {CDMAC_INTR_STATUSr, MIB_COUNTER_DOUBLE_BIT_ERRf, {0x0, 0x0}},
    {CDMAC_INTR_STATUSr, MIB_COUNTER_SINGLE_BIT_ERRf, {0x0, 0x0}},
    {CDMAC_INTR_STATUSr, TX_CDC_DOUBLE_BIT_ERRf, {0x0, 0x0}},
    {CDMAC_INTR_STATUSr, TX_CDC_SINGLE_BIT_ERRf, {0x0, 0x0}},
    {CDMAC_INTR_STATUSr, TX_PKT_UNDERFLOWf, {0x0, 0x0}},
    {CDPORT_INTR_STATUSr, FLOWCONTROL_REQ_FULLf, {0x0, 0x0}},
    {CDPORT_INTR_STATUSr, PMD_ERRf, {0x0, 0x0}},
    {CDPORT_INTR_STATUSr, MAC_ERRf, {0x0, 0x0}},
    {CDPORT_INTR_STATUSr, TSC_CORE1_ERRf, {0x0, 0x0}},
    {CDPORT_INTR_STATUSr, TSC_CORE0_ERRf, {0x0, 0x0}},
    {CDMAC_FIFO_STATUSr, TX_PKT_UNDERFLOWf, {0x0, 0x0}},
    {CDMAC_TXFIFO_STATUSr, CELL_CNTf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_RX_CDC_DOUBLE_BIT_ERRf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_RX_CDC_SINGLE_BIT_ERRf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_TX_CDC_DOUBLE_BIT_ERRf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_TX_CDC_SINGLE_BIT_ERRf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_RX_MSG_OVERFLOWf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_RX_PKT_OVERFLOWf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_TX_TS_FIFO_OVERFLOWf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_TX_LLFC_MSG_OVERFLOWf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_TX_PKT_OVERFLOWf, {0x0, 0x0}},
    {XLMAC_INTR_STATUSr, SUM_TX_PKT_UNDERFLOWf, {0x0, 0x0}},
    {XLPORT_INTR_STATUSr, MAC_ERRf, {0x0, 0x0}},
    {XLPORT_INTR_STATUSr, RX_FLOWCONTROL_REQ_FULLf, {0x0, 0x0}},
    {XLPORT_INTR_STATUSr, TSC_ERRf, {0x0, 0x0}},
    {XLPORT_INTR_STATUSr, MIB_RX_MEM_ERRf, {0x0, 0x0}},
    {XLPORT_INTR_STATUSr, MIB_TX_MEM_ERRf, {0x0, 0x0}},
    {XLMAC_TXFIFO_CELL_CNTr, CELL_CNTf, {0x0, 0x0}},
    {INVALIDr, INVALIDf, {0x0, 0x0}}
};

static const check_health_info_t td4_x9_check_health_idb_global_sids[] = {
    /* IDB Global */
    {IDB_CA_CPU_HW_STATUSr, CELL_LEN_ERRf, {0x0, 0x0}},
    {IDB_CA_CPU_HW_STATUSr, FIFO_EMPTYf, {0x1, 0x0}},
    {IDB_CA_CPU_HW_STATUSr, FIFO_FULLf, {0x0, 0x0}},
    {IDB_CA_CPU_HW_STATUSr, SOP_EOP_ERRf, {0x0, 0x0}},
    {IDB_CA_CPU_HW_STATUSr, FIFO_UNDERRUN_ERRf, {0x0, 0x0}},
    {IDB_CA_CPU_HW_STATUSr, FIFO_OVERRUN_ERRf, {0x0, 0x0}},
    {IDB_CA_LPBK_HW_STATUSr, CELL_LEN_ERRf, {0x0, 0x0}},
    {IDB_CA_LPBK_HW_STATUSr, FIFO_EMPTYf, {0x1, 0x0}},
    {IDB_CA_LPBK_HW_STATUSr, FIFO_FULLf, {0x0, 0x0}},
    {IDB_CA_LPBK_HW_STATUSr, SOP_EOP_ERRf, {0x0, 0x0}},
    {IDB_CA_LPBK_HW_STATUSr, FIFO_UNDERRUN_ERRf, {0x0, 0x0}},
    {IDB_CA_LPBK_HW_STATUSr, FIFO_OVERRUN_ERRf, {0x0, 0x0}},
    {EDB_INTR_STATUSr, SER_FIFO_NON_EMPTYf, {0x0, 0x0}},
    {EDB_SER_FIFO_STATUSr, FIFO_OVERFLOWf, {0x0, 0x0}},
    {EDB_SER_FIFO_STATUSr, FIFO_UNDERFLOWf, {0x0, 0x0}},
    {INVALIDr, INVALIDf, {0x0, 0x0}}
};

static const check_health_info_t td4_x9_check_health_mmu_sids[] = {
    /* Unexpected counters */
    {MMU_GLBCFG_MEM_FAIL_INT_CTRr, INT_CTRf, {0x0, 0x0}},
    {MMU_ITMCFG_MEM_FAIL_INT_CTRr, INT_CTRf, {0x0, 0x0}},
    {MMU_EBCFG_MEM_FAIL_INT_CTRr, INT_CTRf, {0x0, 0x0}},
    {MMU_CFAP_DROP_CBPr, COUNTf, {0x0, 0x0}},
    {MMU_CFAP_DROP_FULLr, CELL_COUNTf, {0x0, 0x0}},
    {MMU_CFAP_DROP_COLLISIONr, COUNTf, {0x0, 0x0}},
    /* Status regs*/
    {MMU_CFAP_STATUSr, CBPCOLSTATUSf, {0x0, 0x0}},
    {MMU_INTFO_OOBFC_STSr, FIFO_OVERFLOWf, {0x0, 0x0}},
    {MMU_INTFO_OOBFC_STSr, FIFO_XFR_EMPTYf, {0x0, 0x0}},
    {MMU_EBCFP_DD_PURGE_STATUSr, PURGE_MMUQ_BMPf, {0x0, 0x0}},
    {MMU_EBPCC_EBQUEUE_CELL_CNT_STSr, CNT_OVERFLOWf, {0x0, 0x0}},
    {MMU_EBPCC_EBQUEUE_CELL_CNT_STSr, CNT_UNDERFLOWf, {0x0, 0x0}},
    {MMU_GLBCFG_SPLITTER_RESP_STATUSr, NO_ADDR_BEATf, {0x0, 0x0}},
    {MMU_GLBCFG_SPLITTER_RESP_STATUSr, CMIC_TRANS_RESETf, {0x0, 0x0}},
    {MMU_OQS_DEBUGr, OUT_OF_RANGE_DST_PORTf, {0x0, 0x0}},
    {MMU_OQS_DEBUGr, MMU_OQS_TOQ_CELL_TX_CREDIT_OVERFLOWf, {0x0, 0x0}},
    {MMU_OQS_DEBUGr, RECEPTION_FIFO_OVERFLOWf, {0x0, 0x0}},
    /* Usage status */
    {MMU_EBCTM_PORT_EMPTY_STSr, DST_PORT_EMPTYf, {0xfffff, 0x0}},
    {MMU_QSCH_PORT_EMPTY_STATUSr, EMPTYf,  {0xfffff, 0x0}},
    {MMU_CFAP_BANKSTATUSr, FULLSTATUSf, {0x0, 0x0}},
    {IS_PKSCH_CREDIT_STSr, PORT_SUSPENDf, {0x1, 0x0}},
    {MMU_EBPTS_PKSCH_CREDIT_STSr, PORT_SUSPENDf, {0x1, 0x0}},
    /* Drop state regs */
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, GREEN_SP0f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, GREEN_SP1f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, GREEN_SP2f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, GREEN_SP3f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, YELLOW_SP0f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, YELLOW_SP1f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, YELLOW_SP2f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, YELLOW_SP3f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, RED_SP0f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, RED_SP1f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, RED_SP2f, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_DROP_STATESr, RED_SP3f, {0x0, 0x0}},
    {MMU_THDI_POOL_DROP_STATEr, POOL_0f, {0x0, 0x0}},
    {MMU_THDI_POOL_DROP_STATEr, POOL_1f, {0x0, 0x0}},
    {MMU_THDI_POOL_DROP_STATEr, POOL_2f, {0x0, 0x0}},
    {MMU_THDI_POOL_DROP_STATEr, POOL_3f, {0x0, 0x0}},
    {MMU_THDR_QE_STATUS_SPr, DROP_STATE_GREENf, {0x0, 0x0}},
    {MMU_THDR_QE_STATUS_SPr, DROP_STATE_YELLOWf, {0x0, 0x0}},
    {MMU_THDR_QE_STATUS_SPr, DROP_STATE_REDf, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, GREEN_SP0f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, GREEN_SP1f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, GREEN_SP2f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, GREEN_SP3f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, YELLOW_SP0f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, YELLOW_SP1f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, YELLOW_SP2f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, YELLOW_SP3f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, RED_SP0f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, RED_SP1f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, RED_SP2f, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_DROP_STATESr, RED_SP3f, {0x0, 0x0}},
    {MMU_THDR_QE_STATUS_PRIQr, DROP_STATE_REDf, {0x0, 0x0}},
    {MMU_THDR_QE_STATUS_PRIQr, DROP_STATE_GREENf, {0x0, 0x0}},
    {MMU_THDR_QE_STATUS_PRIQr, DROP_STATE_YELLOWf, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE11f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE10f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE9f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE8f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE7f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE6f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE5f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE4f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE3f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE2f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE2f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_11_00r, DS_QUEUE0f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE12f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE13f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE14f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE15f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE16f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE17f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE18f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE19f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE20f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE21f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE22f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_23_12r, DS_QUEUE23f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE24f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE25f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE26f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE27f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE28f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE29f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE30f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE31f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE32f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE33f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE34f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_35_24r, DS_QUEUE35f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE36f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE37f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE38f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE39f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE40f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE41f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE42f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE43f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE44f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE45f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE46f, {0x0, 0x0}},
    {MMU_THDO_CPU_QUEUE_DROP_STATES_47_36r, DS_QUEUE47f, {0x0, 0x0}},
    /* Limit states */
    {MMU_THDI_HDRM_POOL_STATUSr, HDRM_POOL_LIMIT_STATE_HPf, {0x0, 0x0}},
    {MMU_THDI_PORT_LIMIT_STATESr, PORTSP_LIMIT_STATEf, {0x0, 0x0}},
    {MMU_THDI_PORT_LIMIT_STATESr, PG_LIMIT_STATEf, {0x0, 0x0}},
    /* Flow control state */
    {MMU_INTFO_THDR_TO_OOBFC_SP_STr, RQE_SP_STf, {0x0, 0x0}},
    {MMU_INTFO_THDI_TO_OOBFC_SP_STr, ING_SP_STf, {0x0, 0x0}},
    {MMU_INTFO_THDO_TO_OOBFC_SP_STr, EG_SP_STf, {0x0, 0x0}},
    {MMU_INTFO_THDO_TO_OOBFC_SP_MC_STr, EG_SP_STf, {0x0, 0x0}},
    {MMU_INTFI_PORT_FC_BKPr, PORT_FCf, {0x0, 0x0}},
    {MMU_THDI_FLOW_CONTROL_XOFF_STATEr, PG_XOFF_FCf, {0x0, 0x0}},
    {MMU_INTFI_MMU_PORT_TO_MMU_QUEUES_FC_BKPr, MMU_QUEUES_BKPf, {0x0, 0x0}},
    {MMU_INTFO_TO_XPORT_BKPr, PAUSE_PFC_BKPf, {0x0, 0x0}},
    {MMU_INTFI_PORT_PFC_STATEr, PFC_XOFF_BMPf, {0x0, 0x0}},
    /* MMU interrupt status registers */
    {MMU_CFAP_INT_STATr, STACK_ERRORf, {0x0, 0x0}},
    {MMU_EBTOQ_CPU_INT_STATr, EBTOQ_ENQ_DEQ_EOP_PREFETCH_COLLISION_INTR_STATf, {0x0, 0x0}},
    {MMU_EBTOQ_CPU_INT_STATr, EBTOQ_CBFP_MEM_OVERFLOW_INTR_STATf, {0x0, 0x0}},
    {MMU_EBTOQ_CPU_INT_STATr, EBTOQ_CBFP_FIFO_OVERFLOW_INTR_STATf, {0x0, 0x0}},
    {MMU_EBTOQ_CPU_INT_STATr, QUEUE_ENTRIES_FULL_INTR_STATf, {0x0, 0x0}},
    {MMU_EBCFP_CPU_INT_STATr, DEQ_PTR_MISSING_MXM_MAP_INFOf, {0x0, 0x0}},
    {MMU_EBCFP_CPU_INT_STATr, DEQ_PTR_OUT_OF_RANGEf, {0x0, 0x0}},
    {MMU_EBCFP_CPU_INT_STATr, EB_MISCONFIGUREDf, {0x0, 0x0}},
    {MMU_EBCFP_CPU_INT_STATr, FAP_DUPLICATE_PTRf, {0x0, 0x0}},
    {MMU_EBCFP_CPU_INT_STATr, FAP_OVERFLOWf, {0x0, 0x0}},
    {MMU_CFAP_INT_STATr, STACK_ERRORf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, RQE_INFOTBL_FL_ERRf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, PKTQ_FAP_OVERFLOWf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, PKTQ_FAP_UNDERFLOWf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, CELLQ_FAP_OVERFLOWf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, CELLQ_FAP_UNDERFLOWf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, SCB_CREDIT_UNDERFLOWf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, SCB_CREDIT_OVERFLOWf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, RL_CREDIT_UNDERFLOWf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, RL_CREDIT_OVERFLOWf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, INVALID_DESTf, {0x0, 0x0}},
    {MMU_RQE_INT_STATr, CCP_OVERFLOWf, {0x0, 0x0}},
    {MMU_MTRO_CPU_INT_STATr, CNT_OVERFLOWf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, POOL_COUNTER_OVERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, POOL_COUNTER_UNDERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, PIPE0_COUNTER_OVERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, PIPE0_COUNTER_UNDERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, PIPE1_COUNTER_OVERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, PIPE1_COUNTER_UNDERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, PIPE2_COUNTER_OVERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, PIPE2_COUNTER_UNDERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, PIPE3_COUNTER_OVERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDI_CPU_INT_STATr, PIPE3_COUNTER_UNDERFLOW_STATf, {0x0, 0x0}},
    {MMU_THDO_CPU_INT_STATr, COUNTER_UNDERFLOWf, {0x0, 0x0}},
    {MMU_THDO_CPU_INT_STATr, COUNTER_OVERFLOWf, {0x0, 0x0}},
    {MMU_THDR_QE_CPU_INT_STATr, CNT_OVERFLOWf, {0x0, 0x0}},
    {MMU_THDR_QE_CPU_INT_STATr, CNT_UNDERFLOWf, {0x0, 0x0}},
    {MMU_TOQ_CPU_INT_STATr, MOD_ENQ_ERR_STATf, {0x0, 0x0}},
    {MMU_TOQ_CPU_INT_STATr, CQEB_UNDERFLOW_STATf, {0x0, 0x0}},
    {MMU_TOQ_CPU_INT_STATr, CQEB_OVERFLOW_STATf, {0x0, 0x0}},
    {MMU_TOQ_CPU_INT_STATr, CQEBN_CACHE_FULL_STATf, {0x0, 0x0}},
    {MMU_TOQ_CPU_INT_STATr, OQS_FIFO_OVERFLOW_STATf, {0x0, 0x0}},
    {MMU_EBCTM_CPU_INT_STATr, OVERFLOW_INTR_STATf, {0x0, 0x0}},
    {MMU_EBCTM_CPU_INT_STATr, UNDERFLOW_INTR_STATf, {0x0, 0x0}},
    {MMU_EBQS_CPU_INT_STATr, PKT_CNTR_OVERFLOW_INTR_STATf, {0x0, 0x0}},
    {MMU_EBQS_CPU_INT_STATr, PKT_CNTR_UNDERFLOW_INTR_STATf, {0x0, 0x0}},
    {MMU_EBQS_CPU_INT_STATr, EOP_CELL_PREFETCH_FIFO_OVERFLOW_INTR_STATf, {0x0, 0x0}},
    {MMU_EBQS_CPU_INT_STATr, EOP_CELL_PREFETCH_FIFO_UNDERFLOW_INTR_STATf, {0x0, 0x0}},
    {MMU_OQS_CPU_INT_STATr, SCB_INTERLEAVED_PKTS_STATf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, MC_FIFO_OVERFLOWf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCB_FIFO_OVERFLOW_PIPE0f, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCB_FIFO_OVERFLOW_PIPE1f, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCB_FIFO_OVERFLOW_PIPE2f, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCB_FIFO_OVERFLOW_PIPE3f, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ_ENTRY_OVERFLOW_PIPE0f, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ_ENTRY_OVERFLOW_PIPE1f, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ_ENTRY_OVERFLOW_PIPE2f, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ_ENTRY_OVERFLOW_PIPE3f, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQE_CNT_OVERFLOWf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQE_CNT_UNDERFLOWf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, HP_FIFO_OVERFLOWf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, HP_FIFO_UNDERFLOWf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQE_FL_DUP_PTRf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ_FL_DUP_PTRf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ_FL_INVALID_PTRf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ0_CAT1_PIPE_THD_REACHEDf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ1_CAT1_PIPE_THD_REACHEDf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ2_CAT1_PIPE_THD_REACHEDf, {0x0, 0x0}},
    {MMU_SCB_CPU_INT_STATr, SCQ3_CAT1_PIPE_THD_REACHEDf, {0x0, 0x0}},
    {MMU_CRB_CPU_INT_STATr, MTU_VIOLATION_INTR_STATf, {0x0, 0x0}},
    {MMU_CRB_CPU_INT_STATr, PKT_FRAME_ERROR_INTR_STATf, {0x0, 0x0}},
    {MMU_CRB_CPU_INT_STATr, INV_SRC_PORT_INTR_STATf, {0x0, 0x0}},
    {MMU_CRB_CPU_INT_STATr, MIN_SPACE_VIOL_INTR_STATf, {0x0, 0x0}},
    {MMU_CRB_CPU_INT_STATr, INV_DST_PORT_INTR_STATf, {0x0, 0x0}},
    {MMU_CRB_CPU_INT_STATr, PKT_TYPE_ERROR_INTR_STATf, {0x0, 0x0}},
    {MMU_RL_CPU_INT_STATr, RSHFL_INT_STATf, {0x0, 0x0}},
    {MMU_RL_CPU_INT_STATr, EBP_OVF_INT_STATf, {0x0, 0x0}},
    {MMU_RL_CPU_INT_STATr, RQEF_OVF_INT_STATf, {0x0, 0x0}},
    {MMU_RL_CPU_INT_STATr, EBQ_OVF_INT_STATf, {0x0, 0x0}},
    {MMU_EBPCC_CPU_INT_STATr, CNT_UNDERFLOWf, {0x0, 0x0}},
    {MMU_EBPCC_CPU_INT_STATr, CNT_OVERFLOWf, {0x0, 0x0}},
    /* returned credit status - Expected value is reset val in regsfile */
    {MMU_RQE_TX_CREDIT_TO_SCBr, CREDITf, {333, 0x0}},
    {MMU_SCB_OQS_CREDITSr, CREDITSf, {0x14, 0x0}},
    {MMU_OQS_TOQ_CELL_TX_CREDITr, CREDIT_COUNTf, {36, 0x0}},
    {INVALIDr, INVALIDf, {0x0, 0x0}}

};

static const check_health_info_t td4_x9_check_health_mmu_usage_sids[] = {
    {MMU_WRED_UC_QUEUE_TOTAL_COUNTm, TOTAL_COUNTf, {0x0, 0x0}},
    {MMU_WRED_PORT_SP_SHARED_COUNTm, SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDO_TOTAL_PORT_COUNTERm, TOTAL_COUNTf, {0x0, 0x0}},
    {MMU_THDO_TOTAL_PORT_COUNTER_MCm, TOTAL_COUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_UC_QGROUPm, MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_MC_QGROUPm, MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_QUEUEm, MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_QUEUEm, SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_QUEUEm, TOTALCOUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_PORT_UCm, SP0_TOTAL_COUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_PORT_UCm, SP1_TOTAL_COUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_PORT_UCm, SP2_TOTAL_COUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_PORT_UCm, SP3_TOTAL_COUNTf, {0x0, 0x0}},
    {MMU_THDO_COUNTER_PORTSP_MCm, SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDO_PORT_Q_DROP_STATEm, DATAf, {0x0, 0x0}},
    {MMU_THDO_PORT_Q_DROP_STATE_MCm, DATAf, {0x0, 0x0}},
    {MMU_THDO_PORT_SP_DROP_STATE_UCm, DATAf, {0x0, 0x0}},
    {MMU_THDO_PORT_SP_DROP_STATE_MCm, DATAf, {0x0, 0x0}},
    {MMU_INTFO_ENG_CONGST_STm, THDO_CONGSTf, {0x0, 0x0}},
    {MMU_INTFO_ING_CONGST_STm, THDI_CONGSTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_MIN_COUNTERm, PG7_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_MIN_COUNTERm, PG6_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_MIN_COUNTERm, PG5_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_MIN_COUNTERm, PG4_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_MIN_COUNTERm, PG3_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_MIN_COUNTERm, PG2_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_MIN_COUNTERm, PG1_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_MIN_COUNTERm, PG0_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_SHARED_COUNTERm, PG7_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_SHARED_COUNTERm, PG6_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_SHARED_COUNTERm, PG5_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_SHARED_COUNTERm, PG4_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_SHARED_COUNTERm, PG3_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_SHARED_COUNTERm, PG2_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_SHARED_COUNTERm, PG1_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_SHARED_COUNTERm, PG0_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_HDRM_COUNTERm, PG7_HDRM_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_HDRM_COUNTERm, PG6_HDRM_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_HDRM_COUNTERm, PG5_HDRM_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_HDRM_COUNTERm, PG4_HDRM_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_HDRM_COUNTERm, PG3_HDRM_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_HDRM_COUNTERm, PG2_HDRM_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_HDRM_COUNTERm, PG1_HDRM_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORT_PG_HDRM_COUNTERm, PG0_HDRM_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORTSP_COUNTERm, PORTSP3_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORTSP_COUNTERm, PORTSP2_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORTSP_COUNTERm, PORTSP1_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORTSP_COUNTERm, PORTSP0_SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORTSP_COUNTERm, PORTSP3_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORTSP_COUNTERm, PORTSP2_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORTSP_COUNTERm, PORTSP1_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDI_PORTSP_COUNTERm, PORTSP0_MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDR_QE_SHARED_COUNT_PRIQr, SHARED_COUNTf, {0x0, 0x0}},
    {MMU_THDR_QE_MIN_COUNT_PRIQr, MIN_COUNTf, {0x0, 0x0}},
    {MMU_THDR_QE_TOTAL_COUNT_PRIQr, TOTAL_COUNTf, {0x0, 0x0}},
    {MMU_THDO_MC_SHARED_CQE_POOL_SHARED_COUNTr, COUNTf, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_SHARED_COUNT_DEBUG_MCr, COUNTf, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_SHARED_COUNT_DEBUG_LOSSLESSr, COUNTf, {0x0, 0x0}},
    {MMU_THDO_SHARED_DB_POOL_SHARED_COUNTr, COUNTf, {0x0, 0x0}},
    {MMU_THDR_QE_SHARED_COUNT_SPr, SHARED_COUNTf, {0x0, 0x0}},
    {MMU_EBCFP_POOL_COUNTERr, POOL_CTRf, {0x0, 0x0}},
    {MMU_CFAP_STATUSr, CFAP_IN_USE_COUNTf, {0x0, 0x0}},
    {MMU_TOQ_STATUSr, CQEB_USE_COUNTf, {0x0, 0x0}},
    {MMU_THDO_MIRROR_ON_DROP_FILL_LEVELr, MIRROR_ON_DROP_CELL_USAGEf, {0x0, 0x0}},
    {MMU_THDI_SCR_CNT_STATUSr, PORT_PG_SHARED_SCR_CNT_G0f, {0x0, 0x0}},
    {MMU_THDI_SCR_CNT_STATUSr, PORT_PG_MIN_SCR_CNT_G0f, {0x0, 0x0}},
    {MMU_EBPCC_EBQUEUE_CELL_CNT_STSr, CELL_CNTf, {0x0, 0x0}},
    {MMU_EBPTS_PKSCH_CREDIT_STSr, PKT_CREDIT_CNTf, {0x0, 0x0}},
    {IS_PKSCH_CREDIT_STSr, PKT_CREDIT_CNTf, {0x0, 0x0}},
    {MMU_EBCTM_CNTR_1_STSr, SAF_CELLS_IN_ITM_CNTRf, {0x0, 0x0}},
    {MMU_EBCTM_CNTR_0_STSr, CT_CELLS_IN_MMU_CNTRf, {0x0, 0x0}},
    {MMU_EBCTM_CNTR_0_STSr, CT_CELLS_IN_ITM_CNTRf, {0x0, 0x0}},
    {MMU_EBCTM_CNTR_0_STSr, PRETCT_SAF_CELLS_IN_ITM_CNTRf, {0x0, 0x0}},
    {INVALIDr, INVALIDf, {0x0, 0x0}}
};

static int
td4_x9_check_obm_per_port_regs(int unit, int *err_count) {
    int j;
    bcmdrd_sid_t sid;
    bcmdrd_fid_t fid;
    uint32_t exp_value[2];
    int rv = SHR_E_NONE;
    int lport, pport, pm_num, subp, pipe;
    static const bcmdrd_sid_t obm_usage_regs[TD4_X9_PBLKS_PER_PIPE] = {
        IDB_OBM0_USAGE_1r, IDB_OBM1_USAGE_1r, IDB_OBM2_USAGE_1r,
            IDB_OBM3_USAGE_1r};
    static const bcmdrd_sid_t obm_usage_regs_2[TD4_X9_PBLKS_PER_PIPE] = {
        IDB_OBM0_USAGEr, IDB_OBM1_USAGEr, IDB_OBM2_USAGEr,
            IDB_OBM3_USAGEr};
    static const bcmdrd_sid_t obm_hw_status_regs[TD4_X9_PBLKS_PER_PIPE] = {
        IDB_OBM0_HW_STATUSr, IDB_OBM1_HW_STATUSr, IDB_OBM2_HW_STATUSr,
        IDB_OBM3_HW_STATUSr
    };
    static const bcmdrd_fid_t obm_hw_status_fields[TD4_X9_PORTS_PER_PBLK] = {
        RESIDUE_EMPTY_PORT0f, RESIDUE_EMPTY_PORT1f, RESIDUE_EMPTY_PORT2f,
        RESIDUE_EMPTY_PORT3f, RESIDUE_EMPTY_PORT4f, RESIDUE_EMPTY_PORT5f,
        RESIDUE_EMPTY_PORT6f, RESIDUE_EMPTY_PORT7f
    };
    static const bcmdrd_sid_t ca_hw_status_regs[TD4_X9_PBLKS_PER_PIPE] = {
        IDB_CA0_HW_STATUSr, IDB_CA1_HW_STATUSr, IDB_CA2_HW_STATUSr,
        IDB_CA3_HW_STATUSr
    };
    static const bcmdrd_fid_t ca_fifo_full_fields[TD4_X9_PORTS_PER_PBLK] = {
        FIFO_FULL_PORT0f, FIFO_FULL_PORT1f, FIFO_FULL_PORT2f,
        FIFO_FULL_PORT3f, FIFO_FULL_PORT4f, FIFO_FULL_PORT5f,
        FIFO_FULL_PORT6f, FIFO_FULL_PORT7f
    };
    static const bcmdrd_fid_t ca_fifo_ovrrun_fields[TD4_X9_PORTS_PER_PBLK] = {
        FIFO_OVERRUN_ERR_PORT0f, FIFO_OVERRUN_ERR_PORT1f, FIFO_OVERRUN_ERR_PORT2f,
        FIFO_OVERRUN_ERR_PORT3f, FIFO_OVERRUN_ERR_PORT4f, FIFO_OVERRUN_ERR_PORT5f,
        FIFO_OVERRUN_ERR_PORT6f, FIFO_OVERRUN_ERR_PORT7f
    };
    static const bcmdrd_sid_t ca_hw_status_2_regs[TD4_X9_PBLKS_PER_PIPE] = {
        IDB_CA0_HW_STATUS_2r, IDB_CA1_HW_STATUS_2r, IDB_CA2_HW_STATUS_2r,
        IDB_CA3_HW_STATUS_2r
    };
    static const bcmdrd_fid_t ca_cell_len_err_fields[TD4_X9_PORTS_PER_PBLK] = {
        CELL_LEN_ERR_PORT0f, CELL_LEN_ERR_PORT1f, CELL_LEN_ERR_PORT2f,
        CELL_LEN_ERR_PORT3f, CELL_LEN_ERR_PORT4f, CELL_LEN_ERR_PORT5f,
        CELL_LEN_ERR_PORT6f, CELL_LEN_ERR_PORT7f
    };
    static const bcmdrd_fid_t ca_sop_eop_err_fields[TD4_X9_PORTS_PER_PBLK] = {
        SOP_EOP_ERR_PORT0f, SOP_EOP_ERR_PORT1f, SOP_EOP_ERR_PORT2f,
        SOP_EOP_ERR_PORT3f, SOP_EOP_ERR_PORT4f, SOP_EOP_ERR_PORT5f,
        SOP_EOP_ERR_PORT6f, SOP_EOP_ERR_PORT7f
    };
    static const bcmdrd_fid_t ca_fifo_underrun_fields[TD4_X9_PORTS_PER_PBLK] = {
        FIFO_UNDERRUN_ERR_PORT0f, FIFO_UNDERRUN_ERR_PORT1f, FIFO_UNDERRUN_ERR_PORT2f,
        FIFO_UNDERRUN_ERR_PORT3f, FIFO_UNDERRUN_ERR_PORT4f, FIFO_UNDERRUN_ERR_PORT5f,
        FIFO_UNDERRUN_ERR_PORT6f, FIFO_UNDERRUN_ERR_PORT7f
    };


    for (j = 0; j < 2; j++) {
        exp_value[j] = 0x0;
    }
    for (pport = 0; pport < TD4_X9_NUM_PHYS_PORTS; pport++) {
        lport = bcmpc_pport_to_lport(unit, pport);
        if (lport != -1 && lport != 65535) {
            if (!bcmtm_lport_is_fp(unit, lport)) {
                continue;
            }
            pm_num = td4_x9_get_pipe_pm_from_phy_port(pport);
            subp = td4_x9_get_subp_from_phy_port(pport);
            rv = bcmtm_lport_pipe_get(unit, lport, &pipe);
            sid = obm_hw_status_regs[pm_num];
            fid = obm_hw_status_fields[subp];
            exp_value[0] = 0x1; /* Residue empty should be set to 1 */
            rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, -1,
                    pipe, 2, exp_value);
            if (rv >= 0) {
                *err_count += rv;
            } else {
                return rv;
            }
            exp_value[0] = 0x0; /* setting exp_value back to 0 */
            sid = ca_hw_status_regs[pm_num];
            fid = ca_fifo_full_fields[subp];
            rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, -1,
                    pipe, 2, exp_value);
            if (rv >= 0) {
                *err_count += rv;
            } else {
                return rv;
            }
            fid = ca_fifo_ovrrun_fields[subp];
            rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, -1,
                    pipe, 2, exp_value);
            if (rv >= 0) {
                *err_count += rv;
            } else {
                return rv;
            }
            sid = ca_hw_status_2_regs[pm_num];
            fid = ca_cell_len_err_fields[subp];
            rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, -1,
                    pipe, 2, exp_value);
            if (rv >= 0) {
                *err_count += rv;
            } else {
                return rv;
            }
            fid = ca_sop_eop_err_fields[subp];
            rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, -1,
                    pipe, 2, exp_value);
            if (rv >= 0) {
                *err_count += rv;
            } else {
                return rv;
            }
            fid = ca_fifo_underrun_fields[subp];
            rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, -1,
                    pipe, 2, exp_value);
            if (rv >= 0) {
                *err_count += rv;
            } else {
                return rv;
            }
            sid = obm_usage_regs[pm_num];
            fid = LOSSLESS1_COUNTf;
            rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, subp,
                    pipe, 2, exp_value);
            if (rv >= 0) {
                *err_count += rv;
            } else {
                return rv;
            }
            sid = obm_usage_regs_2[pm_num];
            fid = LOSSLESS0_COUNTf;
            rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, subp,
                    pipe, 2, exp_value);
            if (rv >= 0) {
                *err_count += rv;
            } else {
                return rv;
            }
            sid = obm_usage_regs_2[pm_num];
            fid = LOSSY_COUNTf;
            rv = bcma_testustil_tm_comp_pt_field_value(unit, sid, fid, subp,
                    pipe, 2, exp_value);
            if (rv >= 0) {
                *err_count += rv;
            } else {
                return rv;
            }

        }
    }
    return SHR_E_NONE;
}

int
bcm56780_a0_check_health(int unit, bool *test_result) {
    int err = 0, check_err = 0;

    SHR_FUNC_ENTER(unit);
    LOG_INFO(BSL_LOG_MODULE,
                    (BSL_META_U(unit, "Calling Check Health for TD4_X9 \n")));
    if (test_result != NULL) {
        *test_result = true;
    }
    /* IPEP check health */
    check_err = 0;
    SHR_IF_ERR_EXIT(check_sid_exp_value(unit, td4_x9_check_health_ipep_sids, &check_err));
    err += check_err;
    if (check_err > 0) {
        cli_out("Error count in IPEP: %d \n", check_err);
    }
    /* Port check health */
    check_err = 0;
    SHR_IF_ERR_EXIT(check_sid_exp_value(unit, td4_x9_check_health_port_sids, &check_err));
    err += check_err;
    if (check_err > 0) {
        cli_out("Error count in Port: %d \n", check_err);
    }
    /* MMU check health */
    check_err = 0;
    SHR_IF_ERR_EXIT(check_sid_exp_value(unit, td4_x9_check_health_mmu_sids, &check_err));
    err += check_err;
    if (check_err > 0) {
        cli_out("Error count in MMU status: %d \n", check_err);
    }
    /* MMU usage sids */
    check_err = 0;
    SHR_IF_ERR_EXIT(check_sid_exp_value(unit, td4_x9_check_health_mmu_usage_sids, &check_err));
    err += check_err;
    if (check_err > 0) {
        cli_out("Error count in MMU usage: %d \n", check_err);
    }
    /* IDB global check health */
    check_err = 0;
    SHR_IF_ERR_EXIT(check_sid_exp_value(unit, td4_x9_check_health_idb_global_sids, &check_err));
    err += check_err;
    if (check_err > 0) {
        cli_out("Error count in OBM Global: %d \n", check_err);
    }
    /* IDB per-port check */
    check_err = 0;
    SHR_IF_ERR_EXIT
        (td4_x9_check_obm_per_port_regs(unit, &check_err));
    err += check_err;
    if (check_err > 0) {
        cli_out("Error count in OBM per-port: %d \n", check_err);
    }
    /*Port->EP and EP->MMU credit loop */
    check_err = 0;
    SHR_IF_ERR_EXIT
        (bcmtm_util_check_port_ep_mmu_credit_loop(unit, &check_err));
    err += check_err;
    if (check_err > 0) {
        cli_out("Error count datapath credit loop: %d \n", check_err);
    }
    if (test_result != NULL) {
        if (err != 0) {
            *test_result = false;
            cli_out("Health Check FAIL \n");
        } else {
            *test_result = true;
            cli_out("Health Check PASS \n");
        }
    }

exit:
    SHR_FUNC_EXIT();

}
