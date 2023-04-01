#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 *
 */
void print_number(int n)
{
	int mul, digit;

	mul = 10;
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	while ((n / mul) > 9)
	{
		mul = mul * 10;
	}
	while (mul >= 1)
	{

		if (n == 0)
		{
			_putchar(n + '0');
			break;
		}
		digit = (n / mul) % 10;
		_putchar(digit + '0');
		mul = mul / 10;
	}
}
