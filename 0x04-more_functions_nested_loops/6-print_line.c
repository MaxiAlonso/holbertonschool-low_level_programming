#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character
 **/

void print_line(int n)
{
	int i;

	i = 0;

	for (i = 0 ; i < n ; i++)
		{
		_putchar('_');
		}
	_putchar('\n');
}
