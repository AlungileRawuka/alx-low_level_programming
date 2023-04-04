#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: first pointer
 * @accept: second pointer
 * Return: the number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length, a, i, is_found;

	a = i = length = is_found = 0;
	while (*(accept + a) != '\0')
	{
		i = 0;
		is_found = 0;
		while (*(s + i) != '\0')
		{
			if (*(accept + a) == *(s + i))
			{
				is_found = 1;
				if (length < i)
					length  = i;
				break;
			}
			i++;
		}
		if (!is_found)
			break;
		a++;
	}
	if (!is_found)
		return (0);
	else
		return (length + 1);
}

