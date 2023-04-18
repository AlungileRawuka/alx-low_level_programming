#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for
 * a certain amount followed by new line
 * @argc: integer representing number of arguments
 * @argv: array of strings
 * Return: 0(Upon succesful execution), or 1 if Error is printed
 */
int main(int argc, char *argv[])
{
	int num_coins, _25_cents, _10_cents, _5_cents, _2_cents, _1_cents, n;

	_25_cents = _10_cents = _5_cents = _2_cents = _1_cents = 0;
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n >= 25)
	{
		_25_cents = n / 25;
		n = n - (_25_cents * 25);
	}
	if (n >= 10)
	{
		_10_cents = n / 10;
		n = n - (_10_cents * 10);
	}
	if (n >= 5)
	{
		_5_cents = n / 5;
		n = n - (_5_cents * 5);
	}
	if (n >= 2)
	{
		_2_cents = n / 2;
		n = n - (_2_cents * 2);
	}
	if (n == 1)
		_1_cents = 1;
	num_coins = _25_cents + _10_cents + _5_cents + _2_cents + _1_cents;
	printf("%d\n", num_coins);
	return (0);
}

