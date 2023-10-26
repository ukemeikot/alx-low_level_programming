#include "main.h"
/**
 * set_bit - sets bits at a given index
 * @n: the number
 * @index: the index to be set
 * Return: 1 if it worked and 0 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setter = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= setter;
	return (1);
}
