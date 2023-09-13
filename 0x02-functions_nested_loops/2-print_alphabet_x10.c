#include "main.h"

/**
 * print_alphabet_x10: prints 10 times the alphabet in lowercase
 * Return: this function returns a value of zero
 */

void print_alphabet_x10(void)
{
int n;
char c;

for (n = 0; n < 10; n++)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
}
