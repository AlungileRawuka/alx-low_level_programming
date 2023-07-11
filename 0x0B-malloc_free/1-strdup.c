#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly space in memory, which contains
 * a copy of a string given as its parameter
 * @str: string to be copied
 * Return: pointer to the duplicated string, NULL if failed
 */
char *_strdup(char *str)
{
	char *str_copy;
	int i, str_len;

	i = 0;
	str_len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		str_len = str_len + 1;
		i++;
	}
	i = 0;

	str_copy = malloc((str_len * (sizeof(char))) + 1);

	if (str_copy == NULL)
		return (NULL);

	while (i < str_len)
	{
		*(str_copy + i) = *(str + i);
		i++;
	}

	return (str_copy);
}
