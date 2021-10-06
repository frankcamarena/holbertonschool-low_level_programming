#include "main.h"
/**
* print_sign - function about to print the sign of a number
* @n: is the sign
* Return: 0 if isn't lowercase
*/
int print_sign(int n)

{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
