#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer (-) s1<s2, 0 s1=s2 and (+) s1>s2
 **/

int _strcmp(char *s1, char *s2)
{
	int i, a;

	i = 0;
	a = 0;

	if (s1[0] == s2[0])
	{
		while (s1[i] == s2[i] && s1[i] && s2[i])
		{
			i++;
		}
	}
	a = (s1[i] - '0') -  (s2[i] - '0');
	return (a);
}

