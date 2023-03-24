#include "main.h"
/**
 * print_diagonal - prints a diagonal on terminal, given an integer n
 * where n is the number of \ characters
 * if n is 0 or < 0, only /n is printed
 *@n: integer
 *
 */
void print_diagonal(int n)
{
	int a, b;

	a = 0;
	b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
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
