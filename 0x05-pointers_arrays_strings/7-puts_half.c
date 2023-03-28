#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * if length of string is odd, print the last n characters
 * where n = (length_of_string -1 / 2)
 * @str: pointer to a string
 *
 */
void puts_half(char *str)
{
	int length, a, b, i;

	length =  i =  0;
	while (*(str + i) != '\0')
	{
		length = length + 1;
		i++;
	}
	if (length % 2 == 0)
	{
		length = length / 2;
		for (a = 0; a < length; a++)
		{
			_putchar(*(str + a));
		}

	}
	else
	{
		length = (length - 1) / 2;
		for (b = 0; b < length; b++)
		{
			_putchar(*(str + b));
		}
	}
	_putchar('\n');
}
