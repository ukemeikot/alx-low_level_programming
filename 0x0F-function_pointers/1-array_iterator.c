#include "function_pointers.h"

/**
 * array_iterator - fucntion that executes a function on all
 * parameters f an array
 * @array: the array holder
 * @size: size of the array
 * @action: the function to be performed
 * Return: nothing as function is void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
