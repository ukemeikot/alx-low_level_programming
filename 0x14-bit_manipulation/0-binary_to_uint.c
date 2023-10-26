#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned integers.
 * @b: the string passed to it.
 * Return: then unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int a = 0;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] == '0')
			number = number * 2;
		else if (b[a] == '1')
			number = number * 2 + 1;
		else
			return (0);
	}
	return (number);
}
