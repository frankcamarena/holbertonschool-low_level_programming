#include "main.h"

/**
 * _strlen_recursion - count length
 * @s: Es el pointer cadena
 * Return: length
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
