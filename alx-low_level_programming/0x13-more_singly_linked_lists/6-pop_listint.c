#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the first node of a list
 * @head: first node pointer
 *
 * Return: data of the node
 * 0 if node is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL || head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	if (temp->next != NULL)
		*head = (temp->next);
	else
		*head = NULL;
	free(temp);
	temp = NULL;

	return (data);
}
