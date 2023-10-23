#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer to the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t no_of_elements = 0;

	for (; h != NULL; h = h->next)
	{
		no_of_elements++;
		printf("%d\n", h->n);
	}
	return (no_of_elements);
}
