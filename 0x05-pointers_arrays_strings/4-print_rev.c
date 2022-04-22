#include "main.h"
/**
 * print_rev - print string in reverse with new line
 * @s: input string
 * Return: no return
 */

void print_rev(char *s)
{
	int sumUp = 0;

	while (sumUp >= 0)
	{
		if (s[sumUp] == '\0')
			break;
		sumUp++;
	}
	for (sumUp--; sumUp >= 0; sumUp--)
		_putchar(s[sumUp]);
	_putchar('\n');
}
