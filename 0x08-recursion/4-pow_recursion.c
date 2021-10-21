#include "main.h"

/**
 * _pow_recursion - function to  pow
 * @x: Es el nùmero
 * @y: Es la varibale potencia
 * Return: potencia
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
