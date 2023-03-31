#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: encoded string
 *
 */
char *rot13(char *s)
{
	unsigned long int i, skip_if;

	i = 0;
	while (*(s + i) != '\n')
	{
		skip_if = 0;
		while ((*(s + i) >= 'a' && *(s + i) <= 'z' && *(s + i) > 109) ||
				(*(s + i) >= 'A' && *(s + i) <= 'Z' && *(s + i) > 77))
		{
			*(s + i) = *(s + i) - 13;
			skip_if = 1;
			break;
		}
		if ((*(s + i) >= 'a' && *(s + i) <=  'z' && *(s + i) <= 109 && !skip_if) ||
				(*(s + i) >= 'A' && *(s + i) <= 'Z' && *(s + i) <= 77 && !skip_if))
		{
			*(s + i) = *(s + i) + 13;
		}
		i++;
	}

	return (s);
}

