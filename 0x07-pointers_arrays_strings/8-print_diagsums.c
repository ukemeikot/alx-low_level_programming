#include "main.h"

/**
 * print_diagsums - the function that
 * print the sum of diagonals
 * @a:the entered matrix
 * @size: the size of the matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int principal_sum = 0;
	int secondary_sum = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		principal_sum = principal_sum + a[x * size + x];
		secondary_sum = secondary_sum + a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", principal_sum, secondary_sum);
}
