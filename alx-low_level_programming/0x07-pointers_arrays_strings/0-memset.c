#include "main.h"

/**
 * _memset - fill memory with a constant bite
 * @s: memory area
 * @b: bites
 * @n: number of bites to fill
 *
 * Return: pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
