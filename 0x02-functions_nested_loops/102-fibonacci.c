#include <stdio.h>

/**
 * main - prints fibonacci numbers
 * Return: o on success
 */

int main(void)
{
	int n = 0;
	long a = 1, b = 2;

	while (n < 50)
	{
		if (n == 0)
			printf("%ld", a);
		else if (n == 1)
		{
			printf(", %ld", b);
		}
		else
		{
			a += b;
			b = a - b;
			printf(", %ld", b);
		}
		++n;
	}
	printf("\n");
	return (0);
}
