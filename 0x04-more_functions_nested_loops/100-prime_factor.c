#include <stdio.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
* followed by a new line.
* Return: 0
*/

int main(void)
{
	long int i;
	long int n;

	i = 2;
	n = 612852475143;

	while (n > 1)
	{
		if (n % i == 0)
			n = n / i;
		else
			i = i + 1;
	}
	printf("%ld\n", i);

	return (0);
}
