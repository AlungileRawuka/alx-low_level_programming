#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 *  including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: first pointer
 * @src: second pointer
 * Return: pointer to dest
 */
char  *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(dest + i) == '\0')
			break;

		i++;
	}
	return (dest);

}

