#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @src: string 2
 * @dest: string 1
 * Return: concatenated string
 **/

char *_strcat(char *dest, char *src)
{
	int i, a;

	i = 0;
	a = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[a])
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest);
}
