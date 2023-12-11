#include "main.h"

/**
 * _strcpy - copy string from one place to another
 * @dest: destination
 * @src: source
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;
	char c = *src;

	while (c != '\0')
	{
		dest[index] = *(src + index);
		index++;
		c = *(src + index);
	}
	dest[index] = '\0';
	return (dest);
}
