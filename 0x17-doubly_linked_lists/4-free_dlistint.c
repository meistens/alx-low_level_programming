#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of the list
 * Return: Always 0
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp; /* create empty pointer */

	while (head != NULL) /* if head is not null */
	{
		tmp = head; /* assign head to empty ptr */
		head = head->next; /* head is moved to the next node till null */
		/* loop terminates if null but till then, free tmp! */
		free(tmp);
	}
	free(head); /* free head after loop is complete */
}
