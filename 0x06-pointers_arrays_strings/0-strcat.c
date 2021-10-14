#include "main.h"
/**
* *_strcat - function about to print str
* @dest: is a cadena
* @src: es a cadena
* Return: dest
*/

char *_strcat(char *dest, char *src)

{
	int i;
	int leng;

	leng = 0;
	while (dest[leng] != '\0')
	{
		++leng;
	}

	for (i = 0; (src[i] != '\0'); ++i)
	{
		dest[leng] = src[i];
		++leng;
	}
	dest[leng] = '\0';
	return (dest);
}
