#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - gets a value in a hash table
 * @ht: hash table to check for value
 * @key: key of value
 *
 * Return: value associated to key
 * NULL: coudn't find value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || ht->size == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		return (NULL);

	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
