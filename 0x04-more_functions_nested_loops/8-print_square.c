#include "main.h"
/**
* print_square - function about to print square
* @size: Build square
*/

void print_square(int size)

{
	int c1, c2;

	if (size > 0)
	{
		for (c1 = 1; c1 <= size; c1++)
		{
			for (c2 = 1; c2 <= size; c2++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	_putchar(10); /*salto de línea*/
}
