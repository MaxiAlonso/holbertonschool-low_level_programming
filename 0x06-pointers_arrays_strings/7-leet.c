#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @s: string
 * Return: string in encoded in 1337
 **/

char *leet(char *s)
{
	int i, a;
	int let[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int num[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	i = 0;
	a = 0;

	while (s[i])
	{
		for (a = 0; a <= 10; a++)
		{
			if (s[i] == let[a])
			{
				s[i] = num[a];
			}
		}
	i++;
	}
	return (s);
}
