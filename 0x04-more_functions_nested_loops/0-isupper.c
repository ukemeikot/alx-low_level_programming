#include "main.h"

/**
 *_isupper - prints the upper character
 * @c: the character to be checked.
 * Return: returns 1 for uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{	
		return (1);
	}
	else
	{
		return (0);
	}

}
