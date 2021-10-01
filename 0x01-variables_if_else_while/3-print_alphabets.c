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

	n = 97;
	m = 65;
	/* your code goes there */
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}
