#include "lists.h"
/**
* reverse_listint - reverses a linked list
* @head: linked list head
* Return: pointer to the first node of the reversed list
*
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start;
	listint_t *end;

	start = NULL;
	end = NULL;

	while (*head != NULL)
	{
		end = (*head)->next;
		(*head)->next = start;

		start = *head;
		*head = end;
	}
	*head = start;
	return (*head);
}
