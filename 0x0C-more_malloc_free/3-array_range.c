#include <stdlib.h>

/**
 * array_range - creates an array of integers, ordered from @min to @max
 * @min: first and minimum value of the array to be created
 * @max: last and maximum value of the array to be created
 * Return: pointer to the newly created array (SUCCESS) or
 * NULL if @min > @max (FAILURE) or
 * NULL if insufficient memory was available (FAILURE)
 */

int *array_range(int min, int max)
{
	int a, b;
	int *ptr;

	if (min > max)
		return ('\0');

	b = (max - min) + 1;
	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
		return ('\0');

	for (a = 0; a < n; a++)
		ptr[a] = min + a;

	return (ptr);
}
