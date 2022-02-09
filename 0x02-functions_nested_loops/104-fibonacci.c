#include <stdio.h>

/**
 * main - entry
 * Return: 0
 **/

int main(void)
{
	long double a, b, c;
	unsigned long int f;

	a = 0;
	b = 1;

	for (f = 0; f < 100; f++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%.0Lf", c);
	if (f == 99)
	{
		putchar ('\n');
	}
	else
	{
			printf(", ");
	}
	}
	return (0);
}
