#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *jo;
	listint_t *lo;

	jo = NULL;
	lo = NULL;

	while (*head != NULL)
	{
		lo = (*head)->next;
		(*head)->next = jo;
		jo = *head;
		*head = lo;
	}

	*head = jo;
	return (*head);
}
