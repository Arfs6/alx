#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
	* add_node - add a node to the begining of the list.
	* @head: first element in the list
	* @str: string element in the list_t struct
	*
	* Return: pointer to new head
	* NULL if fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(newNode));
	if (newNode == NULL)
		return (NULL);/*insufficient memory */
	newNode->str = strdup(str);
	if (!newNode->str && str) /* if str == NULL strdup will return NULL */
		return (NULL); /* insufficient memory */
	for (len = 0; str[len]; ++len)
		;
		newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
