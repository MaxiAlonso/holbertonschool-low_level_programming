#include "main.h"

/**
 *_strlen - eturns the length of a string.
 * @s: string
 **/

int _strlen(char *s)
{
	int a, len;

	len = 0;
	a = 0;

	for (a = 0; a <= *s++; a++)
	{
		len++;
	}
	return (len);
}
