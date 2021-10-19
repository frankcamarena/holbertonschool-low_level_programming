#include "main.h"
/**
* *_memcpy - function about to copy
* @dest: is a pointer
* @src: is a value
* @n: times bytes
* Return: dest is correct
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
