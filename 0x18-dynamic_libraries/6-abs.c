#include "main.h"
/**
 * _abs - determine absolute value of a number
 * Return: absolute value
 * @c: integer parameter
 */
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);
	else
		return (c);
}
