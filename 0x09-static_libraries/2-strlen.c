#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the character holder
 * Return: the string length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
		return (count);
}
