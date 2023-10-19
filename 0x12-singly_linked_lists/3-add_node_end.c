#include "lists.h"

/**
 * add_node_end - adds node at the end of a list
 * @head: the head
 * @str: the string
 * Return: NULL on failure and address of new element
 *if successful.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *newNode;
	list_t *temp = *head;

	while (str[length] != '\0')
		length++;
	if (str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = length;
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
