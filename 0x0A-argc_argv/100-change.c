#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 for succes 1 for error
 **/

int main(int argc, char *argv[])
{
	int cents, change, rest;

	cents = 0;
	rest = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change / 25)
	{
		cents1 = cents + change / 25;
		rest1 = change - cents * 25;
	}
	if (rest1 / 10)
        {
                cents2 = cents + rest1 / 10;
                rest2 = change - rest1 - (cents2 - cents1 * 10)
        }

	printf("%d\n", cents2);
	printf("%d\n", rest1);
	printf("%d\n", rest1);
	return (0);
}
