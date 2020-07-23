

/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef _DNX_DATA_MAX_LIF_H_

#define _DNX_DATA_MAX_LIF_H_




#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif



#define DNX_DATA_MAX_LIF_GLOBAL_LIF_USE_MDB_SIZE (1)


#define DNX_DATA_MAX_LIF_GLOBAL_LIF_GLEM_RIF_OPTIMIZATION_ENABLED (1)


#define DNX_DATA_MAX_LIF_GLOBAL_LIF_NULL_LIF (1)


#define DNX_DATA_MAX_LIF_IN_LIF_INLIF_INDEX_BIT_SIZE (60)


#define DNX_DATA_MAX_LIF_IN_LIF_INLIF_MINIMUM_INDEX_SIZE (2)


#define DNX_DATA_MAX_LIF_IN_LIF_INLIF_RESOURCE_TAG_SIZE (6)


#define DNX_DATA_MAX_LIF_IN_LIF_NOF_IN_LIF_PROFILES (256)


#define DNX_DATA_MAX_LIF_IN_LIF_NOF_USED_IN_LIF_PROFILE_BITS (7)


#define DNX_DATA_MAX_LIF_IN_LIF_NOF_USED_ETH_RIF_PROFILE_BITS (7)


#define DNX_DATA_MAX_LIF_IN_LIF_NOF_IN_LIF_INCOMING_ORIENTATION (8)


#define DNX_DATA_MAX_LIF_IN_LIF_NOF_ETH_RIF_PROFILES (128)


#define DNX_DATA_MAX_LIF_IN_LIF_NOF_DA_NOT_FOUND_DESTINATION_PROFILES (4)


#define DNX_DATA_MAX_LIF_IN_LIF_DEFAULT_DA_NOT_FOUND_DESTINATION_PROFILE (0)


#define DNX_DATA_MAX_LIF_IN_LIF_DROP_IN_LIF (0)


#define DNX_DATA_MAX_LIF_IN_LIF_MC_BRIDGE_FALLBACK_PER_LIF_PROFILE (1)


#define DNX_DATA_MAX_LIF_OUT_LIF_NOF_OUT_LIF_PROFILES (64)


#define DNX_DATA_MAX_LIF_OUT_LIF_NOF_ERPP_OUT_LIF_PROFILES (8)


#define DNX_DATA_MAX_LIF_OUT_LIF_NOF_OUT_LIF_OUTGOING_ORIENTATION (8)


#define DNX_DATA_MAX_LIF_OUT_LIF_OUTRIF_PROFILE_WIDTH (4)


#define DNX_DATA_MAX_LIF_OUT_LIF_GLEM_RESULT (20)


#define DNX_DATA_MAX_LIF_OUT_LIF_PHYSICAL_BANK_POINTER_SIZE (7)


#define DNX_DATA_MAX_LIF_OUT_LIF_OUTLIF_EEDB_BANKS_POINTER_SIZE (19)


#define DNX_DATA_MAX_LIF_LIF_TABLE_MANAGER_MAX_NOF_LIF_TABLES (100)


#define DNX_DATA_MAX_LIF_LIF_TABLE_MANAGER_MAX_NOF_RESULT_TYPES (30)


#define DNX_DATA_MAX_LIF_LIF_TABLE_MANAGER_MAX_FIELDS_PER_RESULT_TYPE (64)


#define DNX_DATA_MAX_LIF_LIF_TABLE_MANAGER_MAX_FIELDS_PER_TABLE (64)




#endif 

