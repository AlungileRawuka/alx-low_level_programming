#include <stdio.h>
/**
 *main -computes a sum of multiples of 3 and 5  below 1024
 *
 * Return: 0(Always)
 */
int main(void)
{
	int sum, n;

	n = 0;
	sum = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum = sum + n;
		n++;
	}
	printf("%d\n", sum);

	return (0);

}
