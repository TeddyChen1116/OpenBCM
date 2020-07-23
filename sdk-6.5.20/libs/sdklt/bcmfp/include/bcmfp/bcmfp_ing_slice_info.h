/*! \file bcmfp_ing_slice_info.h
 *
 * APIs corresponding to slice general info.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMFP_ING_SLICE_INFO_H
#define BCMFP_ING_SLICE_INFO_H

#include <bcmltd/bcmltd_handler.h>

/*!
 * \brief FP ingress slice information table validation.
 *
 * \param [in] unit Unit Number.
 * \param [in] opcode LT opcode.
 * \param [out] in Input field values.
 * \param [in] arg Custom table handler arguments.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmfp_ing_slice_info_validate(int unit,
                            bcmlt_opcode_t opcode,
                            const bcmltd_fields_t *in,
                            const bcmltd_generic_arg_t *arg);

/*!
 * \brief FP ingress slice information table insert.
 *
 * \param [in] unit Unit Number.
 * \param [in] op_arg Operation arguments.
 * \param [in] in Input field values.
 * \param [out] out Output field values (not applicable).
 * \param [in] arg Custom table handler arguments.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmfp_ing_slice_info_insert(int unit,
                          const bcmltd_op_arg_t *op_arg,
                          const bcmltd_fields_t *in,
                          bcmltd_fields_t *out,
                          const bcmltd_generic_arg_t *arg);

/*!
 * \brief FP ingress slice information table update.
 *
 * \param [in] unit Unit Number.
 * \param [in] op_arg Operation arguments.
 * \param [in] in Input field values.
 * \param [out] out Output field value (not applicable).
 * \param [in] arg Custom table handler arguments.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmfp_ing_slice_info_update(int unit,
                          const bcmltd_op_arg_t *op_arg,
                          const bcmltd_fields_t *in,
                          bcmltd_fields_t *out,
                          const bcmltd_generic_arg_t *arg);

/*!
 * \brief FP ingress slice information table delete.
 *
 * \param [in] unit Unit Number.
 * \param [in] op_arg Operation arguments.
 * \param [in] in Input field values.
 * \param [out] out Output field values (not applicable).
 * \param [in] arg Custom table handler arguments.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmfp_ing_slice_info_delete(int unit,
                          const bcmltd_op_arg_t *op_arg,
                          const bcmltd_fields_t *in,
                          bcmltd_fields_t *out,
                          const bcmltd_generic_arg_t *arg);

/*!
 * \brief FP ingress slice information table lookup.
 *
 * \param [in] unit Unit Number.
 * \param [in] op_arg Operation arguments.
 * \param [in] in Input field values.
 * \param [out] out Output field values.
 * \param [in] arg Custom table handler arguments.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmfp_ing_slice_info_lookup(int unit,
                          const bcmltd_op_arg_t *op_arg,
                          const bcmltd_fields_t *in,
                          bcmltd_fields_t *out,
                          const bcmltd_generic_arg_t *arg);

/*!
 * \brief FP ingress slice information table traverse first.
 *
 * \param [in] unit Unit Number.
 * \param [in] op_arg Operation arguments.
 * \param [in] in Input field values (not applicable).
 * \param [out] out Output field values.
 * \param [in] arg Custom table handler arguments.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmfp_ing_slice_info_first(int unit,
                         const bcmltd_op_arg_t *op_arg,
                         const bcmltd_fields_t *in,
                         bcmltd_fields_t *out,
                         const bcmltd_generic_arg_t *arg);

/*!
 * \brief FP ingress slice information table traverse next.
 *
 * \param [in] unit Unit Number.
 * \param [in] op_arg Operation arguments.
 * \param [in] in Input field values.
 * \param [out] out Output field values.
 * \param [in] arg Custom table handler arguments.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmfp_ing_slice_info_next(int unit,
                        const bcmltd_op_arg_t *op_arg,
                        const bcmltd_fields_t *in,
                        bcmltd_fields_t *out,
                        const bcmltd_generic_arg_t *arg);

#endif /* BCMFP_ING_SLICE_INFO_H */

