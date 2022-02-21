#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: d
 * @needle: d
 * Return: d
 **/

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *t;

	i = 0;

	while (needle[i])
	{
		j = 0;
		while (haystack[j])
		{
			if (needle[i] == haystack[j])
			{
				t = &haystack[j];
				return (t);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
