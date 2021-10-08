#include "main.h"
/**
* print_most_numbers - function about ckeck for a digit
*/

void print_most_numbers(void)

{
	int c = 48;

	while (c <= 57)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
		c++;
	}
	_putchar(10);
}
