#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: the head of the list
 * @n: the content of the new member
 * Return: returns the address of the new wlwments or
 * NULL it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *currentnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		currentnode = *head;
		while (currentnode->next != NULL)
			currentnode = currentnode->next;
		currentnode->next = newnode;
	}
	return (newnode);
}
