#include <stdio.h>
#include "main.h"
/**
* print_array - function about to print array
* @a: is pointer variable
* @n: is variable elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		else
		printf(", ");
	}
	putchar(10);
}

