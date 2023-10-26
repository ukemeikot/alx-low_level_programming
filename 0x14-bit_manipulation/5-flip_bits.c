#include "main.h"
/**
 * flip_bits - determines the number of bits needed to flip
 * to get to another bits.
 * @n: the initial number
 * @m: the destination number
 * Return: the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	for (; result > 0; result >>= 1)
		count += result & 1;
	return (count);
}
