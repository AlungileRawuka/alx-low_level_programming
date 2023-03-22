#include "main.h"
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int a, b, c, d, ab, cd;

	for (ab = 0; ab <= 23; ab++)
	{
		for (cd = 0; cd <= 59; cd++)
		{
			a = ab / 10;
			b = ab % 10;
			c = cd / 10;
			d = cd % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');

			_putchar('\n');
		}
	}


}
