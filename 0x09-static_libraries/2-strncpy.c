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
	int i;
		for (i = 0; (i < n && src[i] != '\0'); i++)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}

