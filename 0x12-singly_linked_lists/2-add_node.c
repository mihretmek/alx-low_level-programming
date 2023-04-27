#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - a function to add a new node at head
 * Return: address of new element or NULL
 * @head: head of node
 * @str: string
 */

list_t add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
