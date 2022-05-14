#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to the function to be used
 * to compare values.
 * Return: index of the first element for which the cmp
 * fuction does not return 0. if no element matches,
 * return -1. if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}
