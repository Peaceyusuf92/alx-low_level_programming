#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print variadic number
 * @separator: char
 * @n: variadic count
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ax;
	unsigned int a;

	va_start(ax, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ax, int));
		if (separator && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ax);
}
