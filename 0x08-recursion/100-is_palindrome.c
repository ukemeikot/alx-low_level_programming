#include "main.h"

int _strlen(char *s);
int ispalcheck(char *s, int a, int b);
/**
 *_strlen - finds the lenth of a string
 *@s: holds the required string
 *Return: the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen(s + 1);
	}
	return (count);
}
/**
 * is_palindrome - checks for palindromic numbers
 * @s: takes the string
 * Return: 1 for palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	int n = _strlen(s);

	if (n == 0)
		return (1);
	return (ispalcheck(s, 0, n - 1));
}

/**
 * ispalcheck - compares strings
 * @s: the string
 * @a: the first character
 * @b: the last character
 * Return: the same as above
 */

int ispalcheck(char *s, int a, int b)
{
	if (a == b)
		return (1);
	if (s[a] != s[b])
		return (0);
	if (a < b + 1)
		return (ispalcheck(s, a + 1, b - 1));
	return (1);
}
