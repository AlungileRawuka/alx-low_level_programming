#include <stdio.h>
/**
 *positive_num - converts numerical characters into their equivalent integer
 * @s: string to be converted
 * Return: positive integer, -1 if s contains a non numerical character
 */
int positive_num(char *s)
{
	int n, a, b, c, div;

	n = b = c = 0;
	a = div = 1;

	while (*(s + c) != '\0')
	{
		if ((*(s + c) >= 0 && *(s + c) <= 47) ||
				(*(s + c) >= 58 && *(s + c) <= 126))
			return (-1);
		c++;
	}
	while (*(s + a) != '\0')
	{
		div = div * 10;
		a++;
	}
	while (*(s + b) != '\0')
	{
		n = (*(s + b)  - '0') * div + n;
		div = div / 10;
		b++;
	}
	return (n);
}
/**
 * main - multiplies two numbers and prints the result
 * followed by new line
 * @argc: integer representing number of arguments
 * @argv: array of strings
 * Return: 0(Upon succesful execution), or 1 if it main
 * doesn't receive two arguments
 */
int main(int argc, char *argv[])
{
	int sum, i;

	i = 1;
	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (positive_num(argv[i]) == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum = positive_num(argv[i]) + sum;
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

