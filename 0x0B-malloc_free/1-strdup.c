#include "main.h"

/**
 * _strdup - function returns a pointer to a new string which
 * is a duplicate of the string str. Memory for
 * the new string is obtained with malloc, and can be freed with free
 * @str: the pointer to the string holder
 * Return: NULL if str is NULL and pointer to the duplicate string
 * on success.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int len = 0;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
	{
		duplicate[j] = str[j];
	}
	duplicate[j] = '\0';
	return (duplicate);
	free(duplicate);

}
