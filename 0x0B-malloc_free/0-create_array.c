#include "main.h"

/**
 * create_array - the function that creates an array of characters
 * and initialize it with a specific character.
 * @size: the character size
 * @c: the desired character.
 * Return: null if size is zero
 * and pointer to the array if successful. if it fails it returns null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}
	return (str);
	free(str);
}
