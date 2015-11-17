/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
/* doc in sprintf.c */
#include "c_stdio.h"

int c_printf(const char *fmt, ...)
{
    char buffer[MAXBUFFER];
    int ret;

    ret = c_sprintf(buffer, fmt, args);

 /*   va_list args;

    va_start(args, fmt);
    ret = c_output(buffer, fmt, args);
    va_end (args);
*/
    //-- appliquer ici une fonction de sortie


    return ret;
}

