#include "main.h"
/**
 * print_square - prints a square on terminal using the character #
 * if size is 0 or < 0, only /n is printed
 *@size: integer (size of the square)
 *
 */
void print_square(int size)
{
	int a, b;

	a = 0;
	b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			b = 0;
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
