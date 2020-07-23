/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table definition files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef BCMLTD_LB_HASH_CONSTANTS_H
#define BCMLTD_LB_HASH_CONSTANTS_H
#ifndef DOXYGEN_IGNORE_AUTOGEN
/*!
 * Number of extended flex field selectors (14 to 25) available for
 * flexible hashing.
 */
#define LB_HASH_NUM_EXT_FLEX_FIELDS 12

/*!
 * Number of flex field selectors available for flexible
 * hashing in addition to the two fields for hash bin 2 and bin 3.
 */
#define LB_HASH_NUM_EXT_UDF_FLEX_FIELDS 23

/*!
 * Number of flex field selectors (3 to 13) available for flexible hashing
 * in addition to the two flex hash bin 2 and bin 3.
 */
#define LB_HASH_NUM_FLEX_FIELDS 11

/*! Number of sub-field selections (0 to 7) for load balance hashing. */
#define LB_HASH_NUM_SUB_FIELDS 8

/*!
 * Number of flex field selectors (3 to 13) available for flexible
 * hashing in addition to the two fields for hash bin 2 and bin 3.
 */
#define LB_HASH_NUM_UDF_FLEX_FIELDS 11

#endif /* DOXYGEN_IGNORE_AUTOGEN */
#endif /* BCMLTD_LB_HASH_CONSTANTS_H */
