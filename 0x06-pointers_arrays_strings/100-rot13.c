#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: encoded string
 *
 */
char *rot13(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\n')
	{
		while ((*(s + i) >= 'a' && *(s + i) <=  'z') || (*(s + i) >= 'A' &&
					*(s + i) <= 'Z'))
		{
			if ((*(s + i) >= 'a' && *(s + i) <=  'z' && *(s + i) <= 109) ||
					(*(s + i) >= 'A' && *(s + i) <= 'Z' && *(s + i) <= 77))
			{
				*(s + i) = *(s + i) + 13;
			}
			else
			{
				*(s + i) = *(s + i) - 13;
			}
			break;
		}
		i++;
	}

	return (s);
}

