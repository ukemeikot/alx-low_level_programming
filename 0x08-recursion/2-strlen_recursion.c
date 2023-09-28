#include "main.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: the string holder
 * Return: the integer value of the length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
