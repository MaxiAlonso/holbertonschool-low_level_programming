#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string
 **/

void rev_string(char *s)
{
	int a, b, c;
	char temp;

	a = 0;
	b = 0;
	c = 0;

	while (s[a])
	{
		a++;
	}
	a = a - 1;
	c = a;
	for (b = 0; b <= c / 2; b++, a--)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;
	}
}
