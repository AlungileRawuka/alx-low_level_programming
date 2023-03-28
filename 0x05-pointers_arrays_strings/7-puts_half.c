#include "main.h"
/**
 * puts_half - prints second half of a string, followed by a new line
 * if length of string is odd, print the last n characters
 * where n = (length_of_string -1 / 2)
 * @str: pointer to a string
 *
 */
void puts_half(char *str)
{
	unsigned long int length, a, b, i;

	length =  i =  0;
	while (*(str + i) != '\0')
	{
		length = length + 1;
		i++;
	}
	if (length % 2 == 0)
	{
		for (a = length / 2; a < length; a++)
		{
			_putchar(*(str + a));
		}

	}
	else
	{
		for (b = (length - 1) / 2; b < length; b++)
		{
			_putchar(*(str + b));
		}
	}
	_putchar('\n');
}
