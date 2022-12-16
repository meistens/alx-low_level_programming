#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list (dp style)
 * @head: head of the list
 * @n: element/integer to add to list
 * Return: address of the new element or NULL of it failed
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode; /* create a new node */

	newNode = malloc(sizeof(dlistint_t)); /* allocate mem to node in heap */
	if (newNode == NULL) /* check if mem allocation was successful */
		return (NULL);

	newNode->n = n; /* assign data to the new node */
	newNode->prev = NULL; /* new node prev pointer address is made null */
	if (*head == NULL) /* check if list is empty */
	{
		newNode->next = NULL; /* make the new node ptr null or seg */
		*head = newNode; /* then assign a new node to the head */
	}
	else
	{
		newNode->next = *head; /* assign pointer of new node to head */
		(*head)->prev = newNode; /* assign prev ptr of head to new */
		*head = newNode; /* assign new node to head */
	}
	return (newNode); /* return, makes sense with a diagram */
}
