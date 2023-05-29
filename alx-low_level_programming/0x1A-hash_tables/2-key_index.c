#include <stddef.h>
#include "hash_tables.h"

/**
 * key_index - returns the index of the key
 * @key: key to search for
 * @size: size of hash table
 *
 * Return: index of key
 * 0: invalid string
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL)
		return (0);

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
