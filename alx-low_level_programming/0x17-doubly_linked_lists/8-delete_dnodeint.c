#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node in a list at a given index
 * @head: pointer to first node in list
 * @index: index of node to be deleted
 *
 * Return: 1: node deleted successfully
 * -1: coudn't delete node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node, *hold;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		if (node->next)
			node->next->prev = NULL;
		*head = node->next;
		free(node);
	}

	while (node)
	{
		i++;
		if (i == index)
			break;
		node = node->next;
	}

	if (i == index && node)
	{
		hold = node->next;
		node->next = hold->next;
		if (hold->next != NULL)
		hold->next->prev = node;
		free(hold);
		return (1);
	}

	return (-1);
}
