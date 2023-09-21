#include "main.h"

/**
*_strncat - concatenate with given bytes limit
*@dest: destination string
*@src: source string
*Return: dest string
*/

char *_strncat(char *dest, char *src, int n)
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
	for (k = 0; (k < n && src[k] != '\0'); k++)
	{
		dest[i + k] = src[k];
	}
	return (dest);
}
