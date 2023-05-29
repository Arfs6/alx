#include "lists.h"

/**
 * sum_dlistint - sum all the values in a doubly linked list
 * @head: pointer to first node in the list
 *
 * Return: sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (head == NULL)
		return (0);

	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}

return (sum);
}
