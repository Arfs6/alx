#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initialize a dog struct
 * @d: pointer to dog variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
