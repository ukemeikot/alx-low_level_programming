#include "main.h"

/**
 * print_last_digit- prints the last digit of a number
 * @q: the recieved number
 * Return: returns the last digit
 */

int print_last_digit(int q)
{
	q = q % 10;
	if (q < 0)
		q = q * (-1);
	_putchar(q + '0');
	return (q);
}
