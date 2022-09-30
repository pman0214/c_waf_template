/*
 * Copyright (c) 2022 Shigemi ISHIDA
 *
 * This software is released under the MIT License.
 * http://opensource.org/licenses/mit-license.php
 */

/**
 * @file
 *      Xxx main module.
 * @author
 *      Shigemi Ishida <ish+devel@fun.ac.jp>
 *
 * XXX program.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "tool.h"
#include "main.h"

/*======================================================================
 * global variables
 *======================================================================*/

/*------------------------------
 * private
 *------------------------------*/

/*======================================================================
 * prototype declarations for private functions
 *======================================================================*/
static int arg_handler(int argc, char *argv[], opr_t *opr);
static int global_init(opr_t *opr);
static void global_deinit(opr_t *opr);
static void usage(void);

/*======================================================================
 * functions
 *======================================================================*/
int main(int argc, char *argv[])
{
    opr_t opr;                  /* operation parameters */
    int   ret;                  /* return value handler */

    /* initialize data */
    memset(&opr, 0, sizeof(opr));

    /* handling options, arguments */
    ret = arg_handler(argc, argv, &opr);
    if (ret < 0)
    {
        return 0x80010010;
    }

    ret = global_init(&opr);
    if (ret < 0)
    {
        global_deinit(&opr);
        return ret;
    }

    /*----------------------------------------------------------------------*/

    global_deinit(&opr);

    return 0;
}

/*======================================================================
 * private functions
 *======================================================================*/
static int arg_handler(int argc, char *argv[], opr_t *opr)
{
    int ret;

    /*------------------------------
     * handling options
     *------------------------------*/
    for (;;)
    {
        ret = getopt(argc, argv, "h");

        if (ret < 0)
        {
            break;
        }
        switch (ret)
        {
        case 'h':
            usage();
            exit(0);
        case '?':               /* invalid option */
            usage();
            return 0xc00101ee;
            break;
        default:                /* no route to here */
            usage();
            return 0xc00101ff;
            break;
        }
    }

    /*------------------------------
     * handling arguments
     *------------------------------*/
    switch (argc - optind)
    {
    case 1:
        opr->arg1 = argv[optind];
        break;
    default:
        usage();
        return 0xc0010700;
        break;
    }

    return 0;
}

/*----------------------------------------------------------------------*/
static int global_init(opr_t *opr)
{
    return 0;
}

/*----------------------------------------------------------------------*/
static void global_deinit(opr_t *opr)
{
    return;
}

/*----------------------------------------------------------------------*/
static void usage(void)
{
    puts("Usage: " TARGET
         " [-h]"
         " [-d <debug_level>]"
         " <argument_1>");
    puts("Options:");
    puts("  -h show this help and exit");

    return;
}

/* end of main.c */
