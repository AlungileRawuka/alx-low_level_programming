#include "main.h"
/**
 *more_numbers - prints the numbers 0 to 14, 10 times
 *
 *
 */
void more_numbers(void)
{
	int units, tens, num, count;

	num = count = 0;

	while (count < 10)
	{
		while (num <= 14)
		{
			units = num % 10;
			tens = num / 10;
			if (num > 10)
				_putchar(tens + '0');

			_putchar(units + '0');
			num++;
		}
		count++;
		_putchar('\n');
	}
}
