#include "lists.h"
/**
 * print_listint_safe - print the list
 * @head: The head of the list
 * Return: A size
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL, *new_list = NULL;
	size_t count = 0;
	size_t nNode;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		nNode = 0;
		tmp = tmp->next;
		new_list = head;
		while (nNode < count)
		{
			if (tmp == new_list)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			nNode++;
			new_list = new_list->next;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
