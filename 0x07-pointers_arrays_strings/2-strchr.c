#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: string with c as the first element
 */
char *_strchr(char *s, char c)
{
	unsigned int a, is_found;

	a = is_found = 0;

	while (*(s + a) != '\0')
	{
		if (*(s + a) == c)
		{
			is_found = 1;
			break;
		}
		a++;
	}
	if (is_found)
		return (s + a);
	else
		return (NULL);

}
