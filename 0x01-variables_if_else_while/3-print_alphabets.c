#include <stdio.h>
/**
 * main - main block
 * description: lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
