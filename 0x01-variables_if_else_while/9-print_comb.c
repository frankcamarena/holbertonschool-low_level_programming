#include <stdio.h>
/**
* main - starting point
*
* Return: 0 if correct
*/

/* Program about prints Numbers 0-9 with ,*/
int main(void)
{
	int n;

	n = 48;
	/* your code goes there */
	while (n <= 56)
	{
		putchar(n);
		putchar(44);
		putchar(32);
		n++;
	}
	putchar(57);
	return (0);
}
