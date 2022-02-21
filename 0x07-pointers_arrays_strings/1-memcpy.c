#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest:memory area where src is going to be copied
 * @src: memory area to be copied
 * @n: bytes from memory area
 * Return: pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a, i;

	a = 0;
	i = 0;

	while (src[i])
	{
		i++;
	}
	if (n < i)
	{
		for (a = 0; a < n; a++)
		{
			dest[a] = src[a];
		}
	}
	else
	{
		for (a = 0; a < i; a++)
		{
			dest[a] = src[a];
		}
	}
	return (dest);
}
