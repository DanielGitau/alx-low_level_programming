#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a specified index
 * @head: Pointer to the first node in a linked list
 * @index: Index of the node to return
 *
 * Return: Pointer to the expected node or NULL
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	for (temp = head; temp && index > 0; temp = temp->next, index--)
	{

	}
	return (temp);
}
