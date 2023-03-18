#include <stdio.h>
/**
 * main - prints single digit numbers of base 10 from 0 to 9
 * without the use of char variables and printf()
 *
 * Return: 0(upon successful execution)
 *
 */
int main(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
