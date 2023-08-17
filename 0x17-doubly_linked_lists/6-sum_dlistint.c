#include "lists.h"

/**
  * sum_dlistint - Sum of all data (n) in a doubly linked list
  * @head: The head of the doubly linked list
  * Return: The sum of all data on the list
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	int sum = 0;

	if (head)
	{
		while (cur != NULL)
		{
			sum += cur->n;
			cur = cur->next;
		}
	}

	return (sum);
}
