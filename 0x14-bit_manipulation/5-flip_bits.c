#include "main.h"

/**
 * flip_bits - count the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number to compare
 * @m: second number to compare
 * Return: number of bits you would need to flip
 * to get from one number to another.
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int bits;

	bits = 0;

	num = n ^ m;

	while (num != 0)
	{
		bits += num & 1;
		num = num >> 1;
	}
	return (bits);
}
