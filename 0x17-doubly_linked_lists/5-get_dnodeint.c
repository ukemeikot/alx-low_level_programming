#include "lists.h"

/**
 * get_dnodeint_at_index - get node of doubly linked list in a given index
 * @head: pointer to the head node
 * @index: index to look for the node
 * Return: the node or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL && i < index; i++)
		head = head->next;
	return (head);
}
