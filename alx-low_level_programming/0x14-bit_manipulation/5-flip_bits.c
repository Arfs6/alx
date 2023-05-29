#include "main.h"

/**
 * flip_bits - find number of bits to flip to get another number
 * @n: number to flip
 * @m: number to flip to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned int count = 0;
	unsigned long int tempN, tempM;

	for (i = 63; i >= 0; --i)
	{
		tempN = n;
		tempM = m;

		tempN >>= i;
		tempM >>= i;

		tempN &= 1;
		tempM &= 1;

		if (tempN ^ tempM)
			count++;
	}

	return (count);
}
