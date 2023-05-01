#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts new
 * node at given index
 * Return: address of new node or NULL
 * @head: head of node
 * @idx: index of list for new node
 * @n: value of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	while (tmp != NULL && i != idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != idx - 1 && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx != 0)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}

