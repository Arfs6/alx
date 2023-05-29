#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - append a new node to a list
* @head: first element of list
*n: int part of listint_t
*
* Return: pointer to new node
*/
	listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
