/*
 * Copyright (c) 2022 Shigemi ISHIDA
 *
 * This software is released under the MIT License.
 * http://opensource.org/licenses/mit-license.php
 */

/**
 * @file
 *      Tools.
 * @author
 *      Shigemi Ishida <ish+devel@fun.ac.jp>
 *
 * Some common tools.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <sys/time.h>

/*======================================================================
 * prototype declarations for private functions
 *======================================================================*/

/*======================================================================
 * constants and macros
 *======================================================================*/

/*======================================================================
 * global variables
 *======================================================================*/

/*------------------------------
 * private
 *------------------------------*/

/*======================================================================
 * functions
 *======================================================================*/
int is_number(char *num_str)
{
    for (; *num_str != '\0'; num_str++)
    {
        if (!isdigit((unsigned char)*num_str))
        {
            return 0;
        }
    }
    return 1;
}

/* end of tool.c */
