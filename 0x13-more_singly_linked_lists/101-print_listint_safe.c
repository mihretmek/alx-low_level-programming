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
	long int difference;

	while (head)
	{
		difference = head - (head->next);
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (difference > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
