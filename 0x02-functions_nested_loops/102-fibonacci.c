#include <stdio.h>

/**
 * main - entry
 * Return: 0
 **/

int main(void)
{
	unsigned long int a, b, c, f;

	a = 0;
	b = 1;

	for (f = 0; f < 50; f++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
	if (f == 49)
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
