#include "main.h"

/**
 * reverse_array - the array reversing function
 * @a: the pointer to the array
 * @n: size of the array
 * Retu:rn nothing
 */

void reverse_array(int *a, int n)
{
	int *temp = a;
	int i;
	int k;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n-i-1];
	}
	for (k = 0; k < n; i++)
	{
		a[k] = temp[k];
	}
}
