#include "lists.h"

/**
 * insert_nodeint_at_index - adds node at a given index
 * @head: pointer to the head of the list
 * @idx: the index
 * @n: the content of the new node.
 * Return: the address of the new node. Null is returned if
 * new node can't be added.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0 || *head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (idx > 1 && temp->next != NULL)
	{
		temp = temp->next;
		idx--;
	}
	if (idx > 1)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
