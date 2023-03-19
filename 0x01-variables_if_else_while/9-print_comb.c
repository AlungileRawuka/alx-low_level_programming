#include <stdio.h>
/**
 * main - prints all possible combinations ofsingle digit numbers
 * in ascending order, seperated by commas and space
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
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');

	return (0);
}
