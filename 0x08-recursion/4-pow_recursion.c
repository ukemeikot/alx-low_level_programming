#include "main.h"

/**
 * _pow_recursion - print thenumber raised to its power
 * @x: the number
 * @y: the power
 * Return: returns the solution
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
