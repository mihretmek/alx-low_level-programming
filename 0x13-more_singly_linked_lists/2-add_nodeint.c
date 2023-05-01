#include "lists.h"

/**
 * add_nodeint - a function that adds new node at
 * beginning of listint_t
 * Return: pointer to address of new element or NULL
 * @head: head of node
 * @n: value of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
