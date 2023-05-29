#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a listint_t
 * @head: pointer to memory to be freed
	*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
