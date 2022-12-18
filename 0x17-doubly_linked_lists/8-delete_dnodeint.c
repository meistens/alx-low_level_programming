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
	dlistint_t *tmp;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp && i < index; i++)
		tmp = tmp->next;
	if (tmp)
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}

	return (-1);
}
