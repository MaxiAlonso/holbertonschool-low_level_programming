#include "main.h"

/**
 * _strlen - returns the length of a string.
 * Return: returns the lenght of a string.
 * @s: string
 **/

int _strlen(char *s)
{
	int len;

	len = 0;

	for (len = 0; s[len]; len++)
	{
	}

	return (len);
}
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 **/

void print_rev(char *s)
{
	int i;

	i = 0;

	for (i = (_strlen(s) - 1); i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
