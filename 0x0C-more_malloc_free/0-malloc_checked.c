#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: unsigned int
 * Return: a pointer to the allocated memory, if malloc fails
 * if malloc fails, the function should cause normal process termination
 * with a status value of 98
 **/

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
