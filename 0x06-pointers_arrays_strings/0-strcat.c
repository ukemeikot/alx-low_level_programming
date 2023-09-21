#include "main.h"

/**
 *_strcat - concatenate two strings
 *@dest: destination string
 *@src: source string
 *Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (k = 0; k < j; k++)
	{
		dest[i + k] = src[k];
	}
	dest[i + k] = '\0';
	return (dest);
}
