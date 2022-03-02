#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character wich initializes the array
 * Return: Null if size = 0; array otherwise.
 **/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size != 0)
	{
		a = malloc(sizeof(a) * size);
			if (a != NULL)
			{
				for (i = 0; i < size; i++)
				{
					a[i] = c;
				}
				return (a);
			}
	}
	return (NULL);
}
