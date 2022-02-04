#include <stdio.h>

/**
 * main - entry
 * Return: 0
 **/

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9' ; a++)
	{
	for (b = a ; b <= '9' ; b++)
	{
	for (c = b ; c <= '9' ; c++)
	{
		if (a != b && b != c)
		{
		putchar(a);
		putchar(b);
		putchar(c);
		if (a < '7')
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
