#include "main.h"
/**
* print_alphabet_x10 - show letter the alphabet 10 times
*
* Return: 0 if correct
*/

void print_alphabet_x10(void)
{
	int a = 97;
	int b = 0;

	while (b <= 10)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		b++;
		a = 97;

	}
}
