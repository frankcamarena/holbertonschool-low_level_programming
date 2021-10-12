#include <stdio.h>
/**
* main - function about to print bizzbuzz
* Return: 0 is correct
*/

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}

		else
		{
			printf("%d", i);
		}
			putchar(' ');

	}
	putchar(10);
	return (0);
}

