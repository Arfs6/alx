#include <stdlib.h>

#include "lists.h"

/**
 * insert_node - insert a new node in a sorted link list
 * @head: pointer to first element in list
 * @number: n part of struct
 *
 * Return: inserted node
 * NULL: malloc fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	if (number < current->n)
	{
		new->next = current;
		*head = new;
		return (new);
	}

	while (current->next)
	{
		if (number <= current->next->n)
			break;
		current = current->next;
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
