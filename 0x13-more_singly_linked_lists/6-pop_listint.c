#include "lists.h"

/**
 * pop_listint - a function that deletes head of listint_t
 * Return: head node's data
 * @head: head of node
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (data);
	tmp = *head;
	data = tmp->n;
	free(*head);
	*head = tmp->next;
	return (data);
}


