#include "main.h"

/**
 ** _strcpy - copies the string pointed to by src
 * @dest: char pointer
 * @src: char pointer
 * Return: dest
 **/

char *_strcpy(char *dest, char *src)
{
	int i;
	char temp;

	i = 0;
	while (src[i])
	{
		temp = src[i];
		dest[i] = temp;
		i++;
	}
	return (dest);
}
