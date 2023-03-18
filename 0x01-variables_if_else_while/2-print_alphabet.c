#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: 0(upon succesful execution)
 *
 */
int main(void)
{
	char arr[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(arr[a]);
	}
	putchar('\n');

	return (0);
}

