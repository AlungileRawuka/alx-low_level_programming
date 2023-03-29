#include "main.h"
/**
 * _strncat - concatenates two strings, dest and src
 * using at most n bytes from src
 * @dest: first pointer
 * @src: second pointer
 * @n: integer
 * Return: the concatenated string as *dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest, length_src, i, a, b, count;

	length_dest = length_src = a = i = count = 0;
	while (*(dest + i) != '\0')
	{
		length_dest = length_dest + 1;
		i++;
	}
	while (*(src + a) != '\0')
	{
		length_src = length_src + 1;
		a++;
	}
	if (n >= length_src)
	{
		for (b = length_dest; b < length_src + length_dest; b++)
		{
			*(dest + b) = *(src + count);
			count++;
		}
	}
	else
	{
		for (b = length_dest; b < length_dest + n; b++)
		{
			*(dest + b) = *(src + count);
			count++;
		}
	}
	return (dest);
}
