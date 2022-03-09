#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int num1, num2, res, opc;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	opc = argv[2][0];
	op = argv[2];

	if (opc != '+' && opc != '-' && opc != '*' && opc != '/' && opc != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((opc == '/' && num2 == 0) || (opc == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(op)(num1, num2);
	printf("%d\n", res);
	return (0);
}
