#include "main.h"

/**
 * _strncpy - function that cpopies strings in c
 * @dest: destination string
 * @src: source string
 * @n: the number of charcters in the string to be copied
 * Return: the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

