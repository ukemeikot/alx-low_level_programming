#include "main.h"

/**
 * puts_half - to print half of the string
 * @str: the character holder
 * Return: nothing
 */

void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n;
	int i;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

	if (length_of_the_string  % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
	}
	for (i = n; i <= length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
