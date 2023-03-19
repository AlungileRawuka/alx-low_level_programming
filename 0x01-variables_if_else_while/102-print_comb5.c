#include <stdio.h>
/**
 * main - prints all possible different combinations of two two digit numbers
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers
 * 0 and 1
 * only uses the putchar function (every other function (printf, puts, etc…)
 * is forbidden)
 * Putchar can only be used a maximun of eighgt times in the code
 * The use of char variables is not allowed
 *
 * Return: 0(upon successful execution)
 *
 */
int main(void)
{
	int first_dgt;
	int second_dgt;
	int third_dgt;
	int fourth_dgt;
	int sum1;
	int sum2;
	int i;

	i = 0;

	while (i < 10000)
	{
		first_dgt  = i / 1000;
		second_dgt = (i / 100) % 10;
		third_dgt = (i / 10) % 10;
		fourth_dgt = i % 10;
		sum1  = first_dgt + second_dgt;
		sum2 = third_dgt + fourth_dgt;
		if ((sum2 > sum1) || (sum1 == sum2 && first_dgt != third_dgt &&
					second_dgt != fourth_dgt))
		{
			putchar(first_dgt + '0');
			putchar(second_dgt + '0');
			putchar(' ');
			putchar(third_dgt + '0');
			putchar(fourth_dgt + '0');
			if (i < 9899)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}

	putchar('\n');

	return (0);
}
