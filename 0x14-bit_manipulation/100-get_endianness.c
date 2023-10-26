#include "main.h"

/**
 * get_endianness - gets the type of endianness
 * Return: 0 for small and 1 for big
 */

int get_endianness(void)
{
	unsigned int t_value = 1;
	char *byte_ptr = (char *)&t_value;

	return ((byte_ptr[0] == 1) ? 1 : 0);
}
