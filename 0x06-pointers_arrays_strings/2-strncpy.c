#include "main.h"

/**
 * _strncpy - function that cpopies strings in c
 * @dest: destination string
 * @src: source string
 * Return: the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int k;

	while (src[i] != '\0')
	{
		i++;
	}
	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}

