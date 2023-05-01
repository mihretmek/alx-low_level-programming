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
	listint_t *tmp = *head;
	listint_t *del = NULL;
	unsigned int i = 0;
	
	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	del = tmp->next;
	tmp->next = del->next;
	free(del);
	return (1);
}
