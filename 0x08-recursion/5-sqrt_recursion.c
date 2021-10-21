#include "main.h"

/**
 * _sqrt_recursion - function to get sqrt
 * @n: Is el number to sqrt
 * Return: sqrt
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (aux_sqrt(n, 1));
}

/**
 * aux_sqrt- function aux
 * @a: Es el número de entrada n
 * @b: Es el nùmero impar
 * Return: is correct
 */

int aux_sqrt(int a, int b)

{
	int x;

	x = a - b;
	if (x < 0)
		return (-(b / 2) - 1);
	if (x == 0)
		return (1);
	else
		return (1 + aux_sqrt(x, b + 2));
}

