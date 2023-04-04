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
	unsigned int a;

	a = 0;

	while (*(s + a) != '\0')
	{
		if (*(s + a) == c)
		{
			return (s + a);
		}
		a++;
	}
	if (*(s + a) == c)
		return (s + a);
	else
		return (NULL);

}
