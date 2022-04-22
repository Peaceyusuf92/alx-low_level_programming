#include "main.h"

/**
 * _puts - prints string, followed by a new line
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		i++;
	}
	putchar('\n');
}
