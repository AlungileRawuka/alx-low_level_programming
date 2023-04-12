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
	while (a <= size)
	{
		if (a == size)
		{
			ch[a] = ('\0');
			break;
		}

		ch[a] = c;
		a++;
	}
	return (ch);
}



