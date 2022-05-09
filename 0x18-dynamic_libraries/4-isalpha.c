#include "main.h"

/**
 * _isalpha - entry
 * Return: 1 is alpha 0 otherwise
 * @c: character
 **/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
