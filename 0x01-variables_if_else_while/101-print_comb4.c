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
	int c;

	a = 48;
	b = 48;
	c = 48;

	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
				c++;
			}
			c = 48;
			b++;
		}
		b = 48;
		a++;
	}

	putchar(10);
	return (0);
}
