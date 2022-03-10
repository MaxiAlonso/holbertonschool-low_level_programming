#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	if (n != 0)
	{
		if (separator == NULL)
		{
			separator = "";
		}
		va_start(ap, n);
		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(ap, char*);
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s%s ", s, separator);
		}
		s = va_arg(ap, char*);
		if (s == NULL)
		{
			s = "(nil)";
		}
		printf("%s\n", s);
		va_end(ap);
	}
}
