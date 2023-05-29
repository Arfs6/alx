#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - append a node to a list
 * @head: pointer to first element in list
 * @n: data
 *
 * Return: address of newly allocated node
 * NULL: invalid head pointer or insufficient memory
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *hold;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	/* append node */
	hold = *head;
	while (hold->next)
		hold = hold->next;
	newNode->prev = hold;
	hold->next = newNode;

	return (newNode);
}
