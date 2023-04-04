#include "lists.h"

/**
 * add_nodeint_end - Add a node at the end
 * @n: The number to add
 * @head: The head of the list
 * Return: The address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

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
