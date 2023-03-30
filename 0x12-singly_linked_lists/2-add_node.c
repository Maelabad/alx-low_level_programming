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

	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	while (str[count] != '\0')
	{
		count++;
	}

	node->len = count;
	node->str = strdup(str);
	node->next = *head;
	*head = node;
	return (node);
}
