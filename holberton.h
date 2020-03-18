#ifndef _HEADER_FILE_
#define _HEADER_FILE_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * struct ch_fmt - sees if the format matches
 * @c: the char of the format
 * @f: function to make
 */
typedef struct ch_fmt
{
	char c;
	char* (*f)(va_list);
} fmt_type;
void print_strings(const char *separator, const unsigned int n, ...);
int _printf(const char * const format, ...);
char *return_binary(int n);
char *print_char(va_list a);
char *print_string(va_list a);
char *return_integer(int n);
char *print_integer2(int count, int n);
char *print_int(va_list a);
char *print_binary(va_list a);
#endif
