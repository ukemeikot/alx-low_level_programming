#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * for which cmp does not return.
 * @array: holds the arrays for the desired elements
 * @size: the size of the array
 * @cmp: the pointer to a function
 * Return: returns index of the first elements that cmp does
 * not return 0. Returns -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
