#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character
 **/

void print_diagonal(int n)
{
	int i, s;

	i = 0;
	s = 0;

	for (i = 0 ; i < n ; i++)
	{
		for (s = 0 ; s < i ; s++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
