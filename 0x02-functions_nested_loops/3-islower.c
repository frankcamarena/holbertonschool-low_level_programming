#include "main.h"
/**
* _islower - function about to show lowercase
* @c: is 1 for lowercase
* Return: 0 if isn't lowercase
*/

int _islower(int c)

{
int a = 0;

	if ((c >= 97) && (c <= 122))
		a = 1;
	return (a);
}
