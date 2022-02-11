#include "main.h"

/**
 * swap_int
 * @a: integer
 * @b: integer
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *a, *a = *b, *b = c;
}
