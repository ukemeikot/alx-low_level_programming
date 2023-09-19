#include "main.h"

/**
 * puts2 - function to print every other character
 * @str: the string holder
 * Return: nothing
 */

void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length += 2;
	}
	_putchar('\n');
}
