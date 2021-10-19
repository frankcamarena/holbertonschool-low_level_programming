#include "main.h"
/**
* *_memset - function about to print str
* @s: is a pointer
* @b: is a value
* @n: times bytes
* Return: 0 is correct
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
