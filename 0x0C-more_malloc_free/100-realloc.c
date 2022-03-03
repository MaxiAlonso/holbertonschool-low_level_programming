#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - changes the size of a previously reserved storage block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: .
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *t;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	t = malloc(new_size);
	if (t == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		t = ptr, free(ptr), ptr = t;
	}
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
		{
			t[a] = ((char *)ptr)[a];
		}
		free(ptr), ptr = t;
	}
	return (ptr);
}
