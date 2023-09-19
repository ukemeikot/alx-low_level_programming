#include "main.h"

/**
 * puts2 - function to print every other character
 * @str: the string holder
 * Return: nothing
 */

void puts2(char *str)
{
	int length = 0;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (length % 2 == 0)
		_putchar(str[length]);
	}
	_putchar('\n');
}
