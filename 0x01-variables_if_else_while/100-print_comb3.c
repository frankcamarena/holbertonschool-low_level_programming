#include <stdio.h>
/**
* main - starting point
*
* Return: 0 if correct
*/

/* Program about prints Numbers 0-9 with ,*/
int main(void)
{
	int a;
	int b;

	a = 48;
	b = 48;

	while (a <= 57)
	{
		while (b <= 57)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
			b++;
		}
		b = 48;
		a++;
	}

	putchar(10);
	return (0);
}
