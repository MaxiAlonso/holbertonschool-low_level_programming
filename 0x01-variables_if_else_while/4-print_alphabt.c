#include <stdio.h>

/**
 * main - entry
 * Return: 0
 **/

int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
	if (alph != 'q' && alph != 'e')
	{
	putchar(alph);
	}
	}
	putchar('\n');
	return (0);
}
