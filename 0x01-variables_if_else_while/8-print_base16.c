#include <stdio.h>
/**
* main - starting point
*
* Return: 0 if correct
*/

/* Program about prints type alphabet lowercase and uppercase*/
int main(void)
{
	int n;
	int m;

	n = 48;
	m = 97;
	/* your code goes there */
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}
