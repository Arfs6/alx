#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print a doubly linked list
 * @h: pointer to first element of the list
 *
 * Return: number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	dlistint_t *cur;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
	{
		printf("%i\n", h->n);
		return (1);
	}

	cur = h->next;
	cur = cur->prev;
	while (cur)
	{
		printf("%i\n", cur->n);
		num++;
		cur = cur->next;
	}

	return (num);
}
