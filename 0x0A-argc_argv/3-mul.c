#include <stdio.h>
/**
 * num_1 - converts numerical characters into their equivaalent integer
 * @n_s1: string to be converted
 * Return: integer
 */
int num_1(char *n_s1)
{
	int n1, a, b, neg, div;

	n1 = b = 0;
	a = neg = div = 1;
	if (*(n_s1 + 0)  == '-')
	{
		a = 2;
		b = 1;
		neg = -1;
	}
	while (*(n_s1 + a) != '\0')
	{
		div = div * 10;
		a++;
	}
	while (*(n_s1 + b) != '\0')
	{
		n1 = (*(n_s1 + b)  - '0') * div + n1;
		div = div / 10;
		b++;
	}
	n1 = n1 * neg;
	return (n1);
}
/**
 * num_2 - converts a string of numerical characters into an integer
 * @n_s2:string
 * Return: integer equivalence of the string
 */
int num_2(char *n_s2)
{
	int n2, a, b, neg, div;

	n2 = b = 0;
	a = neg = div = 1;
	if (*(n_s2 + 0)  == '-')
	{
		a = 2;
		b = 1;
		neg = -1;
	}
	while (*(n_s2 + a) != '\0')
	{
		div = div * 10;
		a++;
	}
	while (*(n_s2 + b) != '\0')
	{
		n2 = (*(n_s2 + b)  - '0') * div + n2;
		div = div / 10;
		b++;
	}
	n2 = n2 * neg;
	return (n2);
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
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = num_1(argv[1]) * num_2(argv[2]);
	printf("%d\n", mul);
	return (0);
}
