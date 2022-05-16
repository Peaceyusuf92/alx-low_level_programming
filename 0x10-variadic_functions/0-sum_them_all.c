#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of variadic variables
 * @n: const
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	va_list ax;
	double sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ax, n);
	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(ax, int);
	}
	va_end(ax);
	return (sum);
}
