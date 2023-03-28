#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 */
void rev_string(char *s)
{
	int length, a, i, b;
	char c;
	char *s2;

	s2 = s;
	length = 0;
	a = b = i = 0;
	while (*(s + i) != '\0')
	{
		length = length + 1;
		i++;
	}

	for (a = 0; a < length - 1; a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			c = *(s2 + b);
			*(s2 + b) = *(s2 + b - 1);
			*(s2 + b - 1) = c;
		}


	}


}

