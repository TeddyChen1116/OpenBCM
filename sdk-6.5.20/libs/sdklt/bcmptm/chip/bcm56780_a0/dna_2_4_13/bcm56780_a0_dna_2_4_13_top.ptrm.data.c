/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by c-struct-gen from NPL PTRM data files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/c-struct-gen
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include "../bcm56780_a0_ptrm.h"
#include "bcm56780_a0_dna_2_4_13_tcam_pri.ptrm.data.h"
#include "bcm56780_a0_dna_2_4_13_hash.ptrm.data.h"
#include "bcm56780_a0_dna_2_4_13_alpm.ptrm.data.h"
#include "bcm56780_a0_dna_2_4_13_special.ptrm.data.h"
#include "../bcm56780_a0_tcam_tnl_mpls.ptrm.data.h"
#include "../bcm56780_a0_cpu_cos_tcam.ptrm.data.h"
#include "../bcm56780_a0_dt_em_fp_entry.ptrm.data.h"
#include "../bcm56780_a0_dt_em_ft_entry.ptrm.data.h"
#include "../bcm56780_a0_sec_svtag_cpu_map.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_macsec_sc.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_ipsec_sc.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_ethernet.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_snap.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_llc.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_mpls.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_pbb.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_vntag.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_etag.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_ipv4.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_udp_over_ipv4.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_tcp_over_ipv4.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_ipv6.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_udp_over_ipv6.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow_tcp_over_ipv6.ptrm.data.h"
#include "../bcm56780_a0_sec_decrypt_subport_flow.ptrm.data.h"

const bcmptm_ptrm_table_data_t bcm56780_a0_dna_2_4_13_ptrm_table_data;
static const bcmptm_ptrm_table_t bcm56780_a0_dna_2_4_13_ptrm_table[105];

