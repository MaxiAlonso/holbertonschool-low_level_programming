#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of char of s2 to be concatenated to s1
 * Return: pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 * Also If the function fails, it should return NULL.
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, a = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= j)
	{
		n = j;
	}
	s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		s[a] = s1[a];
	}
	j = 0;
	for (a = i; a < i + n; a++)
	{
		s[a] = s2[j];
		j++;
	}
	s[a + 1] = '\0';
	return (s);
}
