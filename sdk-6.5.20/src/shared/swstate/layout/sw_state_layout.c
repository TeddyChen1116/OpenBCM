/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
*/
#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/swstate/sw_state_utils.h>
#include <shared/bsl.h>
#include <shared/swstate/layout/sw_state_layout.h>
#include <shared/swstate/layout/sw_state_layout.h>

#ifdef _ERR_MSG_MODULE_NAME  
  #error "_ERR_MSG_MODULE_NAME redefined"  
#endif  
#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE 
int sw_state_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   int younger_brother_node_id = 0; 
   int offset = 0; 
   shr_sw_state_t* dummy_struct; 
   SOC_INIT_FUNC_DEFS;
   /* alloc dummy struct */ 
   dummy_struct = sal_alloc(sizeof(shr_sw_state_t),"shr_sw_state_t"); 

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "sw_state",             /* name */         
                                   sizeof(shr_sw_state_t),    /* size of the element's type*/          
                                   1,                 /* nof pointers */ 
                                   "shr_sw_state_t",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

#ifdef BCM_PETRA_SUPPORT
   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->dpp)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef _SHR_SW_STATE_EXM
   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_exm_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->exm)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_exmMixStatDyn_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->exmMixStatDyn)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_miniExm_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->miniExm)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_issu_example_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->issu_example)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 
#endif /* _SHR_SW_STATE_EXM*/ 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_issu_test_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->issu_test)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   SOC_EXIT;
 exit:
   /* free dummy struct */ 
   sal_free(dummy_struct); 
   SOC_FUNC_RETURN;
}

