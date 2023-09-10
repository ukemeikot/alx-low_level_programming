#include <stdio.h>

/**
 * main-the main function code goes here
 * Return: always returns zero
 */

int main(void)
{
	int n, m, o;

	for (o = 0; o <= 7; o++)
	{
	for (n = o + 1; o <= 8; o++)
		{
		for (m = n + 1; m < 10; m++)
			{
			putchar((o % 10) + '0');
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');
			if (0 == 7 && n == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}
