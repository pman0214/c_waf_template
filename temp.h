/*
 * Copyright (c) 2022 Shigemi ISHIDA
 *
 * This software is released under the MIT License.
 * http://opensource.org/licenses/mit-license.php
 */

/**
 * @file
 *      Header file for <temp>.
 * @author
 *      Shigemi Ishida <ish+devel@fun.ac.jp>
 */
#ifndef __TEMP_H_
#define __TEMP_H_

/*======================================================================
 * includes
 *======================================================================*/
#include "main.h"

/*======================================================================
 * constants, macros
 *======================================================================*/

/*======================================================================
 * typedefs, structures
 *======================================================================*/

/*======================================================================
 * prototype declarations
 *======================================================================*/

/**
 * @brief      <temp> init.
 * @param[in,out] opr Operation parameters.
 * @return      Returns 0 on success.
 *              Returns minus value on any error.
 *
 * This function initializes <temp>.
 */
int temp_init(opr_t *opr);

/**
 * @brief       <temp> de-init.
 * @param[in,out] opr Pointer to the operation parameters.
 *
 * This function closes <temp>.
 */
void temp_deinit(opr_t *opr);

#endif  /* #ifndef __TEMP_H_ */
