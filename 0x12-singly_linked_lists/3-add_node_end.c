#include "lists.h"

/**
 * add_node_end - Add a node at the end
 * @str: The string to add
 * @head: The head of the list
 * Return: The address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	unsigned int count = 0;

	node = malloc(sizeof(list_t));

	if (str == NULL || node == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	while (str[count] != '\0')
	{
		count++;
	}

	node->len = count;
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;

	return (node);
}
