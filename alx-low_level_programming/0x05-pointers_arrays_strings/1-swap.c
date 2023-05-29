#include "main.h"

/**
 * swap_int - swap the numbers passed
 * @a: A number to swap with...
 * @b: The second number to swap with.
*/
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	/* swap the numbers. not address! */
	*a = j;
	*b = i;
}
