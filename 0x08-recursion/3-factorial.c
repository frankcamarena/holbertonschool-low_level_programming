#include "main.h"

/**
 * factorial - prints n factorial
 * @n: Es la variable para el factorial
 * Return: factorial
 */

int factorial(int n)

{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
