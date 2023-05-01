#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of
 * a linked list
 * @head: points to the first node in the list
 * @n: The data to be inserted in the new node
 *
 * Return: Pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *node;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	node = *head;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = newnode;
	return (newnode);
}
