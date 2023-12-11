#include "main.h"
/**
 * _islower - checks whether a value is lower or not
 * Return: (1) if value is lower or (0) otherwise
 * @c: int value
 */
int _islower(int c)
{
	int check;
	int value;

	value = 0;
	for (check = 97; check <= 122; check++)
	{
		if (c == check)
		{
			value = 1;
			break;
		}
	}
	return (value);
}
