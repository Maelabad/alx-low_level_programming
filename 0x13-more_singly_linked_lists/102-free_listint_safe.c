#include "lists.h"
/**
 * free_listint_safe - free a list safe
 * @h: The head of the list
 * Return: A size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int i;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
