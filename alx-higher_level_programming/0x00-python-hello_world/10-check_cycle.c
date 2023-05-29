#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - check if a link list has a loop
 * @list: link list to check
 *
 * Return: 0: no loop was found
 * 1: a loop was encountered
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = fast = list;

	while (1)
	{
		slow = slow->next;
		if (slow->next == NULL)
			break;

		if (!fast->next || !fast->next->next)
			break;
		fast = fast->next->next;

		if (fast == slow)/* loopint! */
			return (1);
	}

	return (0);
}
