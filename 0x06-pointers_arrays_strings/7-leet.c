#include "main.h"
/**
 * leet - encodes strings
 * @s: input strings
 * Return: dest
 */

char *leet(char *s)
{
	int sum = 0, a;
	int l_case[] = {97, 101, 111, 116, 108};
	int u_case[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + sum) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(s + sum) == l_case[a] || *(s + sum) == u_case[a])
			{
				*(s + sum) = num[a];
				break;
			}
		}
		sum++;
	}
	return (s);
}
