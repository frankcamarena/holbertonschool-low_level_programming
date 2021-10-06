#include "main.h"
/**
 * times_table - function about print table producto 9 times
 *
 */

void times_table(void)
{
	int a = 0, b = 0, pro;

	while (a <= 9)
	{
		while (b <= 9)
		{
			pro = a * b;
			if (pro > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(pro / 10 + 48);
				_putchar(pro % 10 + 48);
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(pro + 48);
			}
			b++;
		}
		b = 0;
		_putchar(10);
		a++;
	}
}
