#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_node, *temp;
	size_t nchar;

	nw_node = malloc(sizeof(list_t));
	if (nw_node == NULL)
		return (NULL);

	nw_node->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	nw_node->len = nchar;
	nw_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = nw_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nw_node;
	}

	return (*head);
