#include "main.h"
/**
* _abs - function about to get absolute value
* @x: is the number
* Return: 0 if isn't lowercase
*/
int _abs(int x)

{
	if (x < 0)
	{
		x = (x * (-1));
	}
	return (x);
}
