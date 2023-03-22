#include <stdio.h>
/**
 *main - prints the first 98 Fibonacci numbers
 *
 * Return: 0(Always)
 */
int main(void)
{
	int a, b, c;
	long int n1, n2, n3, n11, n22, n33;

	a = b = c = n1 = 1;
	n2 = 2;
	printf("%ld, %ld, ", n1, n2);
	while (a < 99)
	{
		if (b == 1)
		{
			n3 = n1 + n2;
			printf(", %ld", n3);
			n1 = n2;
			n2 = n3;
		}
		else
		{
			if (c == 1)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				c = 0;
			}
			n33 = (n11 + n22);
			n3 = n1 + n2 + (n33 / 1000000000);
			printf(", %ld", n3);
			printf("%ld", n33 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = n3;
			n22 = (n33 % 1000000000);
		}
		if (((n1 + n2) < 0) && b == 1)
			b = 0;
		a++;
	}
	printf("\n");
	return (0);
}
