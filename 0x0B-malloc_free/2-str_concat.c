#include "main.h"
/**
 * str_concat - this function concatenates two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	int a = 0, b = 0, c = 0, i = 0, x = 0;
	char *container;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
	{
		len1++;
		a++;
	}
	while (s2[b] != '\0')
	{
		len2++;
		b++;
	}
	container = malloc(sizeof(char) * (len1 + len2 + 1));
	if (container == NULL)
		return (NULL);
	for (c = 0; c < len1; c++)
		container[c] = s1[c];
	while (c < (len1 + len2))
	{
		container[c] = '\0';
		c++;
	}
	while (container[i] != '\0')
		i++;
	while ((x < len2) && s2[x] != '\0')
	{
		container[i] = s2[x];
		i++;
		x++;
	}
	container[i] = '\0';
	return (container);
	free(container);
}
