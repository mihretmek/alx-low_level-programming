#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a
 * node at a given index
 * Return: 1 or -1
 * @head: head of node
 * @index: index for node to be deleted (from 0)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *del;
	unsigned int i = 0;

	tmp = *head;
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		while (tmp != NULL && i != index - 1)
		{
			i++;
			tmp = tmp->next;
		}
		if (i != index - 1)
			return (-1);
		del = tmp->next;
		tmp->next = tmp->next->next;
		free(del);
		return (1);
	}
}
