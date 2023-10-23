#include "lists.h"

/**
 * free_listint2 - frees the content of a list and sets the
 * head pointer to NULL
 * @head: the head pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
