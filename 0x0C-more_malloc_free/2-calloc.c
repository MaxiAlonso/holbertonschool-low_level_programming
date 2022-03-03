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
	void *a;
	char *temp;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	temp = malloc(size * nmemb);
	if (temp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		temp[i] = 0;
	}
	a = temp;
	return (a);
}
