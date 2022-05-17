nclude "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * p_char - print char
 * @list:arg
 * Return: void
 */
void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * p_string - print string
 * @list:arg
 * Return: void
 */
void p_string(va_list list)
{
	char *string;

	string = va_arg(list, char*);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 * p_integer - print integer
 * @list:arg
 * Return: void
 */
void p_integer(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * p_float - print float
 * @list:arg
 * Return: void
 */
void p_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_all - print everything
 * @format:arg
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int a, b;

	t_print t[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_integer},
		{"f", p_float},
		{NULL, NULL}
	};
	va_list valist;
	char *s = "";

	va_start(valist, format);
	a = 0;
	while (format && format[a])
	{
		b = 0;
		while (t[b].x != NULL)
		{
			if (*(t[b].x) == format[a])
			{
				printf("%s", s);
				t[b].func(valist);
				s = ", ";
				break;
			}
			b++;
		}
		a++;
	}
	va_end(valist);
	printf("\n");
}
