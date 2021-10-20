#include "main.h"

/**
 * _print_rev_recursion - Function print in reverse
 * @s: cadea a revertir
 */

void _print_rev_recursion(char *s)

{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
