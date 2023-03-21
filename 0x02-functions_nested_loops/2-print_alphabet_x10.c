#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 *
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int a;

	for (a = 0; a < 10; a++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}
