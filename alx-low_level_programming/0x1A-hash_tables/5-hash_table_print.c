#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "hash_tables.h"

void node_str(hash_node_t *node, char *buf);

/**
 * hash_table_print - prints the content of the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	char *buf;
	int len;
	unsigned long int idx = 0;

	if (ht == NULL)
		return;

	buf = calloc(1024, 1);
	if (buf == NULL)
		return;

	putchar('{');

	for (idx = 0; idx < ht->size; ++idx)
	{
		if (ht->array[idx])
			node_str(ht->array[idx], buf);
	}

	len = strlen(buf);
	buf[len - 1] = '\0';
	buf[len - 2] = '\0';

	printf("%s}\n", buf);

	free(buf);
}

/**
 * node_str - gets the string representation of the linked list
 * @node: first node of list
 * @buf: buffer
 */
void node_str(hash_node_t *node, char *buf)
{
	char str[128];

	while (node)
	{
		sprintf(str, "'%s': '%s', ", node->key, node->value);
		strcat(buf, str);
		node = node->next;
	}
}
