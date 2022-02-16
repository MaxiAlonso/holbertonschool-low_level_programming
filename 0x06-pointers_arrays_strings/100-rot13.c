#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string
 * Return: encoded string
 **/

char *rot13(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
			{
				s[i] = s[i] + 26;
			}
			s[i] = s[i] - 13;
		break;
		}
		i++;
	}
	return (s);
}
