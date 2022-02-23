#include "main.h"

/**
 * square - find the natural square root of a number.
 * @n: number
 * @a: saqure
 * Return: the natural square root of n or -1 if it has not.
 **/
int square(int a, int n)
{
	if (a * a == n)
	{
		return (a);
	}
	if (a * a > n)
	{
		return (-1);
	}
	return (square(a + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: the natural square root of n or -1 if it has not.
 **/

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (square(1, n));
}
