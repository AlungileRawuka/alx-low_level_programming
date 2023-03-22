#include "main.h"
/**
 * times_table - prints the 9 times table, starting from 0
 *
 */
void times_table(void)
{
	int a, b, units, tens,  product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;
			units = product % 10;
			tens = product / 10;
			if (product > 9)
			{

				if (b > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(tens + '0');
				_putchar(units + '0');
			}
			if (product < 10)
			{
				if (b > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(units + '0');
			}
		}
		_putchar('\n');
	}


}
