#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - a function that returns number of elements
 * Return: n in list_t
 * @h: head of node
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
