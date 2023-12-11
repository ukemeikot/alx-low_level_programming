#include "main.h"
/**
 * _isalpha - checks whether a value is lower or not
 * Return: (1) if value is lower or (0) otherwise
 * @ch: int value
 */
int _isalpha(int ch)
{
	int value;
	char s, c;


	value = 0;
	s = 'a';
	c = 'A';
	for (; s <= 'z'; s++, c++)
	{
		if (ch == s || ch == c)
		{
			value = 1;
			break;
		}
	}
	return (value);
}
