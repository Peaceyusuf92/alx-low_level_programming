#include "main.h"
/**
 * print_number - print an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int a, b, sum;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}
	b = a;
	sum = 1;

	while (b > 9)
	{
		d = d / 10;
		sum *= 10;
	}

	for (; sum >= 1; sum /= 10)
	{
		_putchar(((a / sum) % 10) + 48);
	}
}
