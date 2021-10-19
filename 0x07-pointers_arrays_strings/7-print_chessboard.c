#include "main.h"
/**
* print_chessboard - devuelve el puntero a la primera aparición del caracter n
* @a: Cadena
*/

void print_chessboard(char (*a)[8])

{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
