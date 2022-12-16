#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: nth node of a list
 * Return: 0 or null if list does not exist
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head; /* assign tmp to head */
	unsigned int i;
	/* at this point, you know what it does */
	if (head == NULL)
		return (NULL);

	/* iterate through list till nth index is reached */
	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next; /* move tmp to next node */
	}
	return (tmp);
}
