#include <stdio.h>
#include "main.h"
/**
* print_diagsums - funcion para sumar las diagonales de la matriz
* @a: variable
* @size: tamaño de la matriz
*/

void print_diagsums(int *a, int size)

{
	int x, suma1, suma2;

	for (x = 0;  x < size; x++)
	{
		suma1 += *(a + ((x * size) + x));
		suma2 += a[((x + 1) * (size - 1))];
	}
	printf("%d, %d\n", suma1, suma2);
}
