#include "main.h"

/**
 * _puts_recursion - puts all the characters of a string
 * @s: the string holder
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}
