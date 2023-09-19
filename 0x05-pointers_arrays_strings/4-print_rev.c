#include "main.h"

/**
 * print_rev - prints characters in reverse
 * @s: the string holder
 * Return: nothing
 */

void print_rev(char *s)
{
	char *holder = s;

	while (*holder != '\0')
	{
		holder++;
	}
	holder--;
	while (holder >= s)
	{
		_putchar(*holder);
		holder--;

	}
	_putchar('\n');
}
