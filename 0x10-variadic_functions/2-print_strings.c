#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string variables
 * @separator: char
 * @n: unsigned int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ax;
	unsigned int a;
	char *string;

	va_start(ax, n);
	for (a = 0; a < n, a++)
	{
		string = va_arg(ax, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (a < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(ax);
	printf("\n");
}
