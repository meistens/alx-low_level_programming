#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list head
 *
 * Return: number of elements in a list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
