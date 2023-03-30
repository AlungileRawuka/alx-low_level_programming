#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: pointer to a string
 */
char *cap_string(char *s)
{
	int i;
	char c;

	i = 0;
	while (*(s + i) != '\0')
	{
		if ((i == 0) && (*(s + i) >= 'a' && *(s + i) <= 'z'))
		{
			*(s + i) = *(s + i) - 32;
		}
		if (i >= 1 && (*(s + i) >= 'a' && *(s + i) <= 'z'))
		{
			c = *(s + i - 1);
			if (c == 9 || c == 11 || c == '\n' || (c >= 32 && c <= 47) || c == 123
					|| c == 125)
			{
				*(s + i) = *(s + i) - 32;
			}
		}
		i++;
	}

	return (s);
}
