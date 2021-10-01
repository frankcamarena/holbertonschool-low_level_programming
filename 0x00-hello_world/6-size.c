#include <stdio.h>
/**
* main - starting point
*
* Return: 0 if correct
*/
int main(void)
{
	char charTipo;
	int intTipo;
	short shortTipo;
	long longTipo;
	float floatTipo;

	printf("Size of a char: %zu byte(s)\n", sizeof(charTipo));
	printf("Size of an int: %zu byte(s)\n", sizeof(intTipo));
	printf("Size of a long int: %zu byte(s)\n", sizeof(shortTipo));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longTipo));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatTipo));

	return (0);
}
