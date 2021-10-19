#include "main.h"
/**
* *_memset - function about to print str
* @s: is a pointer
* @b: is a value
* @n: times bytes
* Return: 0 is correct
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}

	return (0);

}
