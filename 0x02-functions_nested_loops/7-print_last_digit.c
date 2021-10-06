#include "main.h"
/**
* print_last_digit - function about to print the last digit the  of a number
* @x: is the last digit
* Return: x for las digit
*/
int print_last_digit(int x)

{
	x = x % 10;
	if (x < 0)
	{
	x = (x * (-1));
	}
	_putchar(x + '0');
	return (x);
}
