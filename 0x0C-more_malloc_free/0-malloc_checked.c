#include "main.h"

/**
 * malloc_checked - this function allocates memory using
 * malloc function
 * @b: the size of the desired memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		return (98);
	return (mem);
}
