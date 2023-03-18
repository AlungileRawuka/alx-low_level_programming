#include <stdio.h>
/**
 * main - prints single digit numbers of base 10 from 0 to 9
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
		printf("%d", n);
		n++;
	}

	putchar('\n');

	return (0);
}
