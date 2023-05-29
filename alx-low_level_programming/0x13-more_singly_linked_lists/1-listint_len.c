#include <stdlib.h>
#include "lists.h"

#define TRUE 1

/**
 * listint_len - find the lenght of a link list
 * @h: pointer to first element in list
 *
 *Return: number of items in list
*/
size_t listint_len(const listint_t *h)
{
	unsigned long int count = 0;

	if (h == NULL)
		return (count);

	while (TRUE)
	{
		if (h->next == NULL)
		{
			count++;
			break;
		}
		count++;
		h = h->next;
	}

	return (count);
}
