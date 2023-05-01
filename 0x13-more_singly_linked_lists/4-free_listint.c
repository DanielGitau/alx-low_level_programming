#include "lists.h"

/**
 * free_listint - Function frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *node;

	for (node = head; node != NULL; node = tmp)
	{
		tmp = node->next;
		free(node);
	}
}
