#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node at passed index
 * @head: pointer to first node
 * @index: index to node that will be returned
 *
 * Return: pointer to node
 * NULL if fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	node = head;
	while (i <= index)
	{
		if (i == index)
			return (node);
		else if (node->next != NULL)
		{
			node = node->next;
			i++;
		}
		else
			return (NULL);
	}

	return (NULL);
}
