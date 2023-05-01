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

	do {
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	while (h)
	return (count);
}

