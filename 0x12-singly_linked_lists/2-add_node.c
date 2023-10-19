#include "lists.h"

/**
 * add_node - a function that adds new nodes
 * to a list.
 * @head: the previeus node
 * @str: the input string
 * Return: NULL if input string is null and
 * the address of the new elements of the list otherwise.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int length = 0;

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
	newNode->next = (*head);
	(*head) = newNode;
	return (newNode);
}
