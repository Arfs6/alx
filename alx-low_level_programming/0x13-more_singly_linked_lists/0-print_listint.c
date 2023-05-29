#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

#define TRUE 1

/**
 * print_listint - print the int value of a list_t
 * @h: pointer to first element in list
 *
 * Return: number of list elements printed
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (TRUE)
	{
		if (h->next == NULL)
		{
			printf("%i\n", h->n);
			count++;
			break;
		}
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
