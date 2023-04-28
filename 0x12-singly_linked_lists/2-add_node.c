#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @str: string to store in the list.
 * @head: head of the linked list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x_node;
	size_t n;

	x_node = malloc(sizeof(list_t));
	if (x_node == NULL)
		return (NULL);
	x_node->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	x_node->len = n;
	x_node->next = *head;
	*head = x_node;

	return (*head);
}

