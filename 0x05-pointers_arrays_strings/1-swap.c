#include "main.h"
/**
* swap_int - function about ckeck for a digit
* @a: is pointer variable
* @b: is pointer variable
*/

void swap_int(int *a, int *b)

{
	int t;

	t = *a;
	*a = *b;
	*b = t;

}