const bcmptm_ptrm_table_data_t bcm56780_a0_dna_2_4_13_ptrm_table_data = {
    .table_data =     bcm56780_a0_dna_2_4_13_ptrm_table,
    .table_data_count = 105,/* implicit length assignment */
};
static const bcmptm_ptrm_table_t bcm56780_a0_dna_2_4_13_ptrm_table[105] = {
    {
        .handler = bcm56780_a0_dna_2_4_13_destination_fp_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_DESTINATION_FP_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_multicast_defip_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_MULTICAST_DEFIP_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_tunnel_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_TUNNEL_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_unicast_defip_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_UNICAST_DEFIP_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_multicast_defip_128_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_DEFIP_128_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_multicast_defip_64_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_DEFIP_64_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_tunnel_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_TUNNEL_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_unicast_defip_128_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_UNICAST_DEFIP_128_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_unicast_defip_64_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_UNICAST_DEFIP_64_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_my_station_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_MY_STATION_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_pkt_integrity_check_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_PKT_INTEGRITY_CHECK_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_protocol_pkt_forward_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_PROTOCOL_PKT_FORWARD_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_egr_vlan_translation_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATIONt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_egr_vlan_translation_2_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_2t,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_egr_vlan_translation_dw_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_DWt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_egr_vlan_translation_svtag_assign_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_EGR_VLAN_TRANSLATION_SVTAG_ASSIGN_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_ing_vlan_xlate_1_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_ING_VLAN_XLATE_1_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_ing_vlan_xlate_2_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_ING_VLAN_XLATE_2_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_ing_vlan_xlate_3_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_ING_VLAN_XLATE_3_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_host_lookup0_default_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_HOST_LOOKUP0_DEFAULT_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_host_narrow_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_HOST_NARROW_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_host_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_HOST_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_ipv4_multicast_sg_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_IPV4_MULTICAST_SG_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_ipv4_multicast_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_IPV4_MULTICAST_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_ipv6_multicast_sg_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_IPV6_MULTICAST_SG_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_ipv6_multicast_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_IPV6_MULTICAST_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_tunnel_ipv4_dip_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_TUNNEL_IPV4_DIP_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_tunnel_ipv4_sip_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_TUNNEL_IPV4_SIP_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_tunnel_ipv6_dip_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_TUNNEL_IPV6_DIP_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_tunnel_ipv6_sip_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_TUNNEL_IPV6_SIP_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l2_tunnel_vn_id_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L2_TUNNEL_VN_ID_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ip_lookup0_default_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IP_LOOKUP0_DEFAULT_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ip_lookup1_default_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IP_LOOKUP1_DEFAULT_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ipv4_multicast_1_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_MULTICAST_1_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ipv4_multicast_2_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_MULTICAST_2_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ipv4_tunnel_em_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_TUNNEL_EM_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ipv4_unicast_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_UNICAST_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ipv6_multicast_1_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_1_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ipv6_multicast_2_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_MULTICAST_2_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ipv6_tunnel_em_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_TUNNEL_EM_TABLEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_l3_ipv6_unicast_table_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_UNICAST_TABLEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_comp_dst_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_COMP_DSTt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_comp_dst_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_COMP_DST_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_comp_src_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_COMP_SRCt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_comp_src_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_COMP_SRC_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_uc_route_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_UC_ROUTEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_uc_route_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_UC_ROUTE_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_uc_route_override_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_UC_ROUTE_OVERRIDEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_uc_route_override_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_UC_ROUTE_OVERRIDE_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_uc_route_vrf_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_UC_ROUTE_VRFt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv4_uc_route_vrf_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV4_UC_ROUTE_VRF_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_comp_dst_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_COMP_DSTt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_comp_dst_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_COMP_DST_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_comp_src_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_COMP_SRCt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_comp_src_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_COMP_SRC_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_uc_route_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_UC_ROUTEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_uc_route_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_UC_ROUTE_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_uc_route_override_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_uc_route_override_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_UC_ROUTE_OVERRIDE_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_uc_route_vrf_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_UC_ROUTE_VRFt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_ipv6_uc_route_vrf_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_IPV6_UC_ROUTE_VRF_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv4_uc_route_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv4_uc_route_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv4_uc_route_override_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_OVERRIDEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv4_uc_route_override_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_OVERRIDE_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv4_uc_route_vrf_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRFt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv4_uc_route_vrf_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV4_UC_ROUTE_VRF_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv6_uc_route_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV6_UC_ROUTEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv6_uc_route_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV6_UC_ROUTE_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv6_uc_route_override_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV6_UC_ROUTE_OVERRIDEt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv6_uc_route_override_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV6_UC_ROUTE_OVERRIDE_MTOPt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv6_uc_route_vrf_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV6_UC_ROUTE_VRFt,
    },
    {
        .handler = bcm56780_a0_dna_2_4_13_l3_src_ipv6_uc_route_vrf_mtop_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_L3_SRC_IPV6_UC_ROUTE_VRF_MTOPt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_dt_efp_presel_template_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_DT_EFP_PRESEL_TEMPLATEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_dt_em_fp_presel_template_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_DT_EM_FP_PRESEL_TEMPLATEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_dt_em_ft_presel_template_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_DT_EM_FT_PRESEL_TEMPLATEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_dt_ifp_presel_template_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_DT_IFP_PRESEL_TEMPLATEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_dt_vfp_presel_template_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_DT_VFP_PRESEL_TEMPLATEt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_flex_digest_lkup_lt_mreq_info,
        .sid = BCM56780_A0_DNA_2_4_13_FLEX_DIGEST_LKUPt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_dt_efp_entry_lt_mreq_info,
        .sid = DT_EFP_ENTRYt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_dt_ifp_entry_lt_mreq_info,
        .sid = DT_IFP_ENTRYt,
    },
    {
        .handler = &bcm56780_a0_dna_2_4_13_dt_vfp_entry_lt_mreq_info,
        .sid = DT_VFP_ENTRYt,
    },
    {
        .handler = &bcm56780_a0_tnl_mpls_control_pkt_lt_mreq_info,
        .sid = TNL_MPLS_CONTROL_PKTt,
    },
    {
        .handler = &bcm56780_a0_tnl_mpls_label_decap_policy_lt_mreq_info,
        .sid = TNL_MPLS_LABEL_DECAP_POLICYt,
    },
    {
        .handler = &bcm56780_a0_tnl_mpls_special_label_lt_mreq_info,
        .sid = TNL_MPLS_SPECIAL_LABELt,
    },
    {
        .handler = &bcm56780_a0_cpu_cos_tcam_lt_mreq_info,
        .sid = TM_COS_Q_CPU_MAPt,
    },
    {
        .handler = &bcm56780_a0_dt_em_ft_entry_lt_mreq_info,
        .sid = DT_EM_FT_ENTRYt,
    },
    {
        .handler = &bcm56780_a0_dt_em_fp_entry_lt_mreq_info,
        .sid = DT_EM_FP_ENTRYt,
    },
    {
        .handler = &bcm56780_a0_svtag_cpu_map_lt_mreq_info,
        .sid = SEC_SVTAG_CPU_MAPt,
    },
    {
        .handler = &bcm56780_a0_secure_channel_macsec_lt_mreq_info,
        .sid = SEC_DECRYPT_MACSEC_SCt,
    },
    {
        .handler = &bcm56780_a0_secure_channel_ipsec_lt_mreq_info,
        .sid = SEC_DECRYPT_IPSEC_SCt,
    },
    {
        .handler = &bcm56780_a0_subport_flow_ethernet_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_ETHERNET_IIt,
    },
    {
        .handler = &bcm56780_a0_subport_flow_snap_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_SNAPt,
    },
    {
        .handler = &bcm56780_a0_subport_flow_llc_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_LLCt,
    },
    {
        .handler = &bcm56780_a0_subport_flow_mpls_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_MPLSt,
    },
    {
        .handler = &bcm56780_a0_subport_flow_pbb_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_PBBt,
    },
    {
        .handler = &bcm56780_a0_subport_flow_vntag_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_VNTAGt,
    },
    {
        .handler = &bcm56780_a0_subport_flow_etag_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_ETAGt,
    },
    {
        .handler = &bcm56780_a0_subport_flow_ipv4_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_IPV4t,
    },
    {
        .handler = &bcm56780_a0_subport_flow_udp_over_ipv4_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_UDP_OVER_IPV4t,
    },
    {
        .handler = &bcm56780_a0_subport_flow_tcp_over_ipv4_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_TCP_OVER_IPV4t,
    },
    {
        .handler = &bcm56780_a0_subport_flow_ipv6_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_IPV6t,
    },
    {
        .handler = &bcm56780_a0_subport_flow_udp_over_ipv6_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_UDP_OVER_IPV6t,
    },
    {
        .handler = &bcm56780_a0_subport_flow_ipv6_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOW_TCP_OVER_IPV6t,
    },
    {
        .handler = &bcm56780_a0_subport_flow_lt_mreq_info,
        .sid = SEC_DECRYPT_SUBPORT_FLOWt,
    },
};

