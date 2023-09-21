#include "main.h"

/**
 * reverse_array - the array reversing function
 * @a: the pointer to the array
 * @n: size of the array
 * Retu:rn nothing
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
