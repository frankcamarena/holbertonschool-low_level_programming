#include "main.h"
/**
* puts2 - function about to print str
* @str: is pointer variable
*/

void puts2(char *str)

{
	int i, z, leng;

	for (i = 0; (str[i] != '\0'); i++)
	{

	}
	leng = i;
	for (z = 0; z <= (leng - 1); z += 2)
	{
		_putchar(str[z]);
	}
	_putchar(10);
}
