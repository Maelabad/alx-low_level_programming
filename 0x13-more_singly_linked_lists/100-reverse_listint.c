#include "lists.h"
/**
 * reverse_listint - reverse the list
 * @head: The head of the list
 * Return: 1 if succed -1 if fails
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *suiv, *prec;

	if (head == NULL || *head == NULL)
		return (NULL);

	prec = NULL;

	while ((*head)->next != NULL)
	{
		suiv = (*head)->next;
		(*head)->next = prec;
		prec = *head;
		*head = suiv;
	}

	(*head)->next = prec;

	return (*head);
}
