#include "main.h"

/**
 * binary_to_uint - convert a string containing binary to unsigned int
 * @b: string containing binary
 *
 * Return: converted int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int ret = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		ret <<= 1;
		ret |= b[i] - '0';
	}

	return (ret);
}
