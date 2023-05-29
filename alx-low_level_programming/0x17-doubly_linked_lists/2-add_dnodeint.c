#include <stdlib.h>

#include "lists.h"

/**
 * add_dnodeint - add a list to the beginning of a list
 * @head: pointer to first elemnet in list
 * @n: data to add to node
 *
 * Return: address of new node
 * NULL: insufficient memory
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

	hold = *head;
	hold->prev = newNode;
	newNode->next = hold;
	*head = newNode;

	return (newNode);
}
