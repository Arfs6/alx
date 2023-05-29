#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: start of list
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
