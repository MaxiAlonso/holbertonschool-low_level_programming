#include "main.h"
#include <stdlib.h>

/**
* char *argstostr - concatenates all the arguments of a program.
* @ac: arguments counter
* @av: argument matrix
**/

char *argstostr(int ac, char **av)
{
	int i, j, count;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			count++;
		}
		count++;
	}
	s = malloc(sizeof(char) * count + 1);
	if (s != NULL)
	{
		count = 0;
		for (i = 0; i < ac; i++)
		{
			j = 0;
			while (av[i][j])
			{
				s[count] = av[i][j];
				count++;
				j++;
			}
		s[count] = '\n';
		count++;
		}
	return (s);
	}
	return (NULL);
}
