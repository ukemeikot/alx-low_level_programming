#include "main.h"

/**
 * _memset - the function that helps to set to a certain bytes
 * @s: the charcter to be return
 * @b: th charcter to be assigned
 * @n: the size of the memory to be set
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	}
	return (s);
}
