#include "main.h"

/**
 * _isalpha-checks character
 * Description
 *@c:the character
 * Return: returns 1 for alphabets and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
