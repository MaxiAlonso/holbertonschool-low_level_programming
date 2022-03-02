#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - eturns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to a 2 dimensional array of integers.
 * NULL on failure or if width or height is 0 or negative.
 **/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width > 0 && height > 0)
	{
		a = malloc(sizeof(int *) * height);
		if (a != NULL)
		{
			for (i = 0; i < height; i++)
			{
				a[i] = malloc(sizeof(int) * width);
				if (a[i] == NULL)
				{
					for (i = 0; i < height; i++)
					{
						free(a[i]);
					}
				return (NULL);
				}
				for (j = 0; j < width; j++)
				{
					a[i][j] = 0;
				}
			}
			return (a);
		}
		free(a);
	}
	return (NULL);
}
