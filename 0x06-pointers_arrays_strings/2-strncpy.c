#include "main.h"
/**
* *_strncpy - function about to print str
* @dest: is a cadena
* @src: es a cadena
* @n: put number
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
