#include <stdio.h>
/**
 * main-the main function
 * Return: always o
 */

int main(void)
{
	char upper, lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);
	putchar('\n');
	return (0);
}
