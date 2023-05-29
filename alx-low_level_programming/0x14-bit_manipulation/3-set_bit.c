#include "main.h"

/**
 * set_bit - set a bit to 1
 * @n: number to set the bit in
 * @index: index of the bit
 *
 * Return: 1 success
 * -1 invalid index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > 63 || !n)
		return (-1);

	temp = *n;
	temp >>= index;
	temp &= 1;
	temp |= 1;
	temp <<= index;

	*n |= temp;

	return (1);
}
