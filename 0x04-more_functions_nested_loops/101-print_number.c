#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 */
void print_number(int n)
{
	unsigned int a, b, c;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	c = 1;

	while (b > 9)
	{
		b = b / 10;
		c = c * 10;
	}

	while (c >= 1)
	{
		_putchar(((a / c) % 10) + '0');
		c = c / 10;
	}
}
