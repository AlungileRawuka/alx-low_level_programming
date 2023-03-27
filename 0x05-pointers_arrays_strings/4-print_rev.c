#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to a string
 *
 */
void print_rev(char *s)
{
	int i, a, length;

	i = 0;
	length = 0;
	while (*(s + i) != '\0')
	{
		length = length + 1;
		i++;
	}
	for (a = length - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');

}

