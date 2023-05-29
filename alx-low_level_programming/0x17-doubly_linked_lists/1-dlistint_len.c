#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - find the length of a list
 * @h: pointer to first element in the list
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *node;
	size_t count = 0;

	if (h == NULL)
		return (0);
	else if (h->next == NULL)
		return (1);
	node = h->next;
	for (count = 0; node; count++)
		node = node->next;
	count++;

	return (count);
}
