#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if the strings can be considered identical, otherwise return 0
 * s2 can contain the special character * that can replace any string
 **/

int wildcmp(char *s1, char *s2)
{
	if (*(s1 + 1) == *(s2 + 1))
	{
		return (wildcmp(s1 + 1, s2 + 2));
	}
	if (*(s1 + 1) != *(s2 + 1))
	{
		return (0);
	}
	return (1);
}
