#include "main.h"
/**
* *_strcpy - function about to print array
* @dest: is pointer variable
* @src: is pointer  variable
*/

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (char*)dest;
}
