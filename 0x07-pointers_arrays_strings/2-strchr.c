#include "main.h"
/**
* *_strchr - devuelve el puntero a la primera aparición del caracter n
* @s: es la cadena a evaluar
* @c: is a value
* Return: ptr is correct
*/

char *_strchr(char *s, char c)

{
	int i = 0;
	char *ptr;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		++i;
	}

	if (s[i] != c && s[i] == '\0')
		ptr = 0;
	else
		ptr = &s[i];

	return (ptr);
}
