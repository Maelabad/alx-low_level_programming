#include "lists.h"
/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list
  * Return: the number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}

	return (len);
}
