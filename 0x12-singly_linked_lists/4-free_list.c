#include "lists.h"

/**
 * free_list - frees the list
 * @head: holds the head
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	for (; head != NULL; head = head->next)
	{
		temp = head;
		free(temp->str);
		free(temp);
	}
}
