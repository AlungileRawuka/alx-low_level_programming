#include <stdio.h>
/**
 * main - prints alphabets in lowercase in reverse order
 *
 * Return: 0(upon successful execution)
 *
 */
int main(void)
{
	char z;

	z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}

	putchar('\n');

	return (0);
}
