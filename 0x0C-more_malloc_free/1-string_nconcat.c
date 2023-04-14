#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concatenates two strings, s1 and s2
 * using at most n bytes from s2
 * @s1: first pointer to a string
 * @s2: second pointer to a string
 * @n: integer
 * Return: pointer to the newly allocated space, NULL if fails
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *ptr;

	a = b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc((sizeof(s1) + sizeof(s2) - 1));

	if (ptr == NULL)
		return (NULL);
	while (*(s1 + a) != '\0')
	{
		*(ptr + a) = *(s1 + a);
		a++;
	}
	while (b < n && *(s2 + b) != '\0')
	{
		*(ptr + a) = *(s2 + b);
		b++;
		a++;
	}
	*(ptr + a) = '\0';
	return (ptr);
}
