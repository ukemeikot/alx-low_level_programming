#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments passed to the function.
 * @n: the number of arguments passed.
 * Return: the sum of all the arguments passed.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	va_list elements;

	va_start(elements, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(elements, int);
	}
	va_end(elements);
	return (sum);
}
