#include "main.h"

/**
 * get_bit - get the value of a bit at a given index.
 * @n: number
 * @index: given index
 * Return: value of the bit at index index or -1 if an error occured
 **/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index < 32)
	{
		if (((n >> index) & 1) == 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (-1);
}
