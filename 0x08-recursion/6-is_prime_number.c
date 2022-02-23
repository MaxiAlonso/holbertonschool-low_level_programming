#include "main.h"

/**
 * prime - determinate if a number is a prime number
 * @n: number
 * @a: number
 * Return: 1 if n is a prime number 0 otherwise
 **/

int prime(int n, int a)
{
	if (a > 1)
	{
		if (n % a == 0)
		{
			return (0);
		}
		else
		{
			return (prime(n, a - 1));
		}
	}
	return (1);
}

/**
 * is_prime_number - determinate if a number is a prime number
 * @n: number
 * Return: 1 if n is a prime number 0 otherwise
 **/
int is_prime_number(int n)
{
	int a;

	a = n - 1;

	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (prime(n, a));
}
