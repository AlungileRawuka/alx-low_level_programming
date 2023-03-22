#include <stdio.h>
/**
 *main - prints sum of all even fibonacci terms less than 4,000,000
 *with fibonacci series starting with 1, 2
 *
 * Return: 0(Always)
 */
int main(void)
{
	unsigned long int n1, n2, n3, sum;

	n1  = 1;
	n2 = 2;
	n3 = n1 + n2;
	sum = 2;

	while (n3 < 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if ((n3 % 2) == 0)
			sum = sum + n3;
	}
	printf("%lu\n", sum);

	return (0);

}
