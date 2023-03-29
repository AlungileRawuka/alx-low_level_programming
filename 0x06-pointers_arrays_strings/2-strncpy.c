#include "main.h"
/**
 * _strncpy - copies n-bytes of string src to string dest
 * @dest: first pointer
 * @src: second pointer
 * @n: integer
 * Return: pointer to a string
 *
 */
char *_strncpy(char *dest, char *src, int n)
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
		for (b = 0; b < length_dest; b++)
		{
			if (b < length_src)
				*(dest + b) = *(src + b);
			else
				*(dest + b) = '\0';
		}
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			*(dest + b) = *(src + count);
			count++;
		}
	}
	return (dest);
}
