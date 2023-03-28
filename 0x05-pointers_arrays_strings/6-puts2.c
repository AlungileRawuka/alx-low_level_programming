#include "main.h"
/**
 * puts2 - updates a value a pointer points to to 98
 * @str: pointer to a string
 *
 */
void puts2(char *str)
{
	int length, a, i;

	length = a = i = 0;
	while (*(str + i) != '\0')
	{
		length = length + 1;
		i++;
	}
	while (a < length)
	{
		_putchar(*(str + a));
		a = a + 2;

	}
	_putchar('\n');
}

