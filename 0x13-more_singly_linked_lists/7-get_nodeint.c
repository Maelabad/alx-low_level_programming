#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node
 * @head: The head of the list
 * @index: The index of the node to return
 * Return: A node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int r = 0;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->next = NULL;
	while (head != NULL)
	{
		if (r == index)
		{
			node->n = head->n;
			return (node);
		}
		r++;
		head = head->next;
	}
	return (NULL);
}
