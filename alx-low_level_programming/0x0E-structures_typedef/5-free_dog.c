#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory of dog
 * @d: dog to free
*/
void free_dog(dog_t *d)
{
	if (!d)
		return;

	if (d->owner)
		free(d->owner);
	if (d->name)
		free(d->name);
	free(d);
}
