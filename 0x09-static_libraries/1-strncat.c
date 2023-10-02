#include "main.h"

/**
*_strncat - concatenate with given bytes limit
*@dest: destination string
*@src: source string
*@n: the number of elements to be copied.
*Return: dest string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
