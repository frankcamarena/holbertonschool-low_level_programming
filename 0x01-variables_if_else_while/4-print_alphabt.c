#include <stdio.h>
/**
* main - starting point
*
* Return: 0 if correct
*/

/* Program about prints type alphabet lowercas -letter q and e*/
int main(void)
{
	int n;

	n = 97;
	/* your code goes there */
	while (n <= 122)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
		n++;
	}
	putchar(10);
	return (0);
}
