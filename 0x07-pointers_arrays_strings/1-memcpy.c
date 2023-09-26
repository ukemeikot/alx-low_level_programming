#include "main.h"

/**
 * _memcpy - to copy n bytes from a memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: the destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
