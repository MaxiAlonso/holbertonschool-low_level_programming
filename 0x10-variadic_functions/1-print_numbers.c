#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	num = va_arg(ap, int);
	printf("%d\n", num);
	va_end(ap);
}
