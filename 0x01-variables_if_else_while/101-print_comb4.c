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
	int first_digit;
	int second_digit;
	int third_digit;

	first_digit = 0;
	second_digit = 0;
	third_digit = 0;

	while (first_digit <= 9)
	{
		while (second_digit <= 9)
		{
			if (first_digit != second_digit && first_digit < second_digit)
			{
				while (third_digit <= 9)
				{
					if (second_digit != third_digit && second_digit < third_digit)
					{
						putchar(first_digit + '0');
						putchar(second_digit + '0');
						putchar(third_digit + '0');
						if (first_digit != 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
					third_digit++;
				}
			}
			third_digit = 0;
			second_digit++;
		}
		second_digit  = 0;
		first_digit++;
	}
	putchar('\n');

	return (0);
}
