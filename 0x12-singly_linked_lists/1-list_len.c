#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t number_nodes;

	number_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_nodes++;
	}
	return (number_nodes);
