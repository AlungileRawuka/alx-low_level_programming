#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to a character
 *Return: length, the length of a string
 */
int _strlen(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		length = length + 1;
		i++;
	}

	return (length);


}

