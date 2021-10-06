#include "main.h"
/**
 * jack_bauer - function print hours and minutes
 *
 */

void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	while (b <= 23)
	{
		while (a <= 59)
		{
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar(':');
			_putchar(a / 10 + 48);
			_putchar(a % 10 + 48);
			_putchar(10);
			a++;
		}
		a = 0;
		b++;
	}
}
