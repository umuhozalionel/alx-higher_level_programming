#include "lists.h"

/**
 * listint_size - pulling out the length of the singly linkekd list
 * @h: identifying the node of the linked list
 *
 * Return: length of singly linked list
 */

int listint_size(const listint_t *h)
{
	const listint_t *current;
	int count = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
/**
 * compare_arr - compare 2 arrays of the integer to check if they are the same
 * @arr1: first array
 * @arr2: second array
 * @len: length of first array
 *
 * Return: 0 if not same and 1 if same
 */

int compare_arr(int *arr1, int *arr2, int len)
{
	int i, equal;

	equal = 1;

	for (i = 0; i < len; i++)
	{
		if (arr1[i] != arr2[i])
		{
			equal = 0;
			break;
		}
	}
	return (equal);
}
/**
 * is_palindrome - check if linked list is palindrome
 * @head: head node oof linked list
 *
 * Return: 0 if not a palindrome and 1 if palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *current;
	int i, j, arr1[10240], arr2[10240], len;

	if (head == NULL)
		return (0);

	len = listint_size(*head);
	current = *head;

	i = 0;
	while (current != NULL)
	{
		arr1[i] = current->n;
		current = current->next;
		i++;
	}

	for (j = 0; j < len; j++)
		arr2[j] = arr1[len - 1 - j];
	return (compare_arr(arr1, arr2, len));
}
