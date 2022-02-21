#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s:string to be scanned
 * @accept: string containing the characters to match.
 * Return eturns a pointer to the byte in s that
 * matches one of the bytes in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *t;

	i = 0;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				t = &s[i];
				return (t);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
