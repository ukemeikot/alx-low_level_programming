#include "main.h"
int sqrt_finder(int number, int R);

/**
 * _sqrt_recursion - function that returns the square root
 * @n: the number to determine the square root
 * Return: the square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_finder(n, 0));
}

/**
 * sqrt_finder - function to support the main function
 * @number: the number whose root is to be found
 * @R: the root checker
 * Return: returns the root of the number
 */

int sqrt_finder(int number, int R)
{
	if (R * R > number)
	{
		return (-1);
	}
	else if (R * R == number)
	{
		return (R);
	}
	else
		return (sqrt_finder(number, R + 1));

}
