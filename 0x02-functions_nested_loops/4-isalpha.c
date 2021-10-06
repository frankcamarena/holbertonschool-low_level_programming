#include "main.h"
/**
* _isalpha - function about to show lowercase and uppercase
* @c: is 1 for lowercase
* Return: 0 if isn't lowercase
*/

int _isalpha(int c)

{
int a = 0;

	if ((c >= 'A') && (c <= 'z'))
		a = 1;
	return (a);
}
