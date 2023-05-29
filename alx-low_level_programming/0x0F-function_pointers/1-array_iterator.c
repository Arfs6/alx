#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - performs action on each element of array
 * @array: array
 * @size: size of array
 * @action: action to take
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;
	for (i = 0; i < size; ++i)
		action(*(array + i));
}
