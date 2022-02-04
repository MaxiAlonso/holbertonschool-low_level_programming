#include <stdio.h>

/**
 * main - entry
 * Return: 0
 **/

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9' ; a++)
	{
	for (b = a ; b <= '9' ; b++)
	{
		if (a != b)
		{
		putchar(a);
		putchar(b);
		if (a < '8')
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
