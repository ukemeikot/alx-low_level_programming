#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef void (*print_function)(va_list args);
/**
 * struct format_mapping - structure to map the format
 * @format: the format specifier passed.
 * @print_function: the function to print the result
 */
typedef struct format_mapping
{
	char *format;
	print_function printer;
} fm;

#include <stdio.h>
#endif
