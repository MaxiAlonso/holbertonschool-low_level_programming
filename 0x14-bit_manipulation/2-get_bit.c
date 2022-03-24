#include "main.h"

/**
 * get_bit - get the value of a bit at a given index.
 * @n: number
 * @index: given index
 * Return: value of the bit at index index or -1 if an error occured
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count, bit;

	count = 0;

	if (index <= 31)
	{
		if (n == 0)
		{
			return (0);
		}
		while (n != 0)
		{
			if (count == index)
			{
				bit = n & 1;
				return (bit);
			}
			count++;
			n >>= 1;
		}
	}
	return (-1);
}
