#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an arry of chars and initialises it
 * with a specific character
 * @size: size of the array
 * @c: character
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int a;

	a = 0;
	if (size == 0)
		return ('\0');

	ch = malloc(size * sizeof(char));
	if (ch == NULL)
		return ('\0');
	while (a < size)
	{
		ch[a] = c;
		a++;
	}
	return (ch);
}



