#include "main.h"

/**
 *
 *
 *
 *
 **/

int wildcmp(char *s1, char *s2)
{
	if (*(s1 + 1) == *(s2 + 1))
	{
		return (wildcmp (s1 + 1, s2 + 2));
	}
	if (*(s1 + 1) != *(s2 + 1))
	{
		return (0);
	}
	return (1);
}
