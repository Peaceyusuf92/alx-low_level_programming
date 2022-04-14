#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second number
 * @c: third number
 * Return: largest
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
/*	else if (c > b)*/
	else
	{
		largest = c;
	}
	/**
	 * else
	*{
	*	largest = b;
	*}
	*/
	return (largest);
}
