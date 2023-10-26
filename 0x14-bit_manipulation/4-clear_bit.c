#include "main.h"

/**
 * clear_bit - clears bit at a given index.
 * @n: the number
 * @index: the index
 * Return: 1 if successful and -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setter = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~setter;
	return (1);
}
