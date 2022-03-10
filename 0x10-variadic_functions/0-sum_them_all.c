#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters of a variadic function
 * @n: last required argument.
 * Return: sum of all arguments or 0 if n = 0
 **/

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	sum = 0;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
	else
	{
		return (0);
	}
}
