#include "main.h"

/**
 *  *_strchr - locates a character in a string.
 * @s: string
 * @c: character
 * Return: string if there is a match or null if it is not.
 **/

char *_strchr(char *s, char c)
{
	int i, a;
	char *t;

	i = 0;

	while (s[i])
	{
		i++;
	}
	for (a = 0; a <= i; a++)
	{
		if (s[a] == c)
		{
			t = &s[a];
			return (t);
		}
	}
	return ('\0');
}
