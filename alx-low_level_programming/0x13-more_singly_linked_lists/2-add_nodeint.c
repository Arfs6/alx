#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - add a new node at the begining of a list
* @head: first element of the list
* @n: int n part of listint_t
*
*Return: pointer to new head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
