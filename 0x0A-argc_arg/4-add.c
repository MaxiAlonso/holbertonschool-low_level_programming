#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: numbers of arguments
 * @argv: arguments
 * Return: 0 for succes
 * 1 if one of the arguments contains symbols that are not digits
 **/

int main(int argc, char *argv[])
{
	unsigned int i;
	int a, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (i = 0; i < strlen(argv[a]); i++)
		{
			if (!isdigit(argv[a][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
