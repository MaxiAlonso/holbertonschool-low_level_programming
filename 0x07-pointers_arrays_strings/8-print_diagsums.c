#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: square matrix of integers
 * @size: size of the matrix
 **/

void print_diagsums(int *a, int size)
{
	int r, b, sum1, sum2;

	b = 0;
	sum1 = 0;
	sum2 = 0;

	for (r = 0; r < size; r++)
	{
		sum1 = sum1 + a[r + (size * b)];
		b++;
	}
	b = size - 1;
	for (r = 0; r < size; r++)
	{
		sum2 = sum2 + a[r + (size * b)];
		b--;
	}
	printf("%d, %d\n", sum1, sum2);
}
