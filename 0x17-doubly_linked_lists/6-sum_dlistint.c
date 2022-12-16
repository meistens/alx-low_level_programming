#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data of a list
 * @head: head of the list
 * Return: sum of all data or 0 if list is empty
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* sum set to 0 */

	if (head == NULL)
		return (0); /* checks if list is empty */

	while (head != NULL)
	{
		/* if head has data, assign sum to head ptr and incremented */
		/* head ptr is moved to next */
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
