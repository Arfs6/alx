#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print the contents of a list_t link list
 * @h: pointer to first element
 *
 * Return: number of elements printed
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else if (h->str)
			printf("[%i] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
