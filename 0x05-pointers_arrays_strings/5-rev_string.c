#include "main.h"
/**
* rev_string - function about to print str
* @s: is pointer variable
*/

void rev_string(char *s)

{
	int i, z, y, leng, temp;

	for (i = 0; (s[i] != '\0'); i++)
	{

	}
	leng = i;
	y = leng - 1;

	for (z = 0; z < y; z++)
	{
		temp = s[z];
		s[z] = s[y];
		s[y] = temp;
		y--;
	}
}
