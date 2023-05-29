#include <stdlib.h>
#include "hash_tables.h"

/**
 * node_free - frees a node in the hash table
 * @node: node to free
 */
void node_free(hash_node_t *node)
{
	hash_node_t *hold;

	while (node)
	{
		hold = node;
		node = node->next;
		free(hold->key);
		free(hold->value);
		free(hold);
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; ++idx)
	{
		if (ht->array[idx])
			node_free(ht->array[idx]);
	}

	free(ht->array);
	free(ht);
}
