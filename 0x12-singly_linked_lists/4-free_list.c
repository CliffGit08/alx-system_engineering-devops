#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *crnt_node;

	while ((crnt_node = head) != NULL)
	{
		head = head->next;
		free(crnt_node->str);
		free(crnt_node);
	}
