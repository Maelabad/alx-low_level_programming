#include "lists.h"

/**
* print_listint - Print all the int of a list
* @h: List to display
* Return: The number of elements
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n");
		i++;
		h = h->next;
	}
	return (i);
}
