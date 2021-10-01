#include <stdio.h>
/**
* main - starting point
*
* Return: 0 if correct
*/

/* Program about prints type alphabet lowercase in reverse*/
int main(void)
{
	int n;

	n = 122;
	/* your code goes there */
	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}
