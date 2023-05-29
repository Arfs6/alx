#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - create memory of size b
 * @b: bytes to allocate
 *
 * Return: pointer to block of memory
 * 98 if insufficient memory
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (!mem)
		exit(98);

	return (mem);
}
