#include <stdio.h>

/**
 * main-this holds the main function of the opreation
 * Return: always retuns 0
 */
int main(void)
{
	char letter_alphabets;

	for (letter_alphabets = 'a'; letter_alphabets <= 'z'; letter_alphabets++)
	putchar(letter_alphabets);
	putchar('\n');
	return (0);
}

