#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a list.
 * @head: the pointerbto the head of the list
 * @n: the content of the new node.
 * Return: the address of the new elements of NULL if
 * it failed to create an address.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
