#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: tring to be searched with-in haystack string.
 * Return: a pointer to the first occurrence in haystack of any of
 * the entire sequence of characters specified in needle.
 **/

char *_strstr(char *haystack, char *needle)
{
	int i, j, count;

	i = 0;
	j = 0;

	if (needle[j] == '\0')
	{
		return (haystack);
	}
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			count = 0;
			while (haystack[i] == needle[j])
			{
				i++;
				j++;
				count++;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i - count]);
			}
			i = i - count;
			j = j - count;
			}
			i++;
	}
	return ('\0');
}
