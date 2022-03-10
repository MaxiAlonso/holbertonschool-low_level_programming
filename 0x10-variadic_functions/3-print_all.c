#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything from format
 * @format: is a list of types of arguments passed to the function
 **/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, len;
	char *s;

	i = 0;
	len = 0;

	while (format && format[len])
	{
		len++;
	}
	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (va_arg(ap, int)));
				break;
			case 'i':
				printf("%d", (va_arg(ap, int)));
				break;
			case 'f':
				printf("%f", (va_arg(ap, double)));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if (i < len - 1 && (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
