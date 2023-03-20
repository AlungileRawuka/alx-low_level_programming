#include <stdio.h>
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
		putchar(arr[a]);
	}
	putchar('\n');

	return (0);
}
