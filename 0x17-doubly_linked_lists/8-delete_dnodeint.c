#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at nth index
 * @head: head of the list
 * @index: index of a list
 * Return: 1 or -1
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;
	dlistint_t *tmp;

	node = *head;

	if (node == NULL)
		return (-1);

	while (node->prev != NULL)
		node = node->prev;

	while (node != NULL)
	{
		if (count == index)
		{
			tmp = node;
			if (node->next == NULL)
				(node->prev)->next = NULL;
			else
			{
				(node->prev)->next = NULL;
				(node->next)->prev = NULL;
			}
			free(tmp);
			return (1);
		}
		count++;
		node = node->next;
	}
	return (-1);
}
