#include "main.h"

/**
 * _strspn - function to get the length of a suffix
 * @s: the entered string
 * @accept: the host for the suffix
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int k;
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[a] == accept[k])
			{
				i++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (i);
		}
	}
	return (i);
}
