#include "lists.h"

/**
 * pop_listint - Function delets the head node
 * of a linked list
 * @head: Pointer to the first element
 * in the linked list
 *
 * Return: The data to be deleted or 0 if
 * the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!*head || !head)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
