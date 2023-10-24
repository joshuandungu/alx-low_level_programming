#include "lists.h"
/**
 * list_len - find the length of a list
 * @h: head node
 * Return: length of the node
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
