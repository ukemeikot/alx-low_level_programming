#include "main.h"

/**
 * argstostr -  a function that concatenates all the
 * arguments of your program.
 * @ac: the arguments count
 * @av: pointer to the arguments vector
 * Return: Returns NULL if ac == 0 or
 * av == NULL Returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i = 0, total_count = 0;
	int x = 0, n = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			total_count++;
		}
	}
	total_count += ac;
	concat = malloc(sizeof(char) * total_count + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			concat[x]  = av[i][n];
			x++;
		}
		if (concat[x] == '\0')
			concat[x++] = '\n';
	}
	return (concat);
}
