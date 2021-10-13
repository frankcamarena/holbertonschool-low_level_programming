#include "main.h"
/**
* print_rev - function about to print str
* @s: is pointer variable
*/

void print_rev(char *s)

{
	int i, z, leng;

	for (i = 0; (s[i] != '\0'); i++)
	{

	}
	leng = i;
	for (z = leng - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}
	_putchar(10);
}
