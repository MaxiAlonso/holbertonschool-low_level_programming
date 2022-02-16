#include "main.h"

/**
 * print_number -prints an integer
 * @n: integer
 **/

void print_number(int n)
{
	unsigned int c, d;
	int i = 0, t = 0;
	double p = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	c = n;
	d = n;
	while (c / 10 != 0)
	{
		c = c / 10;
		i++;
	}
	t = i;
	while (t > 0)
	{
		p = p * 10;
		t--;
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		while (i > 0)
		{
			n = n / p;
			_putchar(n % 10 + '0');
			n = d;
			p = p / 10;
			i--;
		}
		_putchar(n % 10 + '0');
	}
}
