#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create and initialize a hash table
 * @size: size of table
 *
 * Return: newly allocated table
 * NULL: insufficient memory
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	table = malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(*(table->array)) * size);
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
		table->array[i] = NULL;

	return (table);
}
