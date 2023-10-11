#include "function_pointers.h"

/**
 * print_name - prints a name to the standard output
 * @name: the string holding the name
 * @f: pointer to a function
 * Return: nothing as it is a void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
