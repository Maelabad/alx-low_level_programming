#include "lists.h"

/**
 * insert_nodeint_at_index - Add a node at the nth index
 * @n: The number to add
 * @head: The head of the list
 * @idx: The index where add the node
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *prec, *suiv;
	unsigned int count = 0;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	prec = *head;
	suiv = *head;
	while (suiv != NULL)
	{
		if (count == idx)
		{
			node->next = suiv;
			prec->next = node;
			return (node);
		}
		prec = suiv;
		suiv = suiv->next;
		count++;
	}
	return (NULL);
}
