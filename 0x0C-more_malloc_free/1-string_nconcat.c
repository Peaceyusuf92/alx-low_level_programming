#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to include of @s2
 *
 * Return: newly allocated space in memory;
 * NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int a = 0, b = 0, c = 0;
	unsigned int m, p, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (b > n)
		b = n;

	len = a + b;

	z = malloc(sizeof(char) * (len + 1));
	if (z == NULL)
		return (NULL);

	for (p = 0; p < a; p++)
		z[c++] = s1[p];
	for (m = 0; m < b; m++)
		z[c++] = s2[m];

	z[c] = '\0';
	return (z);
}
