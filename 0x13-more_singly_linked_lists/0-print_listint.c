#include "lists.h"

/**
 * Description: algorithm to print all the elements of a linked list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t count;
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return count;
}
