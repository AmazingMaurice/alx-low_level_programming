#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store on the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x_node, *current_node;
	size_t n;

	x_node = malloc(sizeof(list_t));
	if (x_node == NULL)
		return (NULL);

	x_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	x_node->len = n;
	x_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = x_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = x_node;
	}

	return (*head);
}
