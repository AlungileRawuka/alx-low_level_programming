#include <stdio.h>
/**
 * main - prints alphabet in lower except q and e
 *
 * Return: 0(upon succesful execution)
 *
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}

	putchar('\n');

	return (0);
}
