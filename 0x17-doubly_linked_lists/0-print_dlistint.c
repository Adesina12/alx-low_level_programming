#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint: Doubly linked list
 * @h: a constant
 * Return: the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
