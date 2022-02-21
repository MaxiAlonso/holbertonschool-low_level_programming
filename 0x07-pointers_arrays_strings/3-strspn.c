#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept: string containing the list of characters to match in s.
 * Return: number of characters in the initial segment of s
 * which consist only of characters from accept.
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, j, a, b;

	len = 0;
	j = 0;

	while (accept[j])
	{
		j++;
	}
	for (b = 0; b < j; b++)
	{
		a = 0;
		while (s[a] != 32)
		{
			if (accept[b] == s[a])
			{
				len++;
			}
			a++;
		}
	}
	return (len);
}
