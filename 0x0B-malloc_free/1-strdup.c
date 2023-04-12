#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string passed in as a argument
 * @str: string to be duplicated
 * Return: pointer to the newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int a, str_size;

	a = 0;
	str_size = 0;

	if (str == NULL)
		return ('\0');
	else
	{
		while (*(str + str_size) != '\0')
		{
			str_size += 1;
		}
	}

	ch = malloc((str_size + 1) * sizeof(char));

	if (ch == NULL)
		return ('\0');
	while (*(str + a) != '\0')
	{
		*(ch + a) = *(str + a);
		a++;
	}
	return (ch);
}
