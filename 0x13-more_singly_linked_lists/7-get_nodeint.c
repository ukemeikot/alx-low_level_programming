#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a link list
 * @head: the head pointer
 * @index: the index of the node to be returned.
 * Return: the nth node or NULL if node does not exixts.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
