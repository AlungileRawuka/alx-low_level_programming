#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers
 *
 * Return: 0(Always)
 */
int main(void)
{
	int a;
	unsigned long int n1, n2, n3;

	a = 1;
	n1  = 1;
	n2 = 2;

	printf("%lu, %lu, ", n1, n2);
	while (a < 49)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;
		if (a != 48)
			printf(", ");

		a++;
	}
	printf("\n");

	return (0);

}
