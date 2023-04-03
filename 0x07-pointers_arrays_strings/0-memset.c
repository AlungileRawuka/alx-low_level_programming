#include "main.h"
/**
 * _memset - fills mmemory with a constant byte
 * @s: string
 * @b: character
 * @n: unsigned integer
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}

	return (s);
}
