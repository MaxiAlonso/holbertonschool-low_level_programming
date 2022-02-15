#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @src: string 2
 * @dest: string 1
 * @n: bytes from src
 * Return: concatenated string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	i = 0;
	a = 0;

	while (dest[i])
	{
		i++;
	}
	if (src[n])
	{
		for (a = 0; a < n; a++)
		{
			dest[i] = src[a];
			i++;
		}
	}
	else
	{
		while (src[a])
		{
			dest[i] = src[a];
			i++;
			a++;
		}
	}
	return (dest);
}
