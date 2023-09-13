#include <stdio.h>

/**
 * main - prints the required sum
 * return: 0
 */

int main(void)
{
	int n = 0;
	long a = 1, b = 2, sum = b;

	while (a + b < 400000)
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
