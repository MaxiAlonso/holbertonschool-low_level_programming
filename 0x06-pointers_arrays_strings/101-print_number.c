#include "main.h"

/**
 * print_number -prints an integer
 * @n: integer
 **/

void print_number(int n)
{
	unsigned int c, d, e = n;
	int i = 0, t = 0;
	double p = 1;

	if (n < 0)
	{
		_putchar('-');
		e = n * -1;
	}
	c = e;
	d = e;
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
	if (e < 10)
	{
		_putchar(e + '0');
	}
	else
	{
		while (i > 0)
		{
			e = e / p;
			_putchar(e % 10 + '0');
			e = d;
			p = p / 10;
			i--;
		}
		_putchar(e % 10 + '0');
	}
}
