#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: storage char
 * Return: pointer of an array of char
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int x;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		a[x] = c;
	return (a);
}
