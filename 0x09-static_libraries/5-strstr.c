#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle
 * in the mainstring haystack
 * @haystack: the main string
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *needle_holder = needle;
		char *haystack_holder = haystack;

		while (*haystack_holder == *needle_holder && *needle_holder != '\0')
		{
			haystack_holder++;
			needle_holder++;
		}
		if (*needle_holder == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
