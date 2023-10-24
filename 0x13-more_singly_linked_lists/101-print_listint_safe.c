#include "lists.h"
/**
 * print_listint_safe - prints list with a loop.
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

/**
 *looped_listint_len - checks the number of unique
 *nodes in a list.
 *@head: pointer to the head of the list.
 *Return: the number of unique nodes.
 */

size_t looped_listint_len(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *ahead, *chaser;

	if (head == NULL || head->next == NULL)
		return (0);
	ahead = head->next;
	chaser = (head->next)->next;
	while (chaser)
	{
		if (ahead == chaser)
		{
			ahead = head;
			while (ahead != chaser)
			{
				nodes++;
				ahead = ahead->next;
				chaser = chaser->next;
			}
			ahead = ahead->next;
			while (ahead != chaser)
			{
				nodes++;
				ahead = ahead->next;
			}
			return (nodes);
		}
		ahead = ahead->next;
		chaser = (chaser->next)->next;
	}
	return (0);
}
