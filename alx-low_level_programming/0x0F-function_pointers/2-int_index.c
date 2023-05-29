#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches an array
 * @array: array to search
 * @size: size of array
 * @cmp: what to search for
 *
 * Return: index of element found
 * -1 if size less than 0
 * -1 if no element found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0 || !array || !cmp)
		return (-1);/* invalid size */

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))/* cmp returns 0 if it fails */
			return (i);
	}

	return (-1); /* no search found */
}
