#include "variadic_functions.h"

/**
 * print_strings - prints strings to the screen
 * @separator: the string to be printed between strings
 * @n: the number of string charaters
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list elements;
	unsigned int a;
	char *s;

	va_start(elements, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(elements, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if ((a != n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(elements);
}
