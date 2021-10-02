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
	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(44);
		putchar(32);
		}
		n++;
	}
	putchar(10);
	return (0);
}
