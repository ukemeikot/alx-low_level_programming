#include "main.h"
#include <stdio.h>
/**
 * main - function to print multiples of 3 and 5
 * Return:0
 */

int main(void)
{
	long sum = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
