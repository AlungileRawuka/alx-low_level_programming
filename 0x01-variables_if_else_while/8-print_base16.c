#include <stdio.h>
/**
 * main - prints all numbers of base 16
 *
 * Return: 0(upon successful execution)
 *
 */
int main(void)
{
	char a;
	char zero;

	a = 'a';
	zero = '0';

	while (zero <= '9')
	{
		putchar(zero);
		zero++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
