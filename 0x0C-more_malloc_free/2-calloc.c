#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc, and initializes to 0
 * @nmemb: number of elements of the array
 * @size: size of each elements of the array
 * Return: pointer to the allocated memort (SUCCESS) or
 * NULL if @nmemb or @size is 0 (FAILURE) or
 * NULL if insufficient memory was available (FAILURE)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return ('\0');

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return ('\0');

	for (a = 0; a < nmemb * size; a++)
		pointer[a] = 0;

	return ((void *)pointer);
}
