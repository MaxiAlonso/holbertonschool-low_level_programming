#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: size of triangle
 **/

void print_triangle(int size)
{
	int a, s;

	a = 0;
	s = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (s = 0; s < (size - a); s++)
			{
				_putchar(' ');
			}
			while (s <= size)
			{
				_putchar('#');
				s++;
			}
		_putchar('\n');
		}
	}
}
