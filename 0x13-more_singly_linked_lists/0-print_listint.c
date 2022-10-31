#include "lists.h"

/**
 * print_listint -  algorithm to print all the elements of
 * a linked list
 * @h: linked list head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
