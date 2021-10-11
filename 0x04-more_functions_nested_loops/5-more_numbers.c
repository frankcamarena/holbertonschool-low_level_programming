#include "main.h"
/**
* more_numbers - function about ckeck for a digit
*/

void more_numbers(void)

{
	int a = 0;
	int b = 0;

	while (b  < 10)
	{
		while (a < 15)
		{
			if (a > 9)
			{
				_putchar('1');
			}
				_putchar(a % 10 + '0');
			a++;
		}
		_putchar(10);
		a = 0;
		b++;
	}
}
