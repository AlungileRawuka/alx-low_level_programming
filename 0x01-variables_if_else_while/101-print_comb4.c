#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 * Only the smallest combination is printed
 * The numbers are printed in ascending order
 *
 * Return: 0(upon successful execution)
 *
 */
int main(void)
{
	int first_dgt;
	int second_dgt;
	int third_dgt;
	int i;

	i = 0;

	while (i < 1000)
	{
		first_dgt  = i / 100;
		second_dgt = (i / 10) % 10;
		third_dgt = i % 10;
		if (first_dgt < second_dgt && second_dgt < third_dgt)
		{
			putchar(first_dgt + '0');
			putchar(second_dgt + '0');
			putchar(third_dgt + '0');
			if (first_dgt != 7)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	i++;

	putchar('\n');

	return (0);
}
