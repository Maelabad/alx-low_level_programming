#include "lists.h"

/**
  * free_dlistint - Free a 2 * linked list
  * @head: The head of the doubly linked list
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head, *next = NULL;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}
