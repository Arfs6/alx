#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

void add_node(hash_node_t *newNode, hash_table_t *ht,
		const char *key, unsigned long int idx);

/**
 * hash_table_set - add a key value pair to the hash table
 * @ht: hash table
 * @key: key string
 * @value: value string
 *
 * Return: 1: added successfully
 * 0: not successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newNode;

	if (!key || !*key || !value || !ht || !(ht->array))
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key), free(newNode);
		return (0);
	}
	newNode->next = NULL;

	/* add the node to the begining of the list at it's index */
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = newNode;
		return (1);
	}

	add_node(newNode, ht, key, idx);

	return (1);
}

/**
 * add_node - add the node to the array
 * @newNode: node to add to the link list.
 * @ht: hash table pointer.
 * @key: key to search for in list
 * @idx: index
 */
void add_node(hash_node_t *newNode, hash_table_t *ht,
		const char *key, unsigned long int idx)
{
	hash_node_t *node;

	node = ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = newNode->value;
			free(newNode->key), free(newNode);
			return;
		}
		node = node->next;
	}
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
}
