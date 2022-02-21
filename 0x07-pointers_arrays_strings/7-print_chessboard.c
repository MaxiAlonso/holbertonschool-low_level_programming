#include "main.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: array
 **/

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
	}
}
