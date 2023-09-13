#include "main.h"

/**
 * _abs- used to print absolute values
 * @q: the value
 * Return: returns the absolute value
 */

int _abs(int q)
{
	if (q < 0)
		q = q * (-1);
	return (q);
}
