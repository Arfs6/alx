#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at given index
 * @head: pointer to first node
 * @index: index of node to get
 *
 * Return: node at index
 * NULL: invalid index or head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	while (i <= index && node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}

	return (NULL);
}
