#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 **/

int main(void)
{
	long int n, p;

	n = 612852475143;
	p = 1;

	while (n != 1)
	{
		p++;
		while (n % p == 0)
		{
			n = (n / p);
		}
	}
	printf("%ld\n", p);
	return (0);
}
