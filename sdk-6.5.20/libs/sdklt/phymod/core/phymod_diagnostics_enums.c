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

#include <phymod/phymod.h>
#include <phymod/phymod_system.h>
#include <phymod/phymod_diagnostics.h>
#include <phymod/phymod_diagnostics_dispatch.h>

#ifdef PHYMOD_DIAG

enum_mapping_t phymod_prbs_poly_t_mapping[] = {
    {"7", phymodPrbsPoly7},
    {"9", phymodPrbsPoly9},
    {"11", phymodPrbsPoly11},
    {"15", phymodPrbsPoly15},
    {"23", phymodPrbsPoly23},
    {"31", phymodPrbsPoly31},
    {"58", phymodPrbsPoly58},
    {"49", phymodPrbsPoly49},
    {"10", phymodPrbsPoly10},
    {"20", phymodPrbsPoly20},
    {"13", phymodPrbsPoly13},
    {"Q13", phymodPrbsPolyQ13},
    {NULL, 0}
};

enum_mapping_t phymod_pmd_mode_t_mapping[] = {
    {"Os", phymodPmdModeOs},
    {"OsDfe", phymodPmdModeOsDfe},
    {"BrDfe", phymodPmdModeBrDfe},
    {NULL, 0}
};

enum_mapping_t phymod_eyescan_mode_t_mapping[] = {
    {"Fast", phymodEyescanModeFast},
    {"LowBER", phymodEyescanModeLowBER},
    {"BERProj", phymodEyescanModeBERProj},
    {NULL, 0}
};

enum_mapping_t phymod_link_monitor_mode_t_mapping[] = {
    {"PCS49_1x10G", phymodLinkMonPCS49_1x10G},
    {"PCS82_4x10G", phymodLinkMonPCS82_4x10G},
    {"PCS82_2x25G", phymodLinkMonPCS82_2x25G},
    {"PCS82_4x25G", phymodLinkMonPCS82_4x25G},
    {"FC4", phymodLinkMonFC4},
    {"FC8", phymodLinkMonFC8},
    {"FC16", phymodLinkMonFC16},
    {"FC32", phymodLinkMonFC32},
    {NULL, 0}
};

enum_mapping_t phymod_diag_type_t_mapping[] = {
    {"GENERAL", phymod_diag_GENERAL},
    {"TOPOLOGY", phymod_diag_TOPOLOGY},
    {"LINK ", phymod_diag_LINK },
    {"SPEED", phymod_diag_SPEED},
    {"ANEG", phymod_diag_ANEG},
    {"TFC", phymod_diag_TFC},
    {"AN_TIMERS", phymod_diag_AN_TIMERS},
    {"STATE", phymod_diag_STATE},
    {"DEBUG", phymod_diag_DEBUG},
    {"IEEE", phymod_diag_IEEE},
    {"EEE", phymod_diag_EEE},
    {"BER", phymod_diag_BER},
    {"CFG", phymod_diag_CFG},
    {"CL72", phymod_diag_CL72},
    {"DSC", phymod_diag_DSC},
    {"DSC_STD", phymod_diag_DSC_STD},
    {"ALL", phymod_diag_ALL},
    {"STATE_EYE", phymod_diag_STATE_EYE},
    {NULL, 0}
};

enum_mapping_t phymod_PAM4_tx_pattern_t_mapping[] = {
    {"PAM4TxPattern_JP03B", phymod_PAM4TxPattern_JP03B},
    {"PAM4TxPattern_Linear", phymod_PAM4TxPattern_Linear},
    {NULL, 0}
};

enum_mapping_t phymod_ber_proj_mode_t_mapping[] = {
    {"PostFEC", phymodBERProjModePostFEC},
    {NULL, 0}
};

enum_mapping_t phymod_linkCAT_op_mode_t_mapping[] = {
    {"TX_MODE", phymodlinkCAT_TX_MODE},
    {"RX_MODE", phymodlinkCAT_RX_MODE},
    {"LPBK_MODE", phymodlinkCAT_LPBK_MODE},
    {NULL, 0}
};

#endif /*PHYMOD_DIAG*/
