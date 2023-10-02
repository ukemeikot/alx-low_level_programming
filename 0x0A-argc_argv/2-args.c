#include <stdio.h>

/**
 * main - the main function to print
 * the contents of the arguments passed to the main
 * funtion
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
