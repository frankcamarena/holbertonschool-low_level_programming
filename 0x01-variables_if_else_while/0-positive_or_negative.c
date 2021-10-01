#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - starting point
*
* Return: 0 if correct
*/

/* Program about prints type random number*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d", n);
	if (n < 0)
	{
		printf(" is negative\n");
	}
	else if (n > 0)
	{
		printf(" is positive\n");
	}
	else if (n == 0)
	{
		printf(" is zero\n");
	}
	return (0);
}
