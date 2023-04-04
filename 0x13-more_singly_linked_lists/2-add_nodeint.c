#include "lists.h"

/**
 * add_nodeint - Add a node at the start
 * @n: The number to add
 * @head: The head of the list
 * Return: The address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
