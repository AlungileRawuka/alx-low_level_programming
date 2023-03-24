#include "main.h"
/**
 * print_line - prints a line in terminal, given an integer n
 * where n is the number of _ characters
 * if n is 0 or < 0, only /n is printed
 *@n: integer
 *
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
