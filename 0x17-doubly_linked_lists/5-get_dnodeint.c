#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find
  * Return: The specific node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int num_iters = 0;

	if (head)
	{
		while (cur != NULL)
		{
			if (num_iters == index)
				return (cur);

			cur = cur->next;
			++num_iters;
		}
	}

	return (NULL);
}
