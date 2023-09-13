#include "main.h"

/**
 * _islower- this function checks for lower case alphabets
 * Return: returns 1 if is lower or zero if is not
 */

int _islower(int c)
{
	if (c > 96 && c < 'z')
		return (1);
	else
		return (0);
}
