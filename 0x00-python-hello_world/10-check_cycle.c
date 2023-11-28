#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - checks if a singly-linked list has a cycle
 * @list: singly-linked list.
 *
 * Return: if there is no cycle -0 if there is a cycle -1.
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	fast = list->next->next;
	slow = list->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
