#include "lists.h"

/**
 * free_listint - frees the content of a list
 * @head: pointer to the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
