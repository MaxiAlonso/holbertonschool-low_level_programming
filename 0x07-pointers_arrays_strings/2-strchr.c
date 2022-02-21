#include "main.h"

/**
 *  *_strchr - locates a character in a string.
 * @s: string
 * @c: character
 * Return: character if there is a match or null if it is not.
 **/

char *_strchr(char *s, char c)
{
	int a, b, d, i;
	char *temp;

	i = 0;
	temp = '\0';

	while (s[i])
	{
		i++;
	}
	for (a = 0; a < i; a++)
	{
		if (s[a] == c)
		{
			d = a;
			for (b = 0; b < i - d; b++, a++)
			{
				temp[b] = s[a];
			}
			a = i;
		}
	}
	return (temp);
}
