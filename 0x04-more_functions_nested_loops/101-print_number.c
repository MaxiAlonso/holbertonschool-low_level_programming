#include "main.h"
/**
 * print_number - print integer
 * @n: integer
 **/

void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (n / 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
