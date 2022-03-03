#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **strtow - splits a string into words.
 * @str: string
 * Return: a pointer to an array of strings (words)
 * also return NULL if str = NULL or str = ""
 **/

char **strtow(char *str)
{
	int i, w, wc, a, b, start;
	char **s = 0;

	wc = 0, w = 0, i = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[i])
		if (str[i] == 32)
		{
			i++;
		}
		else
		{
			start = i, w = 0;
			while (str[i] != 32)
			{
				i++;
				w++;
			}
			w++;
			wc++;
			s = malloc(sizeof(char) * wc);
			if (s == NULL)
			{
				return (NULL);
			}
			s[wc] = malloc(sizeof(char) * w);
			if (s[wc] == NULL)
			{
				return (NULL);
			}
			for (a = start; a < start + w; a++)
			{
				b = 0;
				s[wc][b] = str[a];
				b++;
			}
		}
	return (s);
}
