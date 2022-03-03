#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * then gives all the bits of each element an initial value of 0.
 * @nmemb: num of elements of the array
 * @size: lenght of bytes
 * Return: a pointer to the reserved space
 * Also return NULL if there is not enough storage, or if num or size is 0.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		a[i] = 0;
	}
	return (a);
}
