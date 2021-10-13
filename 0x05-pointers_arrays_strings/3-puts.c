#include "main.h"
/**
* _puts - function about to print str
* @str: is pointer variable
*/

void _puts(char *str)

{
	int i;

	for (i = 0; (str[i] != '\0'); ++i)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
