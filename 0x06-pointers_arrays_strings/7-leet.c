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

	char *lower_alpha = "aeotl";
	char *upper_alpha = "AEOTL";
	char *num = "43071";

	i = a = 0;
	while (*(s + i) != '\n')
	{
		while (a < 5)
		{
			if (*(s + i) == *(lower_alpha + a) || *(s + i) == *(upper_alpha + a))
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


