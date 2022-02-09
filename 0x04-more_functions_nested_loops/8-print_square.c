#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *@size: size of the square
 **/

void print_square(int size)
{
	int i, s;

	i = 0;
	s = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (s = 0; s < size; s++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
