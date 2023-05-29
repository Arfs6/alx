#include "main.h"

/**
 * get_bit - get the bit value at an index of a number
 * @n: number to retrieve bit
 * @index: index of bit to retrieve
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ret;

	if (index > 63)
		return (-1);

	ret = n >> index;
	ret &= 1;
	return (ret);
}
