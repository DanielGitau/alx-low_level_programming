#include "lists.h"

/**
 * print_listint - prints the elements in the linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

