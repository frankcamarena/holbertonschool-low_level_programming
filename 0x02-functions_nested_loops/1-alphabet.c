#include "main.h"
/**
* print_alphabet - show letter the alphabet
*
* Return: 0 if correct
*/

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
