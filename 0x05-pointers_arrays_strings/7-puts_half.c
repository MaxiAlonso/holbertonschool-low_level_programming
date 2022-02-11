#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: string
 **/

void puts_half(char *str)
{
	int i, a, c, d;

	i = 0;
	a = 0;
	c = 0;
	d = 0;

	while (str[i])
	{
		a++;
	}
	a = a - 1;
	c = a;
	if (c % 2 == 0)
	{
		i = c / 2;
	}
	else
	{
		i = (c + 1) / 2;
	}
	for (d = i; d <= c ; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
