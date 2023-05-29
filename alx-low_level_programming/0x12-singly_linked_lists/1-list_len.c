#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return lenght of a list
 * @h: list
 *
 * Return: lenght of h
*/
size_t list_len(const list_t *h)
{
	int len = 0;

	for (len = 0; h != NULL; len++)
		h = h->next;

	return (len);
}
