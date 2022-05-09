#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @b: byte
 * @s: memory area
 * @n: bytes from memory area
 * Return: pointer to the memory area
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
