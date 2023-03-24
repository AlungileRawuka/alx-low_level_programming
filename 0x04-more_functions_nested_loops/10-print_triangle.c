#include "main.h"
/**
 * print_triangle - prints a diagonal on terminal, using the character #
 * if n is 0 or < 0, only /n is printed
 *@size: integer representing the size of the triangle
 *
 */
void print_triangle(int size)
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
				if (b < (size - a - 1))
					_putchar(' ');
				else
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
