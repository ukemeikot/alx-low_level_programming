#include "lists.h"
/**
 * sum_listint - sums the content of a list
 * @head: points to the head of a list.
 * Return: 0 if list is empty and sum otherwise.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
