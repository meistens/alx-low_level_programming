#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head of the list
 * Return: number of elements in the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodesNum = 0; /* number of nodes initialized at 0*/
	const dlistint_t *tmp; /* create an empty pointer to the list */

	tmp = h; /* assign the empty pointer to the head of the list */
	while (tmp != NULL) /* case: while head is not null */
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next; /* head(tmp) is moved(pointing) to next node */
		nodesNum++; /* increment number of element/node moved */
	}
	return (nodesNum);
}
