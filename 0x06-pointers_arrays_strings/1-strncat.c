#include "main.h"
/**
* *_strncat - function about to print str
* @dest: is a cadena
* @src: es a cadena
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
	int i;
	int leng;

	leng = 0;
	while (dest[leng] != '\0')
	{
		++leng;
	}

	for (i = 0; i < n && (src[i] != '\0'); i++)
	{
		dest[leng + i] = src[i];
	}
	dest[leng + i] = '\0';
	return (dest);
}
