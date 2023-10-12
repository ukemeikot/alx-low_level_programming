#include "variadic_functions.h"
void print_int(va_list args);
void print_char(va_list args);
void print_float(va_list args);
void print_string(va_list args);
/**
 * print_all - this function prints anything
 * @format: the format string
 * Return: notning
 */
void print_all(const char * const format, ...)
{
	const char *current_format = format;
	size_t i;
	va_list args;
	char *separator = "";
	struct format_mapping format_map[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	};
	
	va_start(args, format);
	while (current_format && current_format[0]) 
	{
		for (i = 0; i < sizeof(format_map) / sizeof(format_map[0]); i++) 
		{
			if (current_format[0] == format_map[i].format) 
			{
				printf("%s", separator);
				format_map[i].printer(args);
				separator = ", ";
				break;
			}
		}
		current_format++;
	}
	va_end(args);
	printf("\n");
}
/**
*print_string - prints strings to the screen
*args: argument passed to the string
*Return: nothing
*/
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}
/**
*print_float - prints float to the screen
*@args: the variable arguments
*Return: nothing
*/
void print_float(va_list args)
{
	double d = va_arg(args, double);

	printf("%f", d);
}
/**
*print_int - prints an integer
*@args: arguments passed to it
*Return: nothing
*/
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}
/**
*print_char - prints a character
*@args: the variable list arguments
*Return: nothing
*/
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}
