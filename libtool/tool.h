/*
 * Copyright (c) 2022 Shigemi ISHIDA
 *
 * This software is released under the MIT License.
 * http://opensource.org/licenses/mit-license.php
 */

/**
 * @file
 *      Header file for tools.
 * @author
 *      Shigemi Ishida <ish+devel@fun.ac.jp>
 */
#ifndef __TOOL_H
#define __TOOL_H

#ifdef __cplusplus
extern "C" {
#endif  /* #ifdef __cplusplus */

/*======================================================================
 * includes
 *======================================================================*/
#include <sys/time.h>

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
 * @brief       Validate decimal number string.
 * @param[in] num_str String to validate.
 * @return      Returns 1 when num_str is decimal number string.
 *              Returns 0 when num_str includes non-decimal character.
 */
int is_number(char *num_str);

#ifdef __cplusplus
}
#endif  /* #ifdef __cplusplus */

#endif  /* #ifndef __TOOL_H */
