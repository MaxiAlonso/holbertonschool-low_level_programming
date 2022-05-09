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
	unsigned int a;

	a = 0;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
