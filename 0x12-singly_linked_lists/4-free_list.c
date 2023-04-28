#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *working_node;

	while ((working_node = head) != NULL)
	{
		head = head->next;
		free(working_node->str);
		free(working_node);
	}
}
