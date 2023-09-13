#include "main.h"

/**
 *times_table - prints 9 times table
 *Description: prints the timetable
 *Return: void
 */

void times_table(void)
{
	int r, c, x, tn, on;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			x = r * c;
			tn = x / 10;
			on = x % 10;
			if (c == 0)
			{
				_putchar('0');
			}
			else if (x < 10)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(on + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tn + '0');
				_putchar(on + '0');
			}
		}
		_putchar('\n');
	}
}
