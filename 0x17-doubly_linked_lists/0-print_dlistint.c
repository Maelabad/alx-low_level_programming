#include "lists.h"

/**
 * print_dlistint - Prints the elements of a double linked list
 * @h: The double linked list
 * Return: the number of nodes of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}
	return (length);
}
