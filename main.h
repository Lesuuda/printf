#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>


int (*_specifier(const char *format))(va_list);
int _printf(const char *format, ...);
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_decimal(va_list);
int print_binary(va_list);
int print_binary_rec(unsigned int, int *);
/**
 * struct func - struct to determine the specifier to print
 * @t: character to compare
 * @f: function  to handle the specifier to be printed
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

#endif

