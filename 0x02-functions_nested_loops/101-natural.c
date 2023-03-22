#include "main.h"
#include <stdio.h>
/**
 *add_multiples -computes a sum of multiples of 3 and 5  below 1024
 *
 */
void add_multiples(void)
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
	printf("%d%c", sum, '\n');



}
