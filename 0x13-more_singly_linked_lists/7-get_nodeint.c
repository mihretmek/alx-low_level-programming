#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns nth node
 * of listint_t
 * Return: NULL or nth node
 * @head: head of node
 * @index: index of node (starting from 0)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	tmp = head;
	while (i != index && tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if (i != index)
		return (NULL);
	return (tmp);
}
