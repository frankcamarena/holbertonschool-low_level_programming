#include "main.h"
/**
* *_strspn - function about to print str
* @s: is a cadena
* @accept: es a cadena
* Return:  leng
*/

unsigned int _strspn(char *s, char *accept)

{
	int i = 0;
	int j = 0;
	int leng = 0;

	while (s[i] != '\0' && s[i] != ' ' && s[i] != ',' && s[i] != '.')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				leng++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (leng);
}
