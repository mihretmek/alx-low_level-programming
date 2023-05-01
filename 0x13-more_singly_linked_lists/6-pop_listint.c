#include "lists.h"

/**
 * pop_listint - a function that deletes head of listint_t
 * Return: head node's data
 * @head: head of node
 */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (value);
	value = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (value);
}


