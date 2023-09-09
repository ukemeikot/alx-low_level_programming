#include <stdio.h>

/**
 * main-the main code goes here
 * Return: always 0
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
