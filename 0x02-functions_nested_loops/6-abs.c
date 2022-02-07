#include "main.h"

/**
 *_abs - give us the abs of a number
 * Return: 0
 * @abs: number
 **/

int _abs(int abs)
{
	abs = abs;

	if (abs < 0)
	{
		abs = -abs;
	}
	else
	{
		abs = abs;
	}
	return (abs);
}
