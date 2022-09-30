/*
 * Copyright (c) 2022 Shigemi ISHIDA
 *
 * This software is released under the MIT License.
 * http://opensource.org/licenses/mit-license.php
 */

/**
 * @file
 *      Header file for main module.
 * @author
 *      Shigemi Ishida <ish+devel@fun.ac.jp>
 */
#ifndef __MAIN_H_
#define __MAIN_H_

/*======================================================================
 * includes
 *======================================================================*/

/*======================================================================
 * constants
 *======================================================================*/

/*======================================================================
 * typedefs, structures
 *======================================================================*/
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;

/**
 * @struct
 *      operation parameters.
 */
typedef struct opr_strct
{
    char *arg1;                 /**< argument 1 */
} opr_t;

#endif  /* #ifndef __MAIN_H_ */
