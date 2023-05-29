#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
	 * _strdup - copy string in src to dest
	* @src: the string to copy
	*
	* Return: The copied string
*/
char *_strdup(char *src)
{
	int i = 0;
	char *cpy;

	for (i = 0; src[i]; ++i)
		;

	cpy = malloc(sizeof(*cpy) * (i + 1));
	if (!cpy)
		return (NULL);

	i = 0;
	while (1)
	{
		cpy[i] = src[i];
		if (src[i])
			i++;
		else
			break;
	}
	return (cpy);
}

/**
	* new_dog - create a new dog
	* @name: name of dog
	* @age: age of dog
	* @owner: owner of dog
	*
	* Return: pointer to dog
	*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (!dog)
		return (NULL);

	dog->name = _strdup(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _strdup(owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;

	return (dog);
}
