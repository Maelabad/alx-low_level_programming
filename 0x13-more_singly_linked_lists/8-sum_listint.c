#include "lists.h"

/**
 * sum_listint - Return the nth node
 * @head: The head of the list
 * Return: A node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
