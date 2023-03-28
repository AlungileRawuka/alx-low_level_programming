#include "main.h"
/**
 * _atoi - convert a string into an integer
 * @s: pointer to a string
 *Return: integer
 */
int _atoi(char *s)
{
	unsigned int i, a, b, num1, num2, mul, count_neg;

	i = num2 = a = count_neg = 0;
	mul = 1;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			count_neg = count_neg + 1;
		a = i;
		if (*(s + a) >= '0' && *(s + a) <= '9')
		{
			while (*(s + a) >= '0' && *(s + a) <= '9')
			{
				if (a >= i + 1)
					mul = mul * 10;
				a++;
			}
			break;
		}
		i++;
	}
	for (b = i; b < a; b++)
	{
		num1 = (*(s + b) - '0') * mul;
		num2 = num2 + num1;
		mul = mul / 10;
	}
	if (count_neg %  2 != 0)
		num2 = -1 * num2;
	return (num2);
}
