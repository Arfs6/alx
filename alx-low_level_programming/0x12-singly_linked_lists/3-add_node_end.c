#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - append a new node to a list
 * @head: pointer to the first node of the list
 * @str: string to set list_t.str
 *
 * Return: address of new node
 * NULL if fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(newNode));
	if (newNode == NULL)
		return (NULL); /* insuffisient memory */
	for (len = 0; str[len]; ++len)
		;
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL) /* first node */
	{
		*head = newNode;
		return (newNode);
	}

	/* finding last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;

	return (newNode);
}
