#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse - reverse a single link list
 * @head: pointer to first node in link list
 *
 * Return: head of reversed list
 */
listint_t *reverse(listint_t *head)
{
	listint_t *cur, *next, *prev = NULL;

	if (head == NULL || head->next == NULL)
		return (head);

			cur = head;
			while (cur)
			{
				next = cur->next;
				cur->next = prev;
				prev = cur;
				if (next == NULL)
					break;
				cur = next;
			}

			return (cur);
}

/**
 * fix - fix the broken link in the link list
 * @rev: the reversed linklist
 * @hold: last node of first half of the link list
 */
void fix(listint_t *rev, listint_t *hold)
{
	rev = reverse(rev);
	hold->next = rev;
}

/**
 * is_palindrome - check if a link list is a palindrome
 * @head: pointer to first node
 *
 * Return: 1: is palindrome
 * 0: is not palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *curHead, *curRev, *rev, *hold;
	int i = 0, half;

	if (!head || !(*head))
		return (1);
	curHead = *head;

	if (curHead->next == NULL)
		return (1);
	for (i = 0; curHead->next; i++)/* find middle of list */
		curHead = curHead->next;
	half = (1 + i) / 2;
	curHead = *head, i = 0;
	while (1)
	{
		rev = curHead->next;
		hold = curHead;
		i++;
		if (i == half)
			break;
		curHead = curHead->next;
	}

	rev = reverse(rev);/* broke the list into two and reversed the 2nd half */
	hold->next = NULL;

	curHead = *head, curRev = rev;
	/* checking for palindrome... */
	while (curHead)
	{
		if (curHead->n != curRev->n)
		{
			fix(rev, hold);
			return (0);
		}
		curHead = curHead->next, curRev = curRev->next;
	}

	fix(rev, hold);
	return (1);
}
