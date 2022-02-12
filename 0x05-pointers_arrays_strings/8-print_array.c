#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of int
 * @a: array
 * @n: numbers of elements
 **/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
		printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
