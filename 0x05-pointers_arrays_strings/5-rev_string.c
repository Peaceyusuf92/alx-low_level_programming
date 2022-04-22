#include "main.h"
/**
 * rev_string - reverse string
 * @s: input
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 0, a, b;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (a = 0; a < (count - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			temp = *(str + (b - 1));
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
