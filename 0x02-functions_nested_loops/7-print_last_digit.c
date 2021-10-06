#include "main.h"
/**
* print_last_digit - function about to print the last digit the  of a number
* @x: is the last digit
* Return: x for las digit
*/
int print_last_digit(int x)

{
	if (x < 0)
	{
	x = (x * (-1));
	}
	x = x % 10;
	_putchar(x + '0');
	return (x);
}
