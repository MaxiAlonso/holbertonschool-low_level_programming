#include "main.h"

/**
 * print_number -  prints an integer
 * @n: integer
 **/

void print_number(int n)
{
	int a;

	if (n < 0)
	{
		_putchar('-'),
		 a = -n;
	}
	else
	{
		a = n;
	}
	if (n / 10 > 0)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
