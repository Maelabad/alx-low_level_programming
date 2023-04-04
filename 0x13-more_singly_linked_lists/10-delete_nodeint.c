#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the nth node
 * @head: The head of the list
 * @index: The index of the node to remove
 * Return: 1 if succed -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prec, *suiv;
	unsigned int r = 0;

	if (*head == NULL)
		return (-1);

	suiv = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(suiv);
		return (1);
	}

	prec = suiv;

	while (suiv != NULL)
	{
		if (r == index)
		{
			prec->next = suiv->next;
			free(suiv);

			if (suiv == NULL)
				return (1);
			return (-1);
		}
		r++;
		prec = suiv;
		suiv = suiv->next;
	}
	return (-1);
}
