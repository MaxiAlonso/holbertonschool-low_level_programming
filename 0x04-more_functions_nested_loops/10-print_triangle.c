#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: size of triangle
 **/

void print_triangle(int size)
{
	int a, s;

	for (a = 0; a < size; a++)
	{
		for (s = 0; s < (size - a); s++)
		{
			_putchar(' ');
		}
		while (s <= size)	
		{
		s++;
		_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
