#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <Stdlib.h>

/**
 * print_list - a function that prints all elements of list
 * Return: number of nodes
 * @h: head of node
 */

size_t print_list(const char *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
