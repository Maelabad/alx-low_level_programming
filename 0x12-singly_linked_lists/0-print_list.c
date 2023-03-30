#include "lists.h"

/**
 * print_str - print a string
 * @str: The string to display
 * Return: Nothing
 */
void print_str(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}

/**
* print_list - Print all the elements of a list
* @h: List to display
* Return: The number of elements
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar(('0');
			_putchar(']');
			_putchar(' ');
			print_str("(nil)");
		}
		else
		{
			_putchar('[');
			_putchar((*h).len + '0');
			_putchar(']');
			_putchar(' ');
			print_str(h->str);
		}
		_putchar('\n');
		i++;
		h = h->next;
	}
	return (i)
}
