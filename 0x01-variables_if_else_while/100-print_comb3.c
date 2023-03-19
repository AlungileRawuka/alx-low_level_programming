#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * The two digits must be different
 * 01 and 10 are considered to be the same commbination
 * of the digits 0 and 1
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

	first_digit = 0;
	second_digit = 0;

	while (first_digit <= 9)
	{
		while (second_digit <= 9)
		{
			if (first_digit != second_digit && first_digit < second_digit)
			{
				putchar(first_digit + '0');
				putchar(second_digit + '0');
				if (first_digit != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}

			second_digit++;
		}
		second_digit  = 0;
		first_digit++;
	}

	putchar('\n');

	return (0);
}
