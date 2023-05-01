#include "lists.h"

/**
 * print_listint_safe - a function that prints listint_t
 * linked list
 * Return: number of nodes in list
 * @head: head of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	size_t new;
	const listint_t *tmp = NULL;
	const listint_t *node = NULL;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		num++;
		tmp = tmp->next;
		node = head;
		new = 0;
		while (new < num)
		{
			if (tmp == node)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (num);
			}
			node = node->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (num);
}
