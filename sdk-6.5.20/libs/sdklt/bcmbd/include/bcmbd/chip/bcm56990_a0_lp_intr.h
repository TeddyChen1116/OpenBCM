#ifndef BCM56990_A0_LP_INTR_H
#define BCM56990_A0_LP_INTR_H
/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: INTERNAL/regs/xgs/generate-chip.pl
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 * Definition file for the BCM56990_A0.
 * This file provides all iProc low-priority interrupt sources for BCM56990_A0.
 */

/*!
 * \name Device-specific low-priority interrupt sources.
 *
 * Device-specific interrupt sources in the
 * ICFG_CHIP_LP_INTR_RAW_STATUS_REGx registers.
 *
 * Please refer to the hardware documentation for details.
 *
 * \{
 */
#define CE_TO_CMIC_INTR                         0
#define DLB_CREDIT_TO_CMIC_INTR                 1
#define PVTMON_INTR                             2
#define PLL_LOCK_LOSS_INTR                      3
#define AVS_SW_MDONE_INTR                       4
#define AVS_ROSC_THRESHOLD2_INTR                5
#define AVS_ROSC_THRESHOLD1_INTR                6
#define AVS_POWERWATCHDOG_INTR                  7
#define AVS_VDDC_MON_WARNING1_INTR              8
#define AVS_VDDC_MON_WARNING0_INTR              9
#define AVS_TEMPERATURE_RESET_INTR              10
#define AVS_TEMPERATURE_LOW_THRESHOLD_INTR      11
#define AVS_TEMPERATURE_HIGH_THRESHOLD_INTR     12
#define MMU_TO_CMIC_BST_INTR                    13
#define MMU_TO_CMIC_INTR                        14
#define QUAD0_T0_IPEP_TO_CMIC_INTR              15
#define QUAD0_T1_IPEP_TO_CMIC_INTR              16
#define QUAD1_T0_IPEP_TO_CMIC_INTR              17
#define QUAD1_T1_IPEP_TO_CMIC_INTR              18
#define QUAD2_T0_IPEP_TO_CMIC_INTR              19
#define QUAD2_T1_IPEP_TO_CMIC_INTR              20
#define QUAD3_T0_IPEP_TO_CMIC_INTR              21
#define QUAD3_T1_IPEP_TO_CMIC_INTR              22
#define QUAD0_EP_TO_CMIC_INTR                   23
#define QUAD1_EP_TO_CMIC_INTR                   24
#define QUAD2_EP_TO_CMIC_INTR                   25
#define QUAD3_EP_TO_CMIC_INTR                   26
#define QUAD0_IP_TO_CMIC_LEARN_CACHE_INTR       27
#define QUAD0_IP_TO_CMIC_PIPE_INTR              28
#define QUAD1_IP_TO_CMIC_LEARN_CACHE_INTR       29
#define QUAD1_IP_TO_CMIC_PIPE_INTR              30
#define QUAD2_IP_TO_CMIC_LEARN_CACHE_INTR       31
#define QUAD2_IP_TO_CMIC_PIPE_INTR              32
#define QUAD3_IP_TO_CMIC_LEARN_CACHE_INTR       33
#define QUAD3_IP_TO_CMIC_PIPE_INTR              34
#define PM0_INTR                                35
#define PM1_INTR                                36
#define PM2_INTR                                37
#define PM3_INTR                                38
#define PM4_INTR                                39
#define PM5_INTR                                40
#define PM6_INTR                                41
#define PM7_INTR                                42
#define PM8_INTR                                43
#define PM9_INTR                                44
#define PM10_INTR                               45
#define PM11_INTR                               46
#define PM12_INTR                               47
#define PM13_INTR                               48
#define PM14_INTR                               49
#define PM15_INTR                               50
#define PM16_INTR                               51
#define PM17_INTR                               52
#define PM18_INTR                               53
#define PM19_INTR                               54
#define PM20_INTR                               55
#define PM21_INTR                               56
#define PM22_INTR                               57
#define PM23_INTR                               58
#define PM24_INTR                               59
#define PM25_INTR                               60
#define PM26_INTR                               61
#define PM27_INTR                               62
#define PM28_INTR                               63
#define PM29_INTR                               64
#define PM30_INTR                               65
#define PM31_INTR                               66
#define PM32_INTR                               67
#define PM33_INTR                               68
#define PM34_INTR                               69
#define PM35_INTR                               70
#define PM36_INTR                               71
#define PM37_INTR                               72
#define PM38_INTR                               73
#define PM39_INTR                               74
#define PM40_INTR                               75
#define PM41_INTR                               76
#define PM42_INTR                               77
#define PM43_INTR                               78
#define PM44_INTR                               79
#define PM45_INTR                               80
#define PM46_INTR                               81
#define PM47_INTR                               82
#define PM48_INTR                               83
#define PM49_INTR                               84
#define PM50_INTR                               85
#define PM51_INTR                               86
#define PM52_INTR                               87
#define PM53_INTR                               88
#define PM54_INTR                               89
#define PM55_INTR                               90
#define PM56_INTR                               91
#define PM57_INTR                               92
#define PM58_INTR                               93
#define PM59_INTR                               94
#define PM60_INTR                               95
#define PM61_INTR                               96
#define PM62_INTR                               97
#define PM63_INTR                               98
#define PM_MGMT_INTR                            99
#define PIPE0_IDB_EDB_TO_CMIC_PERR_INTR         100
#define PIPE1_IDB_EDB_TO_CMIC_PERR_INTR         101
#define PIPE2_IDB_EDB_TO_CMIC_PERR_INTR         102
#define PIPE3_IDB_EDB_TO_CMIC_PERR_INTR         103
#define PIPE4_IDB_EDB_TO_CMIC_PERR_INTR         104
#define PIPE5_IDB_EDB_TO_CMIC_PERR_INTR         105
#define PIPE6_IDB_EDB_TO_CMIC_PERR_INTR         106
#define PIPE7_IDB_EDB_TO_CMIC_PERR_INTR         107
#define PIPE8_IDB_EDB_TO_CMIC_PERR_INTR         108
#define PIPE9_IDB_EDB_TO_CMIC_PERR_INTR         109
#define PIPE10_IDB_EDB_TO_CMIC_PERR_INTR        110
#define PIPE11_IDB_EDB_TO_CMIC_PERR_INTR        111
#define PIPE12_IDB_EDB_TO_CMIC_PERR_INTR        112
#define PIPE13_IDB_EDB_TO_CMIC_PERR_INTR        113
#define PIPE14_IDB_EDB_TO_CMIC_PERR_INTR        114
#define PIPE15_IDB_EDB_TO_CMIC_PERR_INTR        115
#define PFC_COLLECTOR_FIFO_OVRFLOW_INTR         116
#define SEQ_RST_INTR                            127
/*! \} */

#endif /* BCM56990_A0_LP_INTR_H */
