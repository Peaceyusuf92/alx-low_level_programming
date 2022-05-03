#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minim
 * um number of coin to make change for an amount of money
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int money, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money >= 25)
			money -= 25;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else if (money >= 2)
			money -= 2;
		else if (money >= 1)
			money -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
