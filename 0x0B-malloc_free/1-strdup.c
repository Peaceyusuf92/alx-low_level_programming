#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer of an array of char
 */
char *_strdup(char *str)
{
	char *out;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;
	out = (char *)malloc(sizeof(char) * (a + 1));

	if (out == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		out[b] = str[b];

	return (out);
}
