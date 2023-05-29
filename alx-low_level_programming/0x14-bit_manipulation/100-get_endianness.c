#include <stdlib.h>
#include "main.h"

/**
 * get_endianness  - get the type of endianness of the current machine
 *
 * Return: 1 if little endianness
 * 0 if big endianness
 */
int get_endianness(void)
{
	unsigned char check = 1;

	check <<= 1;
	if (check)
		return (1);

	return (0);
}
