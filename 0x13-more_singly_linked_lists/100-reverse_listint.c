#include "lists.h"

/**
 * reverse_listint - a function that reverses listint_t
 * Return: pointers to first node of reversed list
 * @head: head of node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
