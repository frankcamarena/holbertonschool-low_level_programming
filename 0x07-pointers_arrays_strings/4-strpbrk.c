#include "main.h"
/**
* *_strpbrk - devuelve la primera aparicion de la cadena s
* @s: Cadena examinada
* @accept: Cadena a buscar en s
* Return: parte de la cadena o null
*/

char *_strpbrk(char *s, char *accept)

{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return ('\0');
}
