#include "main.h"
unsigned int _strlen(char *s);
char *_strncpy(char *dest, char *src, unsigned int n);
/**
 * string_nconcat - function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of two to be copied to one
 * Return: pointer to a nely allocated space in memory coontaining the new
 * string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatedstring;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	concatedstring = malloc((len1 + n + 1) * sizeof(char));
	if (concatedstring == NULL)
	{
		return (NULL);
	}
	_strncpy(concatedstring, s1, len1);
	_strncpy((concatedstring + len1), s2, n);
	return (concatedstring);

}

/**
 * _strlen - returns the length of a string
 * @s: the character holder
 * Return: the string length
 */
unsigned int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
		return (count);
}
/**
 * _strncpy - function that cpopies strings in c
 * @dest: destination string
 * @src: source string
 * @n: the number of charcters in the string to be copied
 * Return: the destination string
 */

char *_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
		for (i = 0; (i < n && src[i] != '\0'); i++)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}
