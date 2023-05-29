#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of char
 * @size: Size in bytes of array
 * @c: char to fill array with
 *
 * Return: pointer to array (success)
 * NULL if fails or size is 0
*/
char *create_array(unsigned int size, char c)
{
	char *c_array = 0;
	unsigned int i;

	if (size == 0)
		return (0); /* size = 0 */

	c_array = malloc(size);
	if (!c_array)
		return (0);

	/* initialize c_array with c */
	for (i = 0; i < size; ++i)
		c_array[i] = c;

	return (c_array);
}
