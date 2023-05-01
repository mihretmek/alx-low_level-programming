#include "lists.h"

/**
 * print_listint - a function that prints all element in listint_t
 * Return: number of nodes
 * @h: head of node
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
