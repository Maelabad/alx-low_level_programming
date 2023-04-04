#include "lists.h"

/**
 * pop_listint - Delete the node at the start
 * @head: The head of the list
 * Return: The data node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int r = 0;

	if (*head != NULL)
	{
		r = ((*head)->n);
		tmp = *head;
		*head = tmp->next;
		tmp->next = NULL;
		free(tmp);

	}
	return (r);

}
