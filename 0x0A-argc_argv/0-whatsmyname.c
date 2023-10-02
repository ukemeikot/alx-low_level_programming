#include <stdio.h>

/**
 * main - contains the main c function
 * @argc: arguments count
 * @argv: pointer to the srguments string
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
