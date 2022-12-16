#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of list to add node to
 * @n: data of the node
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp; /* we all know what's going on */
	unsigned int i;

	if (h == NULL)
		return (NULL); /* or 0, whichever you want */

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h; /* head assigned to tmp */

	for (i = 0; tmp && i < idx; i++)
		tmp = tmp->next;

	if (!tmp && i == idx)
		return (add_dnodeint_end(h, n));

	if (!tmp || i > idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = tmp;
	new->prev = tmp->prev;
	(tmp->prev)->next = new;
	tmp->prev = new;

	return (new);
}
