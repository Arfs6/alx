#include <stdlib.h>
#include "main.h"

/**
 * array_range - create and array with range
 * @min: minimum or starting number
 * @max: maximum or stop number
 *
 * Return: array
 * NULL if fails
*/
int *array_range(int min, int max)
{
	int *range, i;

	if (min > max)
		return (NULL); /* invalid range */

	range = malloc((max - min + 1) * sizeof(int)); /* +1 = maximum value */
	if (!range)
		return (NULL); /* insufficient memory */

	/* initializing range values */
	for (i = 0; min <= max; i++, min++)
		range[i] = min;

	return (range);
}
