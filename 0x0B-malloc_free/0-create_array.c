#include <stdlib.h>
/**
 * create_array - creates an array of chars and assigns it with a specific char
 *@size: size  of the array
 *@c: character
 *Return: pointer to the array, NULL if it fails
 */
void *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	i = 0;
	str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		*(str + i) = c;
		i++;
	}

	return (str);
}


