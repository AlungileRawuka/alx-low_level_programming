#include "main.h"
/**
 * _atoi - convert a string into an integer
 * @s: pointer to a string
 *Return: integer
 */
int _atoi(char *s)
{
	int i, a, b, num1, mul, num2;

	i = num2 = 0;
	mul = 1;
	while (*(s + i) != '\0')
	{
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
	if ((*(s + 0) == '-' && i < 2) || (i >= 2 &&
			*(s + i - 2) == '-' && *(s + i - 1) == '-'))
		num2 = -1 * num2;

	return (num2);
}
