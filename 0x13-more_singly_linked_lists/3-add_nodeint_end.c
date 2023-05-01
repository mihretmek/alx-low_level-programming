#include "lists.h"

/**
 * add_nodeint_end - a function that adds new node at
 * beginning of listint_t
 * Return: pointer to address of new element or NULL
 * @head: head of node
 * @n: value of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		return (new);
	}
}
