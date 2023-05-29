#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all data (n) in a listint
 * @head: pointer to first node
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (head == NULL)
		return (0);

	node = head;
	while (1)
	{
		if (node->next == NULL)
		{
			sum += node->n;
			break;
		}
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
