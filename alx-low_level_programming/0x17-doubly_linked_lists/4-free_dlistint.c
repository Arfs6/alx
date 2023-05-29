#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	if (head == NULL)
		return;

	while (head)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
