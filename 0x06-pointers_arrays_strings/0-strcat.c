#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first pointer
 * @src: second pointer
 * Return: the concatenated string as *dest
 *
 */
char *_strcat(char *dest, char *src)
{
	unsigned int length_dest, length_src, i, a, b, count;

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
	for (b = length_dest; b < length_src + length_dest; b++)
	{
		*(dest + b) = *(src + count);
		count++;
	}

	return (dest);
}
