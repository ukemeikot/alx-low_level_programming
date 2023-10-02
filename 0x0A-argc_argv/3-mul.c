#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function that prints the multiple of two numbers
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: always 0 on sucess
 */

int main(int argc, char *argv[])
{
	int m, n;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	printf("%d\n", m * n);
	return (0);
}
