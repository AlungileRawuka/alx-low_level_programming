#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0(upon succesful execution)
 *
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
