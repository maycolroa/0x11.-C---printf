#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct s_format - Structure va-list
 * @args: pointer arguments
 * @func: pointer function
 */
typedef struct s_format
{
	char *args;
	int (*func)(va_list);
} s_format;
int _putchar(char c);
int _printf(const char *format, ...);
int (*text_format(const char *arga, int argb))(va_list);
int print_char(va_list list_argument);
int print_string(va_list list_argument);
int print_integer(va_list list_argument);
int count_characters(unsigned int n);
#endif
