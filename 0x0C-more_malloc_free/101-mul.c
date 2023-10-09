#include "main.h"
/**
 * main - this function multiplies two intergers
 * @argc: the arguments count
 * @argv: the arguments vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int n1, n2, multiple;

	if (argc != 3)
	{
		printf("Erro\n");
		return (98);
	}
	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	multiple = n1 * n2;
	printf("%d\n", multiple);
	return (0);
}
/**
 * isNumeric - checks for numeric arguments
 * @str: the string passed to it
 * Return: 1 for Numeric and 0 otherwise
 */

int isNumeric(char *str)
{
	while (*str)
	{
		if (!_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * _isdigit - checks for digits
 * @c: holds the digit to be checked
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
	len++;

	while (i < len && f == 0)
	{
	if (s[i] == '-')
	++d;

	if (s[i] >= '0' && s[i] <= '9')
	{
	digit = s[i] - '0';
	if (d % 2)
	digit = -digit;
	n = n * 10 + digit;
	f = 1;
	if (s[i + 1] < '0' || s[i + 1] > '9')
	break;
	f = 0;
	}
	i++;
	}

	if (f == 0)
	return (0);

	return (n);
}
