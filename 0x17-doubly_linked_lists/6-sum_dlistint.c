#include "lists.h"

/**
 * sum_dlistint - sum doubly linked list of integer
 * @head: pointer to the head node
 * Return: the sum or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
