#include "main.h"

/**
 * int _isupper - checks for uppercase character.
 * Return: 1 if c is upper = otherwise
 * @c: character
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
