#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of the list
 * @head: head of the list
 * @n: element to add to the list
 * Return: address of the new element or NULL if it fails
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)); /* allocate memory */
	if (newNode == NULL) /* check if list is empty */
		return (NULL);

	newNode->n = n; /* assign data to the new node */
	/* prev and next ptr of new node is set to null */
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL) /* if head of list is null */
		*head = newNode; /* set the head to new node */
	else
	{
		dlistint_t *tmp = *head; /* create a tmp ptr to head ptr */
		while (tmp->next != NULL)
			tmp = tmp->next; /* traverse list till last node */
		/* then move tmp to it */
		tmp->next = newNode; /* set tmp next ptr to new node */
		newNode->prev = tmp; /* set new node prev ptr to tmp */
	}
	return (newNode);
}
