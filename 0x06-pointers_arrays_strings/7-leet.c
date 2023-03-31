#include "main.h"
/**
 * leet - encodes a string into 1337(leet)
 * @s: string
 * Return: encoded string
 *
 */
char *leet(char *s)
{
	int a, i;

	char *letters = "aeotl";
	char *num = "43071";

	i = a = 0;
	while (*(s + i) != '\n')
	{
		while (a < 5)
		{
			if (*(s + i) == *(letters + a) || *(s + i) == *(letters + a) - 32)
			{
				*(s + i) = *(num + a);
			}
			a++;
		}
		i++;
		a = 0;
	}

	return (s);
}


