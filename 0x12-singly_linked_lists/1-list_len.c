#include "lists.h"
/**
 * list_len - prints the length of the list
 * @h: pointer to elements of the list
 * Return: the total number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
