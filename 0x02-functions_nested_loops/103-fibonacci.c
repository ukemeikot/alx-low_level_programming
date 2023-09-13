#include <stdio.h>

/**
 * main-print sum of even fibonacii numbers
 * less than 4000000
 * Return: 0.
 */

int main(void)
{
	int n = 0;
	long a = 1, b = 2, sum = b;

	while (a + b < 4000000)
	{
		b += a;
		if (b % 2 == 0)
			sum += b;
		a = b - a;
		++n;
	}
	printf("%ld", sum);
	return (0);
}
