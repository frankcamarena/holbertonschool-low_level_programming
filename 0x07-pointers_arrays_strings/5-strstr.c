#include "main.h"
/**
* *_strstr - devuelve la subcadena
* @haystack: Cadena examinada
* @needle: Cadena a buscar en s
* Return: parte de la cadena o null
*/

char *_strstr(char *haystack, char *needle)

{
	int i;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)

	{
		if (haystack[i] == needle[j])
		{
			return (haystack + i);
		}
	}

	return ('\0');
}
