#include "lists.h"

/**
 * add_node - Add a node
 * @str: The string to add
 * @head: The head of the list
 * Return: The address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int count = 0;
	char *new = strdup(str);

	node = malloc(sizeof(list_t));
	while (*new)
	{
		count++;
		new++;
	}

	node->len = count;
	node->str = new;
	node->next = *head;
	return (node);
}
