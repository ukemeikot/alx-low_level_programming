#include "main.h"

/* declare the function prototype to assist*/
int primechecker(int num, int pr);

/**
 * is_prime_number - function to check for prime numbers
 * @n: the number whose prime is to be checked
 * Return: 1 if is prime or 0 otherwie
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primechecker(n, n - 1));
}
/**
 * primechecker - the actual prime checker
 * @num: the number whose prime is to nbe checked
 * @pr: the function parameter
 * Return: as stated above
 */

int primechecker(int num, int pr)
{
	if (pr == 1)
		return (1);
	if (num  % pr == 0 && pr > 0)
		return (0);
	return (primechecker(num, pr - 1));
}
