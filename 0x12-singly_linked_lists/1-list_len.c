#include "lists.h"

/**
 *list_len - returns the number
 *of elements in alinked list
 *@h: It is a pointer to list_t
 *Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
