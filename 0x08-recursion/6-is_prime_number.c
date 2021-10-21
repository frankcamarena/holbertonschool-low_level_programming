#include "main.h"

/**
 * is_prime_number - function to know nunmber prime
 * @n: Es el nùmero
 * Return: 1 or 0
 */

int is_prime_number(int n)

{
	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	else
		return (1);
}
