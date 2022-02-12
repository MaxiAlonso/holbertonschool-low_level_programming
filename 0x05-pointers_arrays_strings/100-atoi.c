#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i, sign;
	double a;

	i = 0;
	a = 0;
	sign = 1;

	while (s[i])
	{
		if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
		{
			a = (a * 10) + s[i] - '0';
			if (s[i - 1] == '-')
			{
				sign = -1;
			}
		}
		else if (a != 0)
		{
			break;
		}
	i++;
	}
	return (a * sign);
}
