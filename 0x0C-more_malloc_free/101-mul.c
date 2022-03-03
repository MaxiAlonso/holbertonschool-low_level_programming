#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 for succes 1 for error
 **/

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
	printf("Error\n");
	exit(98);
	}
}
