#include "main.h"

/**
 * _strlen - count strong length
 * @s: a pointer to a string memory location
 * Return: void
 */
int _strlen(char *s)
{
	int count = 0;
	/*check if pointer is valid*/
	if (*s)
	{
		char val;

		val = *(s + count);
		while (val != '\0')
		{
			count++;
			val = *(s + count);
		}
	}
	return (count);
}
