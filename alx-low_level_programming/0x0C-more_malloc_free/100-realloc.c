#include <stdlib.h>
#include "main.h"

/**
 * copy_ptr - copy memory of pointer passed
 * @ptr: memory to copy from
 * @old_size: size of ptr
 * @new_ptr: new memory
 * *@new_size: size of new_ptr
 *
 * Return: nothing
*/
void copy_ptr(void *ptr, void *new_ptr, unsigned int old_size,
	unsigned int new_size)
{
	unsigned int i = 0, stop;

	if (old_size > new_size)
		stop = old_size - new_size;
	else
		stop = new_size - old_size;

	for (i = 0; i < stop; i++)
		*((char *)(new_ptr) + i) = *((char *)(ptr) + i);
}

/**
 * _realloc - reallocate a memory and it's content
 * @ptr: pointer to memory
 * @old_size: size of pointer
 * @new_size: size to be changed to
 *
 * Return: pointer to new memory
 * ptr if old_size == new_size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr); /* memory is not changed */
	else if (!ptr)
	{
		new_ptr = malloc(new_size); /* nothing to copy */
		free(ptr);
		return (new_ptr);
	}
	else if (ptr && !new_size)
	{
		free(ptr); /* memory is 0 */
		return (NULL);
	}

	/* create new_memory and copy content in memory */

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL); /* insufficient memory */
	copy_ptr(ptr, new_ptr, old_size, new_size);

	free(ptr);

	return (new_ptr);
}
