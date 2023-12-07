#include "lists.h"

/**
 * print_dlistint - print a doubly linked list of integer
 * @h: head pointer to the linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
