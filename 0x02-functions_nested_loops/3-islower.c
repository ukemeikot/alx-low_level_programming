#include "main.h"

/**
 * _islower-entry point
 * Description: function that checks for lowercase character
 *@c:character that checks for lowercase
 *Return: returns 1 if lower case and 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 'z')
		return (1);
	else
		return (0);
}
