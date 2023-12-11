#include "main.h"

/**
 * _puts - put characters of strings to the stdout
 * @str: a pointer to a string memory location
 * Return: void
 */

void _puts(char *str)
{

	char c = *str;
	int index = 0;

	while (c != '\0')
	{
		_putchar(str[index]);
		index++;
		c = *(str + index);
	}
	_putchar('\n');
}
