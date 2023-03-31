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
	int num[] = {52, 51, 48, 55, 49};
	char *lower_alpha = "aeotl";
	char *upper_alpha = "AEOTL";

	i = a = 0;
	while (*(s + i) != '\n')
	{
		a = 0;
		while (a < 5)
		{
			if (*(s + i) == *(lower_alpha + a) || *(s + i) == *(upper_alpha + a))
			{
				*(s + i) = num[a];
			}
			a++;
		}
		i++;
	}

	return (s);
}


