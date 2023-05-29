#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number ofr elements in array
 * @size: size of elements of array
 *
 * Return: NULL is size or nmemb == 0
 * NULL if malloc fails.
 * pointer to array (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);/* insufficient space */

	for (i = 0; i < (nmemb * size); i++)
		*((char *)(ptr) + i) = 0;

	return (ptr);
}
