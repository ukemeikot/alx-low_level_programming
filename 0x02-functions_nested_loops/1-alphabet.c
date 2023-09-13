#include "main.h"

/**
 *print_alphabet- this function prints letters of the alhpabet to the screen
 *return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
