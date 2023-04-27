#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: pointer to the head
 *
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
