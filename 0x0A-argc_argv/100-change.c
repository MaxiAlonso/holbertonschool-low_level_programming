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
	int change = 0, cents = 0, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	if (change / 25)
	{
		cents = cents + change / 25, change = change - cents * 25, c = cents;
	}
	if (change / 10)
	{
		cents = cents + change / 10, change = change - (cents - c) * 10, c = cents;
	}
	if (change / 5)
	{
		cents = cents + change / 5, change = change - (cents - c) * 5, c = cents;
	}
	if (change / 2)
	{
		cents = cents + change / 2, change = change - (cents - c) * 2, c = cents;
	}
	if (change / 1)
	{
		cents = cents + change / 1, change = change - (cents - c) * 1, c = cents;
	}
	printf("%d\n", cents);
	return (0);
}
