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
	int length_src, a, b;

	length_src = a  = 0;
	while (*(src + a) != '\0')
	{
		length_src = length_src + 1;
		a++;
	}
	if (n >= length_src)
	{
		for (b = 0; b < n; b++)
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
			*(dest + b) = *(src + b);
		}
	}
	return (dest);
}
