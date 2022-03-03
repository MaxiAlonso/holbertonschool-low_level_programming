#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: min value of the array
 * @max: max value of the array
 * Return: pointer to the array.
 * also return NULL if min > max or if the function fails.
 **/

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
