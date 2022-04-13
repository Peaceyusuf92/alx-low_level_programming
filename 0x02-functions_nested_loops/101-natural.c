#include <stdio.h>

/**
 * main - print sum of mutiples of 3 and 5 below 1024
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num, num3, num5;
	int i;

	sum = 0;
	sum3 = 0;
	sum5 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		}
		else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
