#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - finds a given node in a linked list
 * @head : pointer to the head of the linked list
 * @index: index of the node to find (indices starting at 0)
 * Return: pointer to the desired node,
 *         or NULL - if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t i;

for (i = 0; (i < index) && (head->next); i++)
head = head->next;

if (i < index)
return (NULL);

return (head);
}
