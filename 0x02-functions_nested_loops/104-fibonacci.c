#include <stdio.h>

/**
 * main - entry
 * Return: 0
 **/

int main(void)
{
	long double a, b, c, f;

	a = 0;
	b = 1;

	for (f = 0; f < 99; f++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%.0Lf, ", c);
	}
	printf("\n");
	return (0);
}
