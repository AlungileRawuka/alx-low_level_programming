#include "main.h"
/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0(upon succesful execution)
 *
 */
int main(void)
{
	char arr[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(arr[a]);
	}
	_putchar('\n');

	return (0);
}
