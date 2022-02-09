#include <stdio.h>

/**
 * main - entry
 * Return: 0
 **/

int main(void)
{
	unsigned long int a, b, c, f, g;

	a = 0;
	b = 1;
	c = 0;
	f = 0;
	g = 0;

	for (f = 0; f < 33; f++)
	{
		c = a + b;
		a = b;
		b = c;

		if ((c % 2) == 0)
		{
		g += c;
		}
	}
	printf("%lu\n", g);

	return (0);
}
