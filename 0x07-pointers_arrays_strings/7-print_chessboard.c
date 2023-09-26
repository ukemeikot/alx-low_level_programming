#include "main.h"

/**
 * print_chessboard - function to print chessboard
 * @a: parameter for the function
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int c = 0, b = 0;

	while (c < 8)
	{
		while (b < 8)
		{
			_putchar(a[c][b]);
			b++;
		}
		_putchar('\n');
		c++;
		b = 0;
	}
}
