#include "main.h"

/**
 * _strlen - returns the length of a string.
 * Return: returns the lenght of a string.
 * @s: pointer to a char
 **/

int _strlen(char *s)
{
	int a, len;

	a = 0;
	len = 0;

	for (a = 0; a <= *s++; a++)
	{
		len++;
	}

	return (len);
}
