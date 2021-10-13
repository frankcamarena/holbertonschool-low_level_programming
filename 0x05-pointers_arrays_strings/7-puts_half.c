#include "main.h"
/**
* puts_half - function about to print str
* @str: is pointer variable
*/

void puts_half(char *str)

{
	int i, z, leng, half;

	for (i = 0; (str[i] != '\0'); i++)
	{

	}
	leng = i;
	half = (leng + 1) / 2;
	for (z = half; z <= leng - 1; z++)
	{
		_putchar(str[z]);
	}
	_putchar(10);
}
