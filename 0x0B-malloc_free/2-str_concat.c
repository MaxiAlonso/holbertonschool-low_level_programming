#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: NULL
 **/

char *str_concat(char *s1, char *s2)
{
	int i, j, a, b;
	char *s;

	i = 0;
	j = 0;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = malloc(sizeof(char) * (i + j + 1));
	if (s != NULL)
	{
		for (a = 0; a < i; a++)
		{
			s[a] = s1[a];
		}
		for (b = 0; b < j; b++)
		{
			s[a + b] = s2[b];
		}
	return (s);
	}
	return (NULL);
}
