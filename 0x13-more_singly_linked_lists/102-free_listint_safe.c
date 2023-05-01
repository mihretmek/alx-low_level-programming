#include "lists.h"

/**
 * free_listint_safe - a function that frees listint_t
 * Return: size of list that was freed
 * @h: head of node
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int difference;
	listint_t *tmp;

	if (!h || !(*h))
		return (0);
	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
