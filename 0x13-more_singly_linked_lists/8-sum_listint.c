#include "lists.h"

/**
 * sum_listint - returns the sum of all the dsta (n) of a list
 * @head: linked list head
 * Return: sum of all data or 0 if list is empty
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
