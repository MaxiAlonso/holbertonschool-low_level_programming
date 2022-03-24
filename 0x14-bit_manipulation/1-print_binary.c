#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert in binary
 **/

void print_binary(unsigned long int n)
{
	unsigned int b;

	if (n < 2)
	{
		_putchar(n + '0');
	}
	else
	{
		print_binary(n >> 1);
		b = n - (n >> 1 << 1);
		if (b == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
	}
}
