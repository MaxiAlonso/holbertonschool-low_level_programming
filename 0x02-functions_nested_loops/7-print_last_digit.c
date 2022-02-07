#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * Return: last digit
 * @n: number
 **/

int print_last_digit(int n)
{
	int ld;

	ld = (n % 10);
	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
