#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to an unsigned long int number
 * @index: given index
 * Return: 1 if it worked or -1 if an error occured
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 32)
	{
		*n = *n & ~(1 << index);

		return (1);
	}
	return (-1);
}
