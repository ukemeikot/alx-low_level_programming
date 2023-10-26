#include "main.h"
/**
 * get_bit - gets bits at a given index
 * @n: the number passed
 * @index: the desired index
 * Return: the value of the bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
