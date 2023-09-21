#include "main.h"

/**
 * string_toupper - the string conversion function
 * @n: the character to be changed
 * Return: the changed character
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
