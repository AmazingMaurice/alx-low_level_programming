#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * Main - Writing a function that prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t tali;

	tali = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		tali++;
	}
	return (tali);
}
