#include "main.h"

/**
 * _strchr - check for a charcter in a string
 * @s: the entered string
 * @c: the charcter to be checked
 * Return: the charcter if found and null otherwise
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s[a]);
	}
	return (0);
}
