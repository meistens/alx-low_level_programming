#include "lists.h"
/**
 * free_listint - frees/deallocates a linked list
 * @head: linked list head
 * Return: no return
 *
 */
void free_listint(listint_t *head)
{
	listint_t *freeddd;

	while ((freeddd = head) != NULL)
	{
		head = head->next;
		free(freeddd);
	}
}
