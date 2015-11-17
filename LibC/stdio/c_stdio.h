#ifndef C_STDIO_H_INCLUDED
#define C_STDIO_H_INCLUDED

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

#define MAXBUFFER           512



#define C_STDOUT            0
#define C_STDERR            1
#define C_STDIN             2

int c_output(char* stream, const char *format, va_list args);

int c_vfprintf  (int stream, const char *fmt, va_list args);
int c_printf    (const char *fmt , ...);
int c_sprintf   (char *buf, const char *fmt, ...);

#endif // C_STDIO_H_INCLUDED
