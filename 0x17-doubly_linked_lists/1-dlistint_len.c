#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a list
 * @h: head node of the linked list
 * Return: number of elements in a list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numElems = 0; /* set number of elements to 0 */
	const dlistint_t *tmp; /* initialize empty pointer */

	tmp = h; /* tmp initialized to head node */

	while (tmp != NULL) /* if tmp(head) is not NULL */
	{
		tmp = tmp->next; /* tmp is moved to next node till it is null */
		numElems++; /* increment */
	}
	return (numElems); /* return number of elements */
}
