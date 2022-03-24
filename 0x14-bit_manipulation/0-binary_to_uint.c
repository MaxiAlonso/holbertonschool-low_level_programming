#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number,
 * or 0 if one or more chars in the string b that is not 0 or 1 or if b is NULL
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, i, secop;

	dec = 0;
	i = 0;
	secop = 0;

	if (b != NULL)
	{
		while (b[i])
		{
			if (b[i] != '1' && b[i] != '0')
			{
				return (0);
			}
			i++;
		}
		while (i != 0)
		{
			i--;
			dec += (b[i] - '0') << secop;
			secop++;
		}
	}
	return (dec);
}
