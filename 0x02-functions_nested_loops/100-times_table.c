#include "main.h"
/**
 * print_times_table - prints the n times table, starting from 0
 * for n is greater than 0 but less that 15
 *@n: integer
 */
void print_times_table(int n)
{
	int a, b, product;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				product = a * b;
				_putchar(',');
				_putchar(' ');
				if (product > 9 && product < 100)
				{
					_putchar(' ');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
