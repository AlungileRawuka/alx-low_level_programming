#include <stdio.h>
/**
 * main - prints alphabet in lower and uppercase
 *
 * Return: 0(upon succesful execution)
 *
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
