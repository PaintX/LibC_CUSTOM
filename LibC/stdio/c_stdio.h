#ifndef C_STDIO_H_INCLUDED
#define C_STDIO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include "TypeDefs.h"

#define MAXBUFFER           512


#define C_STDOUT            0
#define C_STDERR            1
#define C_STDIN             2

void TEST_LibC_Custom(void);

char *fcvtbuf(double arg, int ndigits, int *decpt, int *sign, char *buf);
char *ecvtbuf(double arg, int ndigits, int *decpt, int *sign, char *buf);

INT16 c_output    (STRING stream, const STRING format, va_list args);
void  c_puts      (STRING string);
void  c_putc      (CHAR8   c);

int   c_vfprintf  (int stream, const char *fmt, va_list args);
INT32 c_printf    (const STRING fmt, ...);
INT32 c_sprintf   (STRING buf, const STRING fmt, ...);

#endif // C_STDIO_H_INCLUDED
