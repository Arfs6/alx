#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_node(dlistint_t *node, int n);
/**
 * insert_dnodeint_at_index - insert a node at a given idex
 * @h: pointer to first node in list
 * @idx: index to add list to
 * @n: data section of node
 *
 * Return: address of newly created node
 * NULL: insufficient memory or invalid index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));
	else if (*h == NULL && idx > 0)
		return (NULL);

	node = *h;
	while (node)
	{
		i++;
		if (i == idx)
			break;
		node = node->next;
	}
		if (i == idx)
		{
			return (insert_node(node, n));
		}

	return (NULL);
}

/**
 * insert_node - insert a node  after node passed
 * @node: insert node after this node
 * @n: data of new node
 *
 * Return: address of newly created node
 * NULL: insufficient memory
 */
dlistint_t *insert_node(dlistint_t *node, int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = node->next;
	if (newNode->next)
		newNode->next->prev = newNode;
	newNode->prev = node;
	node->next = newNode;

	return (newNode);
}
