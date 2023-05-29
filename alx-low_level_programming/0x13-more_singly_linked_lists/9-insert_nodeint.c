#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node to a listint_t
 * @head: pointer to first node
 * @idx: index
 * @n: data
 *
 * Return: pointer to new node
 * NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *node;

	if (head == NULL || (*head == NULL && idx > 0))
		return (NULL);

	node = *head;
	while (node)
	{
		if (i == idx - 1 || idx == 0)
			break;
		else if (node->next == NULL && i < idx - 1)
			return (NULL);
		node = node->next;
		i++;
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	newNode->next = node->next;
	node->next = newNode;

	return (newNode);
}
