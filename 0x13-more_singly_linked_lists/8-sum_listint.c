#include "lists.h"

/**
 * sum_listint - a function that returns sum of data
 * of listint_t
 * Return: 0 or sum
 * @head: head of node
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
