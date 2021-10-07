#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function about print table producto 9 times
 *
 * @n: number recibed
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			if (n != 98)
			{
				printf("%d %s", n, ",");
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d %s", n, ",");
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	putchar(10);
}
