#include <stdio.h>

/**
* main - prints numbers from 1 to 100
* but for multiples of 3, prints Fizz, for multiples of 5, prints Buzz
* fo a number that is both a multiple of 3 and 5, prints FizzBuzz
* Return: 0
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz");
		else if (n % 5 == 0 && n % 3 != 0)
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
