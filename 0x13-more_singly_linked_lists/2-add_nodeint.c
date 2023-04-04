#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Add  a new node at the beginning of a list.
 * @head: Address of the the first node of a list.
 * @n: data to insert in that new node.
 * Return: Address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp  = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);
	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (tp);
}
