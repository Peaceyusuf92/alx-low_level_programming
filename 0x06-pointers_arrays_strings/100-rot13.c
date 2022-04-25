#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: dest
 */

char *rot13(char *s)
{
	int sum = 0, a;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + sum) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(s + sum) == alpha[a])
			{
				*(s + count) = rot13[a];
				break;
			}
		}
		sum++;
	}
	return (s);
}
