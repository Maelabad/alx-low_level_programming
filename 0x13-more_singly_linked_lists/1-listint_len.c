#include "lists.h"
/**
* listint_len - returns the number of elements in a linked list.
* @h: the linked list
* Return: The number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
