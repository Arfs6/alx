#include "main.h"

/**
 * _memcpy - copy memory
 * @src: Memory source
 * @dest: destination
 * @n: number of memory to copy
 *
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
