#include <stdio.h>
/**
 * main - main block
 * description: print all single digit numbers of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int y = 0;

	while (y <= 10)
	{
		putchar(48 + y);
		y++;
	}
	putchar('\n');
	return (0);
}
