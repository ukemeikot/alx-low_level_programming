#include <stdio.h>
#include <unistd.h>

/**
 * main-the min functuion
 * Return: always return 0
 */

int main(void)
{
	int num;
	char l;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	return (0);
}
