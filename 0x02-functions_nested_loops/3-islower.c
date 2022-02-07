#include "main.h"

/**
 * _islower - entry
 * Return: 1 lower case 0 otherwise
 * @c: character
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
