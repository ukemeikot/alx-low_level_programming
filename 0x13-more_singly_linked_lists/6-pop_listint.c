#include "lists.h"
/**
 * pop_listint - deletes the head of a list and returns
 * its content.
 * @head: pointer to the head node
 * Return: 0 if empty and the content otherwise.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (*head == NULL)
		return (0);
	a = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (a);
}
