#include "main.h"

/**
 * print_sign - prints the sign of a number
 ** Return: 1 possitives -1 negatives 0 zero
 * @n: number
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
